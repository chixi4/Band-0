
int FUN_ram_4208b74c(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar1 = (*(code *)&SUB_ram_40012238)();
  pcVar2 = (char *)(gp + 0x48);
  iVar3 = 0;
  do {
    if (iVar1 <= *pcVar2) {
      return (int)*(char *)(gp + iVar3 * 2 + 0x49);
    }
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 2;
  } while (iVar3 != 0xc);
  return 0x14;
}

