
/* WARNING: Removing unreachable block (ram,0x4204ab4a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204aafe(void)

{
  char cVar1;
  int iVar2;
  uint auStack_14 [3];
  
  FUN_ram_40396966();
  FUN_ram_4204abde(*_DAT_ram_3fcc5200);
  cVar1 = *(char *)(_DAT_ram_3fcc5200 + 3);
  auStack_14[0] = 0;
  iVar2 = FUN_ram_4204aa08(0,0,auStack_14);
  if (iVar2 != 0) {
    FUN_ram_40396994();
    return;
  }
  FUN_ram_40396994();
  if (auStack_14[0] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if (cVar1 != '\0') {
    FUN_ram_4204a81e(1);
    return;
  }
  if ((auStack_14[0] & 1) == 0) {
    return;
  }
  FUN_ram_403925c2(100);
  return;
}

