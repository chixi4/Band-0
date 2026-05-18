
bool FUN_ram_4201579a(void)

{
  int iVar1;
  int aiStack_14 [4];
  
  if (DAT_ram_3fcc4f67 == '\0') {
    return false;
  }
  iVar1 = FUN_ram_420155d4(aiStack_14);
  return iVar1 == 0 && aiStack_14[0] < 0x96;
}

