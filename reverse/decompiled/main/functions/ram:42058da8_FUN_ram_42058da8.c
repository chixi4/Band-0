
int FUN_ram_42058da8(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_420531dc(1);
  if (iVar1 != 0) {
    (*(code *)&SUB_ram_40010488)(iVar1,0,0x28);
    *(undefined1 *)(iVar1 + 0xb) = 0x40;
    *(undefined1 *)(iVar1 + 0x1d) = 0x40;
  }
  return iVar1;
}

