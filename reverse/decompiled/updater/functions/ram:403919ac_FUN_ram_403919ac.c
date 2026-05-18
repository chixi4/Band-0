
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403919ac(uint *param_1)

{
  uint uVar1;
  
  _DAT_ram_600c0028 = 0;
  FUN_ram_40394d60();
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_ram_40394d8e();
  if ((uVar1 & 1) != 0) {
    FUN_ram_40394dba();
  }
  if ((uVar1 & 4) != 0) {
    FUN_ram_40391a62(100);
  }
  if ((uVar1 & 0x10) != 0) {
    FUN_ram_4201aa82(0);
    return;
  }
  return;
}

