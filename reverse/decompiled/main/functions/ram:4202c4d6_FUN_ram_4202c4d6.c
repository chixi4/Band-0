
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4202c4d6(undefined4 *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(_DAT_ram_3fcb6a44 + 0x24);
  *param_1 = 0;
  param_1[1] = param_1;
  (*pcVar1)(param_1 + 2);
  return 0;
}

