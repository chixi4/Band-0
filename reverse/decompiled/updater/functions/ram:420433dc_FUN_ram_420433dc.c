
char FUN_ram_420433dc(void)

{
  int iVar1;
  char cVar2;
  
  iVar1 = (*(code *)&SUB_ram_400120d0)();
  cVar2 = '\0';
  if (*(char *)(iVar1 + 3) != '\0' || *(char *)(iVar1 + 4) != '\0') {
    cVar2 = *(char *)(iVar1 + 3) + *(char *)(iVar1 + 4) + -1;
  }
  return cVar2;
}

