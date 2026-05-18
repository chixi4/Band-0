
undefined4 FUN_ram_420a5718(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)&SUB_ram_400104a8)(param_2);
    if (0xff < uVar1) {
      return 0xffff8f00;
    }
  }
  FUN_ram_420a52d6(param_1);
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0xc0) = &DAT_ram_3c0c39bc;
  }
  else {
    iVar2 = FUN_ram_4206d7ce(1,uVar1 + 1);
    *(int *)(param_1 + 0xc0) = iVar2;
    if (iVar2 == 0) {
      return 0xffff8100;
    }
    FUN_ram_4039c11e(iVar2,param_2,uVar1);
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + uVar1) = 0;
  }
  return 0;
}

