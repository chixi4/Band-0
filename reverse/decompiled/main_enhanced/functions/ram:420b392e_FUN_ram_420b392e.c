
undefined4
FUN_ram_420b392e(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if (param_2 == 0) {
    return 0x102;
  }
  if (param_3 == -1) {
    return 0x102;
  }
  local_40 = 0;
  iStack_3c = 0;
  iStack_38 = 0;
  iStack_34 = 0;
  if ((param_4 != 0) && (param_5 != 0)) {
    iVar1 = FUN_ram_4039c08e(1,param_5);
    if (iVar1 == 0) {
      return 0x101;
    }
    FUN_ram_4039c11e(iVar1,param_4,param_5);
    local_40 = CONCAT22(local_40._2_2_,&sedeleg);
    iStack_34 = iVar1;
  }
  iVar1 = *(int *)(param_1 + 8);
  iStack_3c = param_2;
  iStack_38 = param_3;
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4039771c(*(undefined4 *)(param_1 + 0x10),param_6);
    if (iVar1 != 1) goto LAB_ram_420b39c0;
    iVar3 = *(int *)(param_1 + 0xc);
    iVar1 = FUN_ram_403989ea();
    if (iVar3 == iVar1) {
      FUN_ram_403972dc(*(undefined4 *)(param_1 + 0x10));
      param_6 = 0;
    }
    else {
      FUN_ram_403972dc(*(undefined4 *)(param_1 + 0x10));
    }
    uVar2 = *(undefined4 *)(param_1 + 4);
  }
  else {
    iVar3 = FUN_ram_403989ea();
    uVar2 = *(undefined4 *)(param_1 + 4);
    if (iVar1 == iVar3) {
      param_6 = 0;
    }
  }
  iVar1 = FUN_ram_40397156(uVar2,&local_40,param_6,0);
  if (iVar1 == 1) {
    return 0;
  }
LAB_ram_420b39c0:
  if ((local_40 & 0xff) != 0) {
    thunk_FUN_ram_40390634(iStack_34);
  }
  return 0x107;
}

