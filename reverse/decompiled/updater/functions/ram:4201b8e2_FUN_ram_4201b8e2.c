
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201b8e2(void)

{
  int iVar1;
  int extraout_a5;
  
  FUN_ram_40394d60();
  iVar1 = _DAT_ram_3fcb6714 + -1;
  _DAT_ram_3fcb6714 = iVar1;
  if (iVar1 < 0) {
    FUN_ram_40394d8e();
    FUN_ram_40399b58();
    iVar1 = extraout_a5;
  }
  if (iVar1 == 0) {
    _DAT_ram_60040058 = _DAT_ram_60040058 & 0xffbfffff;
    FUN_ram_4039398a();
    _DAT_ram_600c0014 = _DAT_ram_600c0014 & 0xfffffbff;
    FUN_ram_4039399a();
    FUN_ram_4201bcae();
    FUN_ram_4207aec4();
  }
  FUN_ram_40394d8e();
  return;
}

