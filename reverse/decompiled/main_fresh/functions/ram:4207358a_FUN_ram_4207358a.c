
undefined4
FUN_ram_4207358a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < 0x14) {
    iVar1 = iVar2 * 0x14 + param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = param_3;
    *(undefined4 *)(iVar1 + 0x20) = param_4;
    *(undefined4 *)(iVar1 + 0x24) = param_5;
    *(int *)(param_1 + 0x10) = iVar2 + 1;
    return 0;
  }
  return 0xffffffc2;
}

