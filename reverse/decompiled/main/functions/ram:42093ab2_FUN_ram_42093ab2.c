
void FUN_ram_42093ab2(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  do {
    iVar2 = iVar1 + 1;
    FUN_ram_42093a0a(iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0xb);
  return;
}

