
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_420b2d00(void)

{
  int iVar1;
  uint uVar2;
  int iStack_18;
  undefined1 auStack_14 [8];
  
  uVar2 = _DAT_ram_6004d030;
  iVar1 = _DAT_ram_3fcc4518;
  FUN_ram_420b2cc4(&iStack_18,auStack_14);
  return (iVar1 - iStack_18) + (uVar2 & 0xffff) * 0x400 & 0x3ffffff;
}

