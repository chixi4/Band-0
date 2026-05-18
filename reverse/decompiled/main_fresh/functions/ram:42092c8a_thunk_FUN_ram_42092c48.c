
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_ram_42092c48(uint param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = _DAT_ram_3fcdfdec;
  uVar3 = 1 << (param_1 & 0x1f);
  puVar1 = (uint *)(_DAT_ram_3fcdfdec + 0x3b4);
  if (((*(uint *)(_DAT_ram_3fcdfdec + 0x354) | *puVar1) & uVar3) != 0) {
    uVar3 = ~uVar3;
    *(uint *)(_DAT_ram_3fcdfdec + 0x354) = *(uint *)(_DAT_ram_3fcdfdec + 0x354) & uVar3;
    *(uint *)(iVar2 + 0x3b4) = uVar3 & *puVar1;
    *(undefined4 *)(iVar2 + (param_1 + 0xd4) * 4 + 0xc) = 0;
    return 0;
  }
  return 1;
}

