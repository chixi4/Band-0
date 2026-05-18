
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_42055aec(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0xffffffff;
  if (_DAT_ram_3fcb6800 != 0) {
    iVar2 = FUN_ram_420599aa(0xffffffff);
    uVar1 = *(int *)(_DAT_ram_3fcb6800 + 4) - iVar2;
    uVar1 = uVar1 & 0xffffffffU - ((int)uVar1 >> 0x1f);
  }
  return uVar1;
}

