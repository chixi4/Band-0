
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_ram_4204a1e8(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_ram_3fcdfdec;
  uVar2 = 1 << (param_2 & 0x1f);
  if ((*(uint *)(_DAT_ram_3fcdfdec + 0x354) & uVar2) == 0) {
    if ((uVar2 & *(uint *)(_DAT_ram_3fcdfdec + 0x3b4)) == 0) {
      if (param_3 == 0) {
        *(uint *)(_DAT_ram_3fcdfdec + 0x354) = *(uint *)(_DAT_ram_3fcdfdec + 0x354) | uVar2;
      }
      else {
        *(uint *)(_DAT_ram_3fcdfdec + 0x3b4) = uVar2 | *(uint *)(_DAT_ram_3fcdfdec + 0x3b4);
      }
      *(undefined4 *)(iVar1 + (param_2 + 0xd4) * 4 + 0xc) = param_1;
      return 0;
    }
  }
  return 1;
}

