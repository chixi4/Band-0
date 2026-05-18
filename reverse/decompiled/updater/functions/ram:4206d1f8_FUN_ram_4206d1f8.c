
void FUN_ram_4206d1f8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 8), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(int *)(iVar1 + 0xc) = param_3 + 1;
  }
  return;
}

