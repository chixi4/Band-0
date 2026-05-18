
void FUN_ram_420a6d5a(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 0x44);
  while (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 8);
    FUN_ram_4206d7d4();
  }
  *(undefined4 *)(iVar1 + 0x44) = 0;
  return;
}

