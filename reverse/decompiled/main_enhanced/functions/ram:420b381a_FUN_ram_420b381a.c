
undefined4
FUN_ram_420b381a(int param_1,char *param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 == 0) || (param_4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if (param_2 == (char *)0x0) {
    if (param_3 != -1) {
      return 0x102;
    }
    param_2 = "scope, not add features.";
  }
  FUN_ram_4039771c(*(undefined4 *)(param_1 + 0x10),0xffffffff);
  iVar5 = *(int *)(param_1 + 0x14);
  iVar2 = iVar5;
  iVar4 = 0;
  while (iVar3 = iVar2, iVar3 != 0) {
    iVar4 = iVar3;
    iVar2 = *(int *)(iVar3 + 8);
  }
  if ((iVar4 == 0) ||
     ((*(int *)(iVar4 + 4) != 0 && (param_2 == "scope, not add features." && param_3 == -1)))) {
    iVar2 = FUN_ram_4039c08e(1,0xc);
    if (iVar2 != 0) {
      iVar3 = FUN_ram_420b327a(iVar2,param_2,param_3,param_4,param_5,param_6,param_7);
      if (iVar3 == 0) {
        uVar1 = 0;
        if (iVar4 == 0) {
          *(int *)(iVar2 + 8) = iVar5;
          *(int *)(param_1 + 0x14) = iVar2;
        }
        else {
          *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar4 + 8);
          *(int *)(iVar4 + 8) = iVar2;
        }
        goto LAB_ram_420b38da;
      }
      thunk_FUN_ram_40390634(iVar2);
    }
    uVar1 = 0x101;
  }
  else {
    uVar1 = FUN_ram_420b327a(iVar4,param_2);
  }
LAB_ram_420b38da:
  FUN_ram_403972dc(*(undefined4 *)(param_1 + 0x10));
  return uVar1;
}

