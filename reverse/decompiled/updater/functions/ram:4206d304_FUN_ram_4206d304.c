
int FUN_ram_4206d304(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4206ce84();
  if (iVar1 != 0) {
    *(undefined1 *)(*(int *)(iVar1 + 8) + 0x50) = 1;
    FUN_ram_4206cad4(iVar1,0x4205cfc0,0x4205cf34,0x4205ced8,0x4205ccac,0x4205d04c,0x4205d120,
                     0x4205d01e);
    FUN_ram_4206cb0a(iVar1,0x4205cca6);
    *(undefined4 *)(iVar1 + 0x30) = 0x4205cc04;
  }
  return iVar1;
}

