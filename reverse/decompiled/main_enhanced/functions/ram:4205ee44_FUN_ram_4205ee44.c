
undefined4 FUN_ram_4205ee44(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = 0x102;
  if ((iVar1 != 0) && (uVar3 = 0x5004, *(int *)(iVar1 + 0x3c) != 1)) {
    iVar2 = *(int *)(iVar1 + 0x10);
    FUN_ram_4205ee36(*(undefined4 *)(iVar1 + 8));
    FUN_ram_4205edf8();
    if ((iVar2 == 0) || ((*(byte *)(iVar2 + 0x39) & 1) == 0)) {
      *(undefined4 *)(iVar1 + 0x3c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 4) = 0;
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      FUN_ram_4205ee10(iVar1);
      iVar2 = FUN_ram_42059efc(iVar2);
      if (iVar2 != 0) {
        return 0x5003;
      }
      *(undefined4 *)(iVar1 + 0x3c) = 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}

