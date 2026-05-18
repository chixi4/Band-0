
void FUN_ram_420a3550(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 auStack_14 [2];
  
  if (param_1 != 0) {
    if ((*(int **)(param_1 + 0x38) != (int *)0x0) &&
       (iVar1 = **(int **)(param_1 + 0x38), iVar1 != 0)) {
      FUN_ram_4039c11e(iVar1,param_2,0xc);
      iVar1 = FUN_ram_420a2c7c(param_2,1,auStack_14);
      if (iVar1 == 0) {
        *(undefined4 *)(**(int **)(param_1 + 0x38) + 0xc) = auStack_14[0];
      }
    }
    return;
  }
  return;
}

