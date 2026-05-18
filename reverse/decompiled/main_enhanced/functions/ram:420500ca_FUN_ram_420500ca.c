
undefined1 * FUN_ram_420500ca(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 - 0x34U < 0xc) {
    iVar3 = (param_1 - 0x34U) * 0x14;
    FUN_ram_4205c96c();
    if (*(char *)(iVar3 + 0x3fcc1ec4) == '\0') {
      cVar1 = (&DAT_ram_3fcc1ec3)[iVar3];
      bVar2 = true;
      (&DAT_ram_3fcc1ec3)[iVar3] = cVar1 + '\x01';
      if (cVar1 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
    }
    else {
      bVar2 = false;
    }
    FUN_ram_4205c996();
    if (bVar2) {
      return &DAT_ram_3fcc1eb4 + iVar3;
    }
  }
  return (undefined1 *)0x0;
}

