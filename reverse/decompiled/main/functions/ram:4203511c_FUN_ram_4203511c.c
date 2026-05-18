
void FUN_ram_4203511c(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; (char)iVar1 < param_3; iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar1 * 4 + param_1) = *(undefined4 *)(param_2 + iVar1 * 4);
  }
  return;
}

