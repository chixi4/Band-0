
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201b826(void)

{
  FUN_ram_40394d60();
  _DAT_ram_3fcb6714 = _DAT_ram_3fcb6714 + 1;
  if (_DAT_ram_3fcb6714 == 1) {
    DAT_ram_3fcb6710 = 1;
    FUN_ram_4207ae74();
    FUN_ram_4201bc4e();
    FUN_ram_4039398a();
    _DAT_ram_600c0014 = _DAT_ram_600c0014 | 0x400;
    _DAT_ram_600c001c = _DAT_ram_600c001c & 0xfffffbff;
    FUN_ram_4039399a();
    _DAT_ram_60040058 = _DAT_ram_60040058 | 0x400000;
    FUN_ram_40393a94(0x69,0,6,3,0,*(undefined1 *)((uint)*(byte *)(gp + -0x7c0) * 0x14 + 0x3c0792b4))
    ;
    _DAT_ram_3fcb6708 = FUN_ram_40391212();
  }
  FUN_ram_40394d8e();
  return;
}

