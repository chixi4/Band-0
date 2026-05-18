
void FUN_ram_420a3c1e(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 8), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x20) = param_2;
    *(undefined4 *)(iVar1 + 0x24) = param_3;
  }
  return;
}

