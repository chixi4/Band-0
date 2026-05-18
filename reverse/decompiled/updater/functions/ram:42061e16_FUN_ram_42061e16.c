
int FUN_ram_42061e16(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_42061d8a();
  if (iVar1 == 0x50f200) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0x80;
    if (((iVar1 != 0x50f201) && (iVar2 = 2, iVar1 != 0x50f202)) && (iVar2 = 8, iVar1 != 0x50f204)) {
      iVar2 = (uint)(iVar1 == 0x50f205) << 8;
    }
  }
  return iVar2;
}

