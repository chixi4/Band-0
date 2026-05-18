
int FUN_ram_4206d292(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4206ce84();
  if (iVar1 != 0) {
    *(undefined1 *)(*(int *)(iVar1 + 8) + 0x50) = 0;
    FUN_ram_4206cad4(iVar1,0x4205cdf0,0x4205cd58,0x4205ccfa,0x4205ccac,0x4205d04c,0x4205d120,
                     0x4205d01e);
    FUN_ram_4206cb0a(iVar1,0x4205cca0);
    *(undefined4 *)(iVar1 + 0x30) = 0x4205cc04;
  }
  return iVar1;
}

