
void FUN_ram_4208b67e(undefined4 param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = (char *)(param_2 + 3);
  uVar2 = 0;
  do {
    if (*pcVar1 != '\0') {
      if ((byte)pcVar1[1] <= (byte)pcVar1[2]) {
        thunk_FUN_ram_42093cfa(uVar2 & 0xff);
      }
    }
    uVar2 = uVar2 + 1;
    pcVar1 = pcVar1 + 7;
  } while (uVar2 != 4);
  if (DAT_ram_3fcc4000 != '\0') {
    thunk_FUN_ram_42093cfa(2,2,2,3,0x5e0);
    return;
  }
  return;
}

