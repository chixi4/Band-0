
void FUN_ram_4039e6aa(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint auStack_14 [3];
  
  iVar1 = FUN_ram_4039f1cc(param_1,auStack_14);
  if (iVar1 == 0) {
    *param_2 = (auStack_14[0] & 2) << 1;
  }
  return;
}

