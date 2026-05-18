
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403954de(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = _DAT_ram_6000801c;
  uVar2 = 0x1000000;
  if (param_2 != 0) {
    uVar2 = 0x14000000;
  }
  _DAT_ram_6000801c = _DAT_ram_6000801c & 0xffffff | uVar2;
  uVar3 = 0x190000;
  if (param_2 == 0) {
    uVar3 = FUN_ram_403959b6(1000,0,param_1);
    uVar3 = (uVar3 & 0x3ff) << 0xe;
  }
  _DAT_ram_6000801c = uVar1 & 0x3f | uVar2 | uVar3 | (-(uint)(param_2 == 0) & 0xfffffc00) + 0x500;
  return;
}

