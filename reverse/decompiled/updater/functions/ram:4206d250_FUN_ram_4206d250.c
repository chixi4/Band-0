
void FUN_ram_4206d250(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 8), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x18) = param_2;
    *(undefined4 *)(iVar1 + 0x1c) = param_3;
  }
  return;
}

