
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_403926c4(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_ram_4039091a();
  iVar3 = FUN_ram_40390938();
  uVar1 = 0;
  do {
    uVar4 = uVar1;
    uVar1 = uVar4 ^ _DAT_ram_600260b0;
  } while ((uint)(DAT_csreg_07e2 - _DAT_ram_3fcc523c) < (uint)(iVar2 / iVar3 << 4));
  _DAT_ram_3fcc523c = DAT_csreg_07e2;
  return uVar4;
}

