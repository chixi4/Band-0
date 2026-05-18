
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42094e04(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    if ((DAT_ram_3fcb7dd4 != '\0') && ((_DAT_ram_3fcb7dd8 & 2) != 0)) {
      uVar1 = 1;
      uVar2 = _DAT_ram_3fcb8444;
      goto LAB_ram_42094e28;
    }
  }
  uVar2 = 0;
  uVar1 = 0;
LAB_ram_42094e28:
  FUN_ram_420967de(1,uVar1,uVar2);
  return 0;
}

