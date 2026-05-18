
undefined4
FUN_ram_42079efe(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    if (param_3 != -1) {
      return 0x102;
    }
    param_2 = 0x3c071420;
  }
  FUN_ram_40395a18(*(undefined4 *)(param_1 + 0x10),0xffffffff);
  iVar5 = *(int *)(param_1 + 0x14);
  iVar2 = iVar5;
  iVar4 = 0;
  while (iVar3 = iVar2, iVar3 != 0) {
    iVar4 = iVar3;
    iVar2 = *(int *)(iVar3 + 8);
  }
  if ((iVar4 == 0) || ((*(int *)(iVar4 + 4) != 0 && (param_2 == 0x3c071420 && param_3 == -1)))) {
    iVar2 = FUN_ram_40399d1a(1,0xc);
    if (iVar2 != 0) {
      iVar3 = FUN_ram_42079ada(iVar2,param_2,param_3,param_4,param_5,param_6,param_7);
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
        goto LAB_ram_42079faa;
      }
      thunk_FUN_ram_40390608(iVar2);
    }
    uVar1 = 0x101;
  }
  else {
    uVar1 = FUN_ram_42079ada(iVar4,param_2);
  }
LAB_ram_42079faa:
  FUN_ram_4039566c(*(undefined4 *)(param_1 + 0x10));
  return uVar1;
}

