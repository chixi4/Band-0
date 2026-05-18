
void FUN_ram_420b004c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_42014072(param_1,(int)*(short *)(param_2 + 0xe));
  if (iVar1 == -1) {
    *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  }
  else {
    *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) | 0x1000;
    *(int *)(param_2 + 0x54) = iVar1;
  }
  return;
}

