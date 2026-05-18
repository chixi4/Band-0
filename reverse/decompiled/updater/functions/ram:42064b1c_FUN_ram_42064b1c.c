
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_42064b1c(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_ram_42062f70(0x3fcb5ffc);
  bVar1 = false;
  if (iVar2 != 0) {
    bVar1 = _DAT_ram_3fcb61ec == *(int *)(iVar2 + 0x60);
  }
  return bVar1;
}

