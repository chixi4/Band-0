
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42029766(void)

{
  int iVar1;
  
  if (_DAT_ram_3fcb6b84 != 0) {
    iVar1 = _DAT_ram_3fcb6b84;
    if (*(int *)(_DAT_ram_3fcb6b84 + 0x20) != 0) {
      FUN_ram_403a5e1e();
      iVar1 = _DAT_ram_3fcb6b84;
      *(undefined4 *)(_DAT_ram_3fcb6b84 + 0x20) = 0;
    }
    (*(code *)&SUB_ram_40010488)(iVar1 + 0x24,0,0x1c);
    return;
  }
  return;
}

