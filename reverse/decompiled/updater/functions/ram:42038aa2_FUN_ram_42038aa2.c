
void FUN_ram_42038aa2(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(gp + -0x2b8);
  iVar1 = (uint)*(byte *)(*piVar2 + 0x9f) * 0x8c;
  (*(code *)&SUB_ram_40010488)(iVar1 + 0xa0 + *piVar2,0,0x8c);
  (*(code *)&SUB_ram_40010488)(*piVar2 + iVar1 + 0x10b,0xff,0x20);
  DAT_ram_3fcb5132 = 1;
  iVar1 = FUN_ram_42038516(0xd,*piVar2 + 0xa0,DAT_ram_3fcb5145 == '\0');
  if (iVar1 == 0) {
    FUN_ram_420384de();
    return;
  }
  return;
}

