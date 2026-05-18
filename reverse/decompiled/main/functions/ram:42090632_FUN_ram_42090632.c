
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42090632(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  
  uVar2 = DAT_ram_3fcc4416;
  uVar1 = DAT_ram_3fcc4415;
  DAT_ram_3fcc4415 = param_1 == 0;
  DAT_ram_3fcc4416 = !(bool)DAT_ram_3fcc4415;
  FUN_ram_40393cee(6,param_1 + 2);
  iVar3 = (*_DAT_ram_3fcc4620)(param_1,0,0,extraout_a3,extraout_a4,_DAT_ram_3fcc4620);
  if (iVar3 == 0) {
    DAT_ram_3fcc4415 = uVar1;
    DAT_ram_3fcc4416 = uVar2;
  }
  return;
}

