
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42036c8e(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_42036b12();
  if (iVar1 == 0) {
    thunk_FUN_ram_4202b7dc();
    iVar1 = (*(code *)&SUB_ram_40010488)(_DAT_ram_3fcb6be8,0,6);
    (*(code *)&SUB_ram_40010488)(iVar1 + 6,0);
    thunk_FUN_ram_4202b7f6();
    return;
  }
  return;
}

