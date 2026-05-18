
int * FUN_ram_4205012a(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 - 0x34U < 0xc) {
    iVar2 = (param_1 - 0x34U) * 0x14;
    iVar3 = *(int *)(&DAT_ram_3fcc1eb4 + iVar2);
    if (iVar3 != 0) {
      cVar1 = (&DAT_ram_3fcc1ec3)[iVar2];
      if (*(char *)(iVar2 + 0x3fcc1ec4) == '\0') {
        (&DAT_ram_3fcc1ec3)[iVar2] = cVar1 + '\x01';
        if (cVar1 != -1) {
          return (int *)(&DAT_ram_3fcc1eb4 + iVar2);
        }
      }
      else {
        iVar3 = 0;
        if (cVar1 != '\0') {
          return (int *)0x0;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e(iVar3);
    }
  }
  return (int *)0x0;
}

