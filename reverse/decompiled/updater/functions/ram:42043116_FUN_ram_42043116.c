
void FUN_ram_42043116(undefined4 param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = (char *)(param_2 + 3);
  uVar2 = 0;
  do {
    if (*pcVar1 != '\0') {
      if ((byte)pcVar1[1] <= (byte)pcVar1[2]) {
        thunk_FUN_ram_4204b2e2(uVar2 & 0xff);
      }
    }
    uVar2 = uVar2 + 1;
    pcVar1 = pcVar1 + 7;
  } while (uVar2 != 4);
  if (DAT_ram_3fcb4f70 != '\0') {
    thunk_FUN_ram_4204b2e2(2,2,2,3,0x5e0);
    return;
  }
  return;
}

