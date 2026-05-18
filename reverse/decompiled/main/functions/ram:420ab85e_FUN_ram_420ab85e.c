
int FUN_ram_420ab85e(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_ram_3fcc4c74 == '\0') {
    DAT_ram_3fcc4c74 = '\x01';
    iVar1 = FUN_ram_420ab758(0);
    if (iVar1 != 0) {
      FUN_ram_420ab800();
    }
  }
  return iVar1;
}

