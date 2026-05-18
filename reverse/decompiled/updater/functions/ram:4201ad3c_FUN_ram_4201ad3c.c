
/* WARNING: Removing unreachable block (ram,0x4201ad88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201ad3c(void)

{
  char cVar1;
  int iVar2;
  uint auStack_14 [3];
  
  FUN_ram_40394d60();
  FUN_ram_4201ae28(*_DAT_ram_3fcb66dc);
  cVar1 = *(char *)(_DAT_ram_3fcb66dc + 3);
  auStack_14[0] = 0;
  iVar2 = FUN_ram_4201ac46(0,0,auStack_14);
  if (iVar2 != 0) {
    FUN_ram_40394d8e();
    return;
  }
  FUN_ram_40394d8e();
  if (cVar1 == '\0') {
    if ((auStack_14[0] & 1) == 0) {
      return;
    }
    FUN_ram_40391a62(100);
    return;
  }
  FUN_ram_4201aa82(1);
  return;
}

