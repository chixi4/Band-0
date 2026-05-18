
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420106a8(void)

{
  uint uVar1;
  int iVar2;
  
  FUN_ram_403903dc();
  uVar1 = _DAT_ram_3c0a8170;
  iVar2 = (*(code *)&SUB_ram_40010018)(0);
  FUN_ram_42011dd6(uVar1 & 0xbfffffff | (uint)(iVar2 == 1) << 0x1e);
  return;
}

