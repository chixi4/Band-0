
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204c34c(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    if (DAT_ram_3fcb0940 != '\0') {
      uVar1 = 1;
      uVar2 = _DAT_ram_3fcb0944;
      if ((_DAT_ram_3fcb0944 & 8) != 0) goto LAB_ram_4204c36e;
    }
  }
  uVar2 = 0;
  uVar1 = 0;
LAB_ram_4204c36e:
  FUN_ram_4204dd92(uVar1,uVar2);
  return 0;
}

