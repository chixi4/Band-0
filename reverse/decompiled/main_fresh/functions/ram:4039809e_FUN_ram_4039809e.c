
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4039809e(int param_1)

{
  undefined4 uVar1;
  
  FUN_ram_40396966();
  if (param_1 == 0) {
    param_1 = _DAT_ram_3fcc4e9c;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  FUN_ram_40396994();
  return uVar1;
}

