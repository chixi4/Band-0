
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42032078(void)

{
  int iVar1;
  
  FUN_ram_420318f6();
  iVar1 = _DAT_ram_3fcb6b88;
  *(undefined2 *)(_DAT_ram_3fcb6b88 + 4) = 0;
  *(undefined2 *)(iVar1 + 2) = 0;
  *(undefined2 *)(iVar1 + 6) = 0;
  FUN_ram_42031966();
  thunk_FUN_ram_42029766();
  if (_DAT_ram_3fcb6bb8 != 0) {
    FUN_ram_403a5e1e();
    _DAT_ram_3fcb6bb8 = 0;
  }
  return;
}

