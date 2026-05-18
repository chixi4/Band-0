
void FUN_ram_420a6da4(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x48) != 0) {
    FUN_ram_420aa2b8();
    *(undefined4 *)(iVar1 + 0x48) = 0;
  }
  return;
}

