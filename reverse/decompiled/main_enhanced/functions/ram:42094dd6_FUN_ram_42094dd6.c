
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42094dd6(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    if (DAT_ram_3fcb7dd4 != '\0') {
      uVar1 = 1;
      uVar2 = _DAT_ram_3fcb7dd8;
      if ((_DAT_ram_3fcb7dd8 & 8) != 0) goto LAB_ram_42094df8;
    }
  }
  uVar2 = 0;
  uVar1 = 0;
LAB_ram_42094df8:
  FUN_ram_42096850(uVar1,uVar2);
  return 0;
}

