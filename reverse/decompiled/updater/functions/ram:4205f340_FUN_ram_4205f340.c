
void FUN_ram_4205f340(byte param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != param_4; iVar1 = iVar1 + 1) {
    *(byte *)(param_5 + iVar1) =
         *(byte *)(param_3 + iVar1) ^
         param_1 & (*(byte *)(param_3 + iVar1) ^ *(byte *)(param_2 + iVar1));
  }
  return;
}

