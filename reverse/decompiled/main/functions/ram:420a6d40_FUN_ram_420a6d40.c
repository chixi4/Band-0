
int FUN_ram_420a6d40(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x194)) {
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + *(int *)(param_1 + 8);
  }
  *param_2 = iVar2;
  return iVar1;
}

