
undefined4 FUN_ram_42058392(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  uVar1 = FUN_ram_420523b8(*(int *)(param_1 + 0x54) + -1);
  iVar2 = FUN_ram_4205752e(param_1,0,uVar1);
  if (iVar2 != 0) {
    uVar1 = FUN_ram_420573d8(param_1,iVar2,param_1,param_1 + 4);
    return uVar1;
  }
  return 0xffffffff;
}

