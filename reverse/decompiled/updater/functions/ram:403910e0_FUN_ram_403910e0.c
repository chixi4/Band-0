
void FUN_ram_403910e0(int *param_1)

{
  int *apiStack_14 [4];
  
  apiStack_14[0] = param_1;
  if (*param_1 == -0x44ef3bcd) {
    apiStack_14[0] = (int *)&DAT_ram_3fcb1fcc;
  }
  FUN_ram_40390ff8(apiStack_14);
  return;
}

