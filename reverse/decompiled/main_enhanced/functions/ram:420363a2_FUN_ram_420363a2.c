
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_420363a2(void)

{
  bool bVar1;
  int iVar2;
  
  thunk_FUN_ram_4202b7dc();
  bVar1 = false;
  if ((*(short *)(_DAT_ram_3fcb6be0 + 6) != 0) && (2 < *(ushort *)(_DAT_ram_3fcb6bac + 10))) {
    iVar2 = FUN_ram_42032256();
    bVar1 = iVar2 != 0;
  }
  thunk_FUN_ram_4202b7f6();
  return bVar1;
}

