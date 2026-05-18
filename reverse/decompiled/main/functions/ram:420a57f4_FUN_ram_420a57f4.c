
undefined4 FUN_ram_420a57f4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
  }
  return *(undefined4 *)(iVar1 + 0x6c);
}

