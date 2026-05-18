
void FUN_ram_4206d212(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 8), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = param_2;
    *(int *)(iVar1 + 0x14) = param_3 + 1;
  }
  return;
}

