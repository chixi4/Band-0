
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4202aec2(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_ram_42029734();
  piVar1 = _DAT_ram_3fcb6b84;
  if (iVar2 == 0) {
    iVar2 = FUN_ram_403a5e02(1,0x30);
    *piVar1 = iVar2;
    if (*_DAT_ram_3fcb6b84 != 0) {
      iVar2 = (*(code *)&SUB_ram_40011a60)
                        (_DAT_ram_3fcb6b84 + 1,4,0xc,*_DAT_ram_3fcb6b84,&DAT_ram_3c0c2690);
      piVar1 = _DAT_ram_3fcb6b84;
      if (iVar2 != 0) {
        FUN_ram_403a5e1e(*_DAT_ram_3fcb6b84);
        piVar1 = _DAT_ram_3fcb6b84;
        *_DAT_ram_3fcb6b84 = 0;
        (*(code *)&SUB_ram_40010488)(piVar1 + 1,0,0x1c);
        return 0xb;
      }
      _DAT_ram_3fcb6b84[0x11] = (int)(_DAT_ram_3fcb6b84 + 0x10);
      piVar1[0x10] = 0;
      piVar1[0x12] = 0;
      piVar1[0x13] = (int)(piVar1 + 0x12);
      *(undefined2 *)(piVar1 + 0x14) = 0;
      return 0;
    }
  }
  return 6;
}

