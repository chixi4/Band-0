
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40395c5a(void)

{
  FUN_ram_40396966();
  _DAT_ram_3fcc524c = _DAT_ram_3fcc524c + 1;
  if (_DAT_ram_3fcc524c == 1) {
    DAT_ram_3fcc5248 = 1;
    FUN_ram_40394c42();
    FUN_ram_403946d4();
    FUN_ram_40394a58();
    _DAT_ram_600c0014 = _DAT_ram_600c0014 | 0x400;
    _DAT_ram_600c001c = _DAT_ram_600c001c & 0xfffffbff;
    FUN_ram_40394a68();
    _DAT_ram_60040058 = _DAT_ram_60040058 | 0x400000;
    FUN_ram_40394b98(0x69,0,6,3,0,*(undefined1 *)((uint)*(byte *)(gp + -0x760) * 0x14 + 0x3fcb874c))
    ;
    _DAT_ram_3fcc5240 = FUN_ram_403919ae();
  }
  FUN_ram_40396994();
  return;
}

