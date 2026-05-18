
void FUN_ram_4207eb72(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(gp + -0xb4);
  iVar1 = (uint)*(byte *)(*piVar2 + 0x9f) * 0x8c;
  (*(code *)&SUB_ram_40010488)(iVar1 + 0xa0 + *piVar2,0,0x8c);
  (*(code *)&SUB_ram_40010488)(*piVar2 + iVar1 + 0x10b,0xff,0x20);
  DAT_ram_3fcc41c2 = 1;
  iVar1 = FUN_ram_4207e5e6(0xd,*piVar2 + 0xa0,DAT_ram_3fcc41d5 == '\0');
  if (iVar1 == 0) {
    FUN_ram_4207e5ae();
    return;
  }
  return;
}

