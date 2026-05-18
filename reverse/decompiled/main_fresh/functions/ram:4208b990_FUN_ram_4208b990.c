
char FUN_ram_4208b990(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (*(code *)&SUB_ram_400120d0)();
  cVar1 = *(char *)(iVar2 + 3);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(gp + -0xb4) + 0x407);
  }
  return cVar1;
}

