
void FUN_ram_420831ce(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(gp + -0xac);
  do {
    if (*pcVar1 == '\t') {
      pcVar1[4] = -0x6e;
      pcVar1[5] = '1';
      pcVar1[6] = '\a';
      pcVar1[7] = 'B';
    }
    else if (*pcVar1 == '\f') {
      builtin_strncpy(pcVar1 + 4,"V1\aB",4);
    }
    pcVar1 = pcVar1 + 8;
  } while ((char *)(gp + 0x2c) != pcVar1);
  return;
}

