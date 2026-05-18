
void FUN_ram_4207e772(void)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  
  uVar1 = FUN_ram_42079396(*(undefined1 *)(*(int *)(gp + -0xb4) + 0x3f3));
  iVar3 = *(int *)(gp + -0xb4);
  uVar2 = 1;
  if (*(char *)(iVar3 + 0x3fc) == '\x01') {
    uVar1 = uVar1 & 1;
    uVar2 = 2;
  }
  else {
    if (*(char *)(iVar3 + 0x3fc) != '\x02') goto LAB_ram_4207e798;
    uVar1 = uVar1 & 2;
  }
  if (uVar1 == 0) {
    *(undefined1 *)(iVar3 + 0x3fc) = uVar2;
  }
LAB_ram_4207e798:
  FUN_ram_4207e5e6(0x21,*(undefined1 *)(iVar3 + 0x3fc),DAT_ram_3fcc41d5 == '\0');
  return;
}

