
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42030888(void)

{
  int *piVar1;
  int iVar2;
  
  if (_DAT_ram_3fcb6bac == (int *)0x0) {
    _DAT_ram_3fcb6bac = (int *)FUN_ram_403a5e02(1,0x20);
    if (_DAT_ram_3fcb6bac != (int *)0x0) goto LAB_ram_420308b0;
LAB_ram_420308da:
    iVar2 = 6;
  }
  else {
LAB_ram_420308b0:
    piVar1 = _DAT_ram_3fcb6bac;
    iVar2 = *_DAT_ram_3fcb6bac;
    if (iVar2 == 0) {
      iVar2 = FUN_ram_403a5e02(1,0x3c);
      *piVar1 = iVar2;
      iVar2 = *_DAT_ram_3fcb6bac;
      if (iVar2 == 0) {
        FUN_ram_403a5e1e(_DAT_ram_3fcb6bac);
        _DAT_ram_3fcb6bac = (int *)0x0;
        goto LAB_ram_420308da;
      }
    }
    iVar2 = (*(code *)&SUB_ram_40011a60)(_DAT_ram_3fcb6bac + 1,3,0x14,iVar2,&DAT_ram_3c0c26fc);
    if (iVar2 == 0) {
      iVar2 = FUN_ram_4202deec();
      if ((iVar2 != 0) || (iVar2 = FUN_ram_420292e4(), iVar2 != 0)) {
        FUN_ram_403a5e1e(*_DAT_ram_3fcb6bac);
        *_DAT_ram_3fcb6bac = 0;
        FUN_ram_403a5e1e();
        _DAT_ram_3fcb6bac = (int *)0x0;
      }
    }
    else {
      FUN_ram_403a5e1e(*_DAT_ram_3fcb6bac);
      piVar1 = _DAT_ram_3fcb6bac;
      *_DAT_ram_3fcb6bac = 0;
      (*(code *)&SUB_ram_40010488)(piVar1 + 1,0,0x1c);
      FUN_ram_403a5e1e(piVar1);
      iVar2 = 0xb;
      _DAT_ram_3fcb6bac = (int *)0x0;
    }
  }
  return iVar2;
}

