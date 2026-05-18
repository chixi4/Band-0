
undefined4 FUN_ram_4209ada2(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    if (param_2 == 0) {
      return 0xffffffff;
    }
    if ((*(ushort *)(param_2 + 0x1b4) & 8) == 0) {
      *(ushort *)(param_2 + 0x1b4) = *(ushort *)(param_2 + 0x1b4) | 8;
      *(undefined4 *)(param_2 + 0x18) = 1;
      iVar2 = FUN_ram_4209a968(param_2);
      if (iVar2 == 1) {
        return 1;
      }
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x20) = 1;
    }
    else {
      (*(code *)&SUB_ram_40010488)(param_2 + 0x13c,0,0x30);
      *(undefined4 *)(param_2 + 0x24) = 1;
    }
    uVar1 = FUN_ram_4209a968(param_2);
    return uVar1;
  }
  return 0xffffffff;
}

