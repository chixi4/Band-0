
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42022174(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x102;
  if (((DAT_ram_3fcc516c != '\0') && (param_1 != (undefined4 *)0x0)) &&
     (uVar1 = 0x103, _DAT_ram_3fcc5168 == 4)) {
    *param_1 = _DAT_ram_3fcc5154;
    return 0;
  }
  return uVar1;
}

