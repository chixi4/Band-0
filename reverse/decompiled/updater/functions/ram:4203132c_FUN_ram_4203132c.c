
undefined4 FUN_ram_4203132c(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  (*(code *)&SUB_ram_40010488)(param_1 + 0x14,0,400);
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_ram_42028e32(param_1);
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < 0x14) {
    iVar1 = iVar2 * 0x14 + param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x42021a24;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0x20;
    *(undefined4 *)(iVar1 + 0x24) = 1;
    *(int *)(param_1 + 0x10) = iVar2 + 1;
    return 0;
  }
  return 0xffffffc2;
}

