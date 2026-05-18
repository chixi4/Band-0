
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420368de(void)

{
  int iVar1;
  
  if (_DAT_ram_3fcb6be0 != 0) {
    iVar1 = _DAT_ram_3fcb6be0;
    if (*(int *)(_DAT_ram_3fcb6be0 + 0x1c) != 0) {
      FUN_ram_403a5e1e();
      iVar1 = _DAT_ram_3fcb6be0;
      *(undefined4 *)(_DAT_ram_3fcb6be0 + 0x1c) = 0;
    }
    (*(code *)&SUB_ram_40010488)(iVar1,0,0x1c);
    FUN_ram_403a5e1e();
    _DAT_ram_3fcb6be0 = 0;
  }
  return;
}

