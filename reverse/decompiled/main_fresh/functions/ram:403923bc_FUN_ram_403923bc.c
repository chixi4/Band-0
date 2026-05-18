
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403923bc(uint *param_1)

{
  uint uVar1;
  
  _DAT_ram_600c0028 = 0;
  FUN_ram_40396966();
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_ram_40396994();
  if ((uVar1 & 1) != 0) {
    FUN_ram_403969ca();
  }
  if ((uVar1 & 4) != 0) {
    FUN_ram_403925c2(100);
  }
  if ((uVar1 & 0x10) != 0) {
    (*(code *)0x4204a81e)(0);
    return;
  }
  return;
}

