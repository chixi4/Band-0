
void FUN_ram_420affc8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_420140e2(param_1,(int)*(short *)(param_2 + 0xe));
  if (iVar1 < 0) {
    *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  }
  else {
    *(int *)(param_2 + 0x54) = *(int *)(param_2 + 0x54) + iVar1;
  }
  return;
}

