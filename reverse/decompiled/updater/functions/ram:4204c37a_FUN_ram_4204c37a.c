
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204c37a(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    if ((DAT_ram_3fcb0940 != '\0') && ((_DAT_ram_3fcb0944 & 2) != 0)) {
      uVar1 = 1;
      uVar2 = _DAT_ram_3fcb0f98;
      goto LAB_ram_4204c39e;
    }
  }
  uVar2 = 0;
  uVar1 = 0;
LAB_ram_4204c39e:
  FUN_ram_4204dd20(1,uVar1,uVar2);
  return 0;
}

