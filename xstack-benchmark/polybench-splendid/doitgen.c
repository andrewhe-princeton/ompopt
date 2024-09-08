
int main(int argc, char ** argv) {
  uint64_t dump_code = strtol(argv[1], ((uint8_t**)0), 10);
  uint64_t nr = strtol(argv[2], ((uint8_t**)0), 10);
  uint64_t nq = strtol(argv[3], ((uint8_t**)0), 10);
  uint64_t np = strtol(argv[4], ((uint8_t**)0), 10);
  uint8_t* A = malloc((nr << 32) * nq * np >> 29);
  uint8_t* sum = malloc((nr << 32) * nq * np >> 29);
  double* C4 = malloc((np << 3) * np);
for(uint64_t i = 0; i < nr;   i = i + 1){
for(uint64_t j = 0; j < nq;   j = j + 1){
for(uint64_t k = 0; k < np;   k = k + 1){
  ((((double*)A)+np * nq * i)+j * np)[k] = ((double)(i) * (double)(j) + (double)(k)) / (double)(np);
}
}
}
for(uint64_t i = 0; i < np;   i = i + 1){
for(uint64_t j = 0; j < np;   j = j + 1){
  (((double*)C4)+i * np)[j] = (double)(i) * (double)(j) / (double)(np);
}
}
  #pragma omp parallel 
{
uint64_t _2 = ((nr << 32) + -4294967296 >> 32) + 1;

#pragma omp for schedule(static) nowait
for(uint64_t i = 0; i<=(_2 - 1); i = i + 1){
for(uint64_t j = 0; j < nq;   j = j + 1){
for(uint64_t k = 0; k < np;   k = k + 1){
  *((double*)((sum+(np << 3) * (j + i * nq))+(k << 3))) = 0;
  double __p_scalar_57 = 0;
for(uint64_t l = 0; l < np;   l = l + 1){
  __p_scalar_57 = (__p_scalar_57 + *((double*)((A+(np << 3) * (j + i * nq))+(l << 3))) * C4[l * np+k]);
}
  *((double*)((sum+(np << 3) * (j + i * nq))+(k << 3))) = __p_scalar_57;
}
for(uint64_t k = 0; k < np;   k = k + 1){
  *((uint64_t*)((A+(np << 3) * (j + i * nq))+(k << 3))) = *((uint64_t*)((sum+(np << 3) * (j + i * nq))+(k << 3)));
}
}
}
}
  if (dump_code == 1) {
for(uint64_t i = 0; i < nr;   i = i + 1){
for(uint64_t j = 0; j < nq;   j = j + 1){
for(uint64_t k = 0; k < np;   k = k + 1){
  fprintf(stderr, (_OC_str), ((((double*)A)+np * nq * i)+j * np)[k]);
  if (i % 20 == 0) {
  fputc(10, stderr);
}

}
}
}
  fputc(10, stderr);
}

free(A);
free(sum);
free(C4);
  return 0;
}

