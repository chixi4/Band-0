
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207c50e(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int aiStack_24 [2];
  
  iVar1 = _DAT_ram_3fcc4018;
  if (_DAT_ram_3fcc4014 == 0) {
    iVar2 = 600000;
  }
  else {
    FUN_ram_4207c40c(*(undefined4 *)(_DAT_ram_3fcc4014 + 0xe4),aiStack_24);
    iVar2 = aiStack_24[0];
  }
  if (iVar1 != 0) {
    for (uVar4 = *(uint *)(iVar1 + 0x100); uVar4 != 0; uVar4 = uVar4 & ~(1 << (uVar3 & 0x1f))) {
      uVar3 = (*(code *)&SUB_ram_400108ec)(uVar4);
      FUN_ram_4207c40c(*(undefined4 *)((uVar3 + 0x38) * 4 + iVar1 + 0xc),aiStack_24);
      if (aiStack_24[0] < iVar2) {
        iVar2 = aiStack_24[0];
      }
    }
  }
  if (DAT_ram_3fcc4207 != '\0') {
    FUN_ram_4207b6f0();
  }
  if (iVar2 != 600000) {
    if (iVar2 < 100000) {
      iVar2 = 100000;
    }
    (*(code *)&SUB_ram_40011fb4)(iVar2);
    return;
  }
  return;
}

