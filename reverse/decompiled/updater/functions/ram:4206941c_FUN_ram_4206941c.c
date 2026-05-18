
int FUN_ram_4206941c(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_ram_3fcb633c == '\0') {
    DAT_ram_3fcb633c = '\x01';
    iVar1 = FUN_ram_42069316(0);
    if (iVar1 != 0) {
      FUN_ram_420693be();
    }
  }
  return iVar1;
}

