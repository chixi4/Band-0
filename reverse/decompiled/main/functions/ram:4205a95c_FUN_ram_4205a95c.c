
int FUN_ram_4205a95c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_4205a716(param_1,2,0);
  if (iVar1 < 0) {
    iVar2 = (int)(char)iVar1;
  }
  else {
    iVar2 = -0x10;
    if ((&DAT_ram_3fcc258c)[iVar1 * 0x18] == '\x05') {
      FUN_ram_4205a6a6();
      iVar2 = 0;
    }
  }
  return iVar2;
}

