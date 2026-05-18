
undefined4 FUN_ram_42031780(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_ram_420316f2();
    uVar2 = 0xffffffd2;
    if (iVar1 != 0) {
      uVar2 = 0;
      *param_2 = *(undefined4 *)(iVar1 + 0x10);
      *param_3 = *(undefined4 *)(iVar1 + 0x14);
    }
    return uVar2;
  }
  return 0xffffffd2;
}

