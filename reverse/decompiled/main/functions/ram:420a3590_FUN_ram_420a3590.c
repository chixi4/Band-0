
void FUN_ram_420a3590(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((param_1 != 0) && (*(int **)(param_1 + 0x38) != (int *)0x0)) &&
     (iVar1 = **(int **)(param_1 + 0x38), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0xc) = param_2;
  }
  return;
}

