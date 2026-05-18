
undefined1 * FUN_ram_420500ca(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (0xb < param_1 - 0x34U) {
    return (undefined1 *)0x0;
  }
  iVar3 = (param_1 - 0x34U) * 0x14;
  FUN_ram_4205c96c();
  if (*(char *)(iVar3 + 0x3fcc1ec4) == '\0') {
    cVar1 = (&DAT_ram_3fcc1ec3)[iVar3];
    bVar2 = true;
    (&DAT_ram_3fcc1ec3)[iVar3] = cVar1 + '\x01';
    if (cVar1 != -1) goto LAB_ram_42050122;
    FUN_ram_4039bf1e();
  }
  bVar2 = false;
LAB_ram_42050122:
  FUN_ram_4205c996();
  if (!bVar2) {
    return (undefined1 *)0x0;
  }
  return &DAT_ram_3fcc1eb4 + iVar3;
}

