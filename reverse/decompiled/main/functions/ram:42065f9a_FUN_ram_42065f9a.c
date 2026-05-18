
int FUN_ram_42065f9a(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)(*(code *)&SUB_ram_40010670)();
  iVar3 = *piVar1;
  if (iVar3 < 0x17) {
    iVar2 = -1;
    if (3 < iVar3) {
      uVar4 = 1 << (iVar3 - 4U & 0x1f);
      iVar2 = -2;
      if ((uVar4 & 0x40420) == 0) {
        iVar2 = (uint)((uVar4 & 0x81) == 0) * 2 + -3;
      }
    }
  }
  else {
    iVar2 = (iVar3 != 0x6c) - 2;
  }
  return iVar2;
}

