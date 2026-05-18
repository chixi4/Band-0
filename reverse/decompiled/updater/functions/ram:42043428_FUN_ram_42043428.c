
char FUN_ram_42043428(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (*(code *)&SUB_ram_400120d0)();
  cVar1 = *(char *)(iVar2 + 3);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(gp + -0x2b8) + 0x407);
  }
  return cVar1;
}

