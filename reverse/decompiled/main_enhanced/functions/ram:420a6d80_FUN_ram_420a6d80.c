
void FUN_ram_420a6d80(int *param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(*param_1 + 0x44); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if (*(int *)(iVar1 + 4) != 0) {
      FUN_ram_420a85ae();
      *(undefined4 *)(iVar1 + 4) = 0;
    }
  }
  return;
}

