
void FUN_ram_420647da(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4039c08e(1,8);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  return;
}

