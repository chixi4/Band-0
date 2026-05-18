
undefined4 FUN_ram_4206ef30(int param_1,int param_2)

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
  FUN_ram_4206eb64(param_1);
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0x3c071e68;
  }
  else {
    iVar2 = FUN_ram_4202939a(1,uVar1 + 1);
    *(int *)(param_1 + 0xc0) = iVar2;
    if (iVar2 == 0) {
      return 0xffff8100;
    }
    FUN_ram_40399daa(iVar2,param_2,uVar1);
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + uVar1) = 0;
  }
  return 0;
}

