
int main(int argc, char ** argv) {
  uint32_t _argc = (uint32_t)argc;
  uint8_t** _argv = (uint8_t**)argv;
  uint64_t _call_2e_i = strtol(_argv[1], ((uint8_t**)0), 10);
  uint64_t _call_2e_i44 = strtol(_argv[2], ((uint8_t**)0), 10);
  uint64_t _call_2e_i46 = strtol(_argv[3], ((uint8_t**)0), 10);
  uint8_t* _call6 = malloc((_call_2e_i44 << 3) * _call_2e_i44);
  uint8_t* _call10 = malloc((_call_2e_i44 << 3) * _call_2e_i44);
for(uint64_t _indvars_2e_iv48_2e_i = 0; _indvars_2e_iv_2e_next49_2e_i < _call_2e_i44;  _indvars_2e_iv_2e_next49_2e_i = _indvars_2e_iv48_2e_i + 1){
for(uint64_t _indvars_2e_iv_2e_i = 0; _indvars_2e_iv_2e_next_2e_i < _call_2e_i44;  _indvars_2e_iv_2e_next_2e_i = _indvars_2e_iv_2e_i + 1){
  (((double*)_call6)+_indvars_2e_iv48_2e_i * _call_2e_i44)[_indvars_2e_iv_2e_i] = ((double)(_indvars_2e_iv48_2e_i) * (double)((_indvars_2e_iv_2e_i + 2)) + 2) / (double)(_call_2e_i44);
  (((double*)_call10)+_indvars_2e_iv48_2e_i * _call_2e_i44)[_indvars_2e_iv_2e_i] = ((double)(_indvars_2e_iv48_2e_i) * (double)((_indvars_2e_iv_2e_i + 3)) + 3) / (double)(_call_2e_i44);
}
}
for(uint64_t _polly_2e_indvar_2e_i = 0; _polly_2e_indvar_next_2e_i < _call_2e_i46;  _polly_2e_indvar_next_2e_i = _polly_2e_indvar_2e_i + 1){
  #pragma omp parallel 
{
uint64_t _2 = _call_2e_i44 + -2;

#pragma omp for schedule(static)
for(uint64_t _polly_2e_indvar = 0; _polly_2e_indvar<=(_2 - 1);_polly_2e_indvar+=1){
  if (_call_2e_i44 > 2) {
for(uint64_t _polly_2e_indvar4 = 0; _polly_2e_indvar_next5 < _call_2e_i44 + -2;  _polly_2e_indvar_next5 = _polly_2e_indvar4 + 1){
  *((double*)((((uint8_t*)(((double*)_call10)+1))+((_polly_2e_indvar << 3) + 8) * _call_2e_i44)+(_polly_2e_indvar4 << 3))) = ((((*((double*)((((uint8_t*)(((double*)_call6)+1))+((_polly_2e_indvar << 3) + 8) * _call_2e_i44)+(_polly_2e_indvar4 << 3))) + *((double*)((((uint8_t*)(double*)_call6)+((_polly_2e_indvar << 3) + 8) * _call_2e_i44)+(_polly_2e_indvar4 << 3)))) + *((double*)((((uint8_t*)(((double*)_call6)+2))+((_polly_2e_indvar << 3) + 8) * _call_2e_i44)+(_polly_2e_indvar4 << 3)))) + *((double*)((((uint8_t*)(((double*)_call6)+1))+((_polly_2e_indvar << 3) + 16) * _call_2e_i44)+(_polly_2e_indvar4 << 3)))) + ((((double*)_call6)+1)+_polly_2e_indvar * _call_2e_i44)[_polly_2e_indvar4]) * 0.20000000000000001;
}
}

}
}
  #pragma omp parallel 
{
uint64_t _2 = _call_2e_i44 + -2;

#pragma omp for schedule(static)
for(uint64_t _polly_2e_indvar = 0; _polly_2e_indvar<=(_2 - 1);_polly_2e_indvar+=1){
  if (_call_2e_i44 > 2) {
for(uint64_t _polly_2e_indvar4 = 0; _polly_2e_indvar_next5 < _call_2e_i44 + -2;  _polly_2e_indvar_next5 = _polly_2e_indvar4 + 1){
  *((uint64_t*)((((uint8_t*)(((double*)_call6)+1))+((_polly_2e_indvar << 3) + 8) * _call_2e_i44)+(_polly_2e_indvar4 << 3))) = *((uint64_t*)((((uint8_t*)(((double*)_call10)+1))+((_polly_2e_indvar << 3) + 8) * _call_2e_i44)+(_polly_2e_indvar4 << 3)));
}
}

}
}
}
  if (_call_2e_i == 1) {
for(uint64_t _indvars_2e_iv32_2e_i = 0; _indvars_2e_iv_2e_next33_2e_i < _call_2e_i44;  _indvars_2e_iv_2e_next33_2e_i = _indvars_2e_iv32_2e_i + 1){
for(uint64_t _indvars_2e_iv_2e_i52 = 0; _indvars_2e_iv_2e_next_2e_i55 < _call_2e_i44;  _indvars_2e_iv_2e_next_2e_i55 = _indvars_2e_iv_2e_i52 + 1){
  fprintf(stderr, (_OC_str), (((double*)_call6)+_indvars_2e_iv32_2e_i * _call_2e_i44)[_indvars_2e_iv_2e_i52]);
  if ((int)(_indvars_2e_iv32_2e_i * _call_2e_i44 + _indvars_2e_iv_2e_i52) % (int)20 == 0) {
  fputc(10, stderr);
}

}
}
  fputc(10, stderr);
}

free(_call6);
free(_call10);
  return 0;
}

