
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_42098686(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 < 0x10) {
    if ((param_1 < 2) || ((0x80c4U >> (param_1 & 0x1f) & 1) == 0)) goto LAB_ram_42098710;
  }
  else if (param_1 < 0x34) {
    if (param_1 < 0x31) {
LAB_ram_42098710:
      if (DAT_ram_3fcc53c8 != '\0') {
        FUN_ram_4209eba2();
      }
      goto LAB_ram_420986bc;
    }
  }
  else if (3 < (param_1 + 0x36 & 0xff)) goto LAB_ram_42098710;
  FUN_ram_4209eba2();
  FUN_ram_4209efb4(0x3fcc4924);
LAB_ram_420986bc:
  _DAT_ram_3fcc4a8c = 0;
  _DAT_ram_3fcc4a84 = 0;
  _DAT_ram_3fcc4a88 = 0;
  _DAT_ram_3fcc4b44 = 0;
  FUN_ram_4209d0ba(0x3fcc4924);
  DAT_ram_3fcc4b28 = 0;
  DAT_ram_3fcc4c44 = 0;
  puVar1 = (undefined4 *)FUN_ram_42098a62();
  if ((puVar1 != (undefined4 *)0x0) && ((code *)*puVar1 != (code *)0x0)) {
    (*(code *)*puVar1)();
  }
  return param_1;
}

