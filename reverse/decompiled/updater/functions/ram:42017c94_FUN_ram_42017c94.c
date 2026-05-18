
void FUN_ram_42017c94(int param_1)

{
  int iVar1;
  byte *pbVar2;
  
  if (DAT_ram_3fcb66a0 == '\0') {
    return;
  }
  if (param_1 != 0) {
    FUN_ram_42017900(0x50);
    FUN_ram_420178fa(0x47);
    FUN_ram_42017900(0x10);
    iVar1 = 5000;
    do {
      iVar1 = iVar1 + -1;
      FUN_ram_420178fa(0);
    } while (iVar1 != 0);
    FUN_ram_42017900(0x13);
    iVar1 = 0;
    do {
      pbVar2 = (byte *)(param_1 + iVar1);
      iVar1 = iVar1 + 1;
      FUN_ram_420178fa(~*pbVar2);
    } while (iVar1 != 5000);
    FUN_ram_42017900(0x12);
    FUN_ram_42017936();
    return;
  }
  return;
}

