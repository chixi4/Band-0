
void FUN_ram_4039f314(undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint auStack_14 [3];
  
  iVar1 = FUN_ram_4039f1f8(param_1,auStack_14);
  if (iVar1 == 0) {
    *param_2 = auStack_14[0] >> 4 & 4;
  }
  return;
}

