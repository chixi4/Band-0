
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202deec(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (_DAT_ram_3fcb6b9c == (int *)0x0) {
    _DAT_ram_3fcb6b9c = (int *)FUN_ram_403a5e02(1,0x2c);
    if (_DAT_ram_3fcb6b9c != (int *)0x0) goto LAB_ram_4202df14;
LAB_ram_4202df38:
    iVar2 = 6;
  }
  else {
LAB_ram_4202df14:
    piVar1 = _DAT_ram_3fcb6b9c;
    iVar2 = *_DAT_ram_3fcb6b9c;
    if (iVar2 == 0) {
      iVar2 = FUN_ram_403a5e02(1,0x14);
      *piVar1 = iVar2;
      iVar2 = *_DAT_ram_3fcb6b9c;
      if (iVar2 == 0) {
        FUN_ram_403a5e1e(_DAT_ram_3fcb6b9c);
        goto LAB_ram_4202df38;
      }
    }
    piVar1 = _DAT_ram_3fcb6b9c;
    piVar3 = _DAT_ram_3fcb6b9c + 8;
    _DAT_ram_3fcb6b9c[8] = 0;
    piVar1[9] = (int)piVar3;
    iVar2 = (*(code *)&SUB_ram_40011a60)(piVar1 + 1,1,0x14,iVar2,"gh evidence.");
    if (iVar2 != 0) {
      FUN_ram_403a5e1e(*_DAT_ram_3fcb6b9c);
      *_DAT_ram_3fcb6b9c = 0;
      FUN_ram_403a5e1e();
      _DAT_ram_3fcb6b9c = (int *)0x0;
    }
  }
  return iVar2;
}

