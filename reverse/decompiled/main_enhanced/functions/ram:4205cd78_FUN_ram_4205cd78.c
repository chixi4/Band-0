
int FUN_ram_4205cd78(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int aiStack_38 [2];
  undefined1 uStack_30;
  
  iVar1 = FUN_ram_4205dde6(param_1,param_3);
  if (iVar1 != 0) {
    aiStack_38[0] = iVar1;
    uStack_30 = param_2;
    iVar2 = FUN_ram_4205cd16(0x4204dd38,aiStack_38);
    if (iVar2 == 0) {
      return iVar1;
    }
    if (((*(int *)(iVar1 + 8) != 0) || (*(int *)(iVar1 + 0x10) == 0)) ||
       (*(int *)(iVar1 + 0x14) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
    FUN_ram_4205c8ac(iVar1 + 0x10);
    FUN_ram_420531f8(6,iVar1);
  }
  return 0;
}

