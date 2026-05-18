
void FUN_ram_4206c946(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40399d1a(1,8);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}

