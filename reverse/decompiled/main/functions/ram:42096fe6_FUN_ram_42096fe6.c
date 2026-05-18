
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42096fe6(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint extraout_a2;
  uint uVar3;
  
  uVar3 = 0x80000000;
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = 0x40000000;
  }
  uVar2 = 0x80000000;
  _DAT_ram_6004004c = uVar3 | _DAT_ram_6004004c;
  _DAT_ram_60040020 = _DAT_ram_60040020 & 0x3fffffff;
  iVar1 = 0;
  if (*(int *)(param_1 + 4) == 0) goto LAB_ram_4209703a;
  do {
    iVar1 = FUN_ram_4039bf1e();
    uVar2 = extraout_a2;
LAB_ram_4209703a:
    if (*(uint *)(param_1 + 0x38) < 80000000) {
      iVar1 = (1000000 / (*(uint *)(param_1 + 0x38) >> 4) + 1) * 3;
    }
    _DAT_ram_60040020 = (_DAT_ram_60040020 | uVar2) & 0xdfffffff;
    (*(code *)&SUB_ram_40010044)(iVar1);
    _DAT_ram_60040020 = _DAT_ram_60040020 | 0x20000000;
    do {
    } while ((uVar3 & _DAT_ram_60040044) == 0);
    (*(code *)&SUB_ram_40010044)(0);
  } while (*(int *)(param_1 + 4) != 0);
  *param_2 = _DAT_ram_6004002c & 0xfff;
  _DAT_ram_60040020 = _DAT_ram_60040020 & 0x3fffffff;
  return 1;
}

