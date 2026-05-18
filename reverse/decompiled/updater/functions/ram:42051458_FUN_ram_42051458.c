
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42051458(ushort *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (ushort *)0x3c079384) || (_DAT_ram_3fcb67a0 < 0x10)) {
    iVar1 = FUN_ram_4205142c(*param_1 + 3 & 0xfffffffc);
    uVar2 = FUN_ram_420599c2();
    if (iVar1 != 0) {
      if (param_1 == (ushort *)0x3c079384) {
        _DAT_ram_3fcb67a0 = _DAT_ram_3fcb67a0 + 1;
      }
      FUN_ram_420599ec(uVar2);
      return iVar1;
    }
    FUN_ram_420599ec();
  }
  return 0;
}

