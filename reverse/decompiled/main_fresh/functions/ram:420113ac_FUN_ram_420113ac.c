
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420113ac(uint param_1,uint param_2)

{
  uint *puVar1;
  
  for (puVar1 = _DAT_ram_3fcc4e30;
      (puVar1 != (uint *)0x0 &&
      (((*puVar1 >> 0x10 & 1) != param_2 || ((*puVar1 >> 0x11 & 0x1f) != param_1))));
      puVar1 = (uint *)puVar1[3]) {
  }
  return;
}

