
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42033eb8(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3fcdfb1c;
  FUN_ram_42033fd8(1,8,5,0x3c07ef98,*(undefined1 *)(_DAT_ram_3fcdfb1c + 0x50),
                   *(undefined1 *)(_DAT_ram_3fcdfb1c + 0x51),
                   *(undefined1 *)(_DAT_ram_3fcdfb1c + 0x52),
                   *(undefined1 *)(_DAT_ram_3fcdfb1c + 0x53));
  if (*(char *)(iVar1 + 0x50) == *(char *)(iVar1 + 0x52)) {
    if (*(char *)(iVar1 + 0x51) == *(char *)(iVar1 + 0x53)) {
      return;
    }
  }
  FUN_ram_42033b00(iVar1 + 0x50);
  return;
}

