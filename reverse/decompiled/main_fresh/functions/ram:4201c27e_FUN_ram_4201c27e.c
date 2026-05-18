
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201c27e(void)

{
  int iVar1;
  int iVar2;
  undefined8 local_40;
  undefined1 auStack_34 [12];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  local_40 = FUN_ram_420b07a6(0);
  iVar1 = FUN_ram_420b0592(&local_40,auStack_34);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (iStack_20 + 0x76c) * 0x174 + (iStack_24 + 1) * 0x1f + iStack_28;
  }
  *(undefined4 *)(gp + -0x780) = 5;
  _DAT_ram_3fcc50a8 = (uint)(iVar2 * 5) % 0x3c;
  _DAT_ram_3fcc50bc = _DAT_ram_3fcc50a8;
  return;
}

