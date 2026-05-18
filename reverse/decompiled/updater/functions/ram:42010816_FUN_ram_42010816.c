
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42010816(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = (*(code *)&SUB_ram_40010018)(0);
  if ((iVar1 - 0xbU < 3) || (iVar1 == 0x18)) {
    uVar5 = ~_DAT_ram_600c0010;
    uVar2 = ~_DAT_ram_600c0014;
    uVar3 = _DAT_ram_600c0014;
    uVar4 = _DAT_ram_60026014;
  }
  else {
    uVar4 = 0xffffefdf;
    uVar3 = 0xfffffffb;
    uVar2 = 4;
    uVar5 = 0x8e0;
  }
  _DAT_ram_600c0010 = ~(uVar5 | 0xe0) & _DAT_ram_600c0010;
  _DAT_ram_600c0018 = uVar5 | 0xe0 | _DAT_ram_600c0018;
  _DAT_ram_600c0014 = _DAT_ram_600c0014 & uVar3;
  _DAT_ram_600c001c = _DAT_ram_600c001c | uVar2;
  _DAT_ram_60026014 = _DAT_ram_60026014 & uVar4 | 0xfb9fcf;
  _DAT_ram_600c0020 = _DAT_ram_600c0020 & 0xfffff000;
  _DAT_ram_600c0024 = _DAT_ram_600c0024 & 0xf0ffffff | 0x1000000;
  FUN_ram_4207ae18(9);
  return;
}

