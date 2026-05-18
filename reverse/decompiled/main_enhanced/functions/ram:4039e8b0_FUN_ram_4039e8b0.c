
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039e8b0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = FUN_ram_4207eb68();
  uVar1 = _DAT_ram_3fcc4434;
  uVar4 = (uint)(iVar3 * 0x19000) / _DAT_ram_3fcc4434;
  if ((uVar4 & 0xffff) == 0) {
    uVar4 = 1;
  }
  uVar6 = (uint)DAT_ram_3fcc440b;
  uVar4 = uVar4 & 0xffff;
  uVar5 = uVar4;
  if (uVar4 < uVar6) {
    for (; uVar2 = uVar4, uVar6 % uVar5 != 0; uVar5 = uVar5 + 1 & 0xffff) {
    }
    for (; uVar6 % uVar2 != 0; uVar2 = uVar2 - 1 & 0xffff) {
    }
  }
  else {
    uVar2 = uVar4 - uVar4 % uVar6 & 0xffff;
    uVar5 = uVar6 + uVar2 & 0xffff;
  }
  if ((int)(uVar5 - uVar4) <= (int)(uVar4 - uVar2)) {
    uVar2 = uVar5;
  }
  if (_DAT_ram_3fcc4422 != uVar2) {
    iVar3 = FUN_ram_4207eb68();
    FUN_ram_4207a038(6,0x1000,3,&DAT_ram_3c100770,uVar6,uVar1,uVar2,iVar3 * 0x19000,
                     uVar2 * _DAT_ram_3fcc4434);
    _DAT_ram_3fcc4422 = (ushort)uVar2;
    if (_DAT_ram_3fcc4424 == 2) {
      DAT_ram_3fcc4412 = 1;
    }
  }
  FUN_ram_4039f4ba();
  FUN_ram_42091ad8();
  return;
}

