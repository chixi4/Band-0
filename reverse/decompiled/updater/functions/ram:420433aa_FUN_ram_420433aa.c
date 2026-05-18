
char FUN_ram_420433aa(void)

{
  int iVar1;
  
  if (*(int *)(*(int *)(gp + -0x2b8) + 0x40c) != 0) {
    iVar1 = (*(code *)&SUB_ram_400120d0)();
    return *(char *)(iVar1 + 3) + *(char *)(iVar1 + 4) + -1;
  }
  return '\x0e';
}

