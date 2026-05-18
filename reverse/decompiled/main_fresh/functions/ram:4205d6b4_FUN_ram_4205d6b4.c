
void FUN_ram_4205d6b4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 8;
  FUN_ram_4205c96c();
  iVar3 = *(int *)(param_1 + 0x18);
  FUN_ram_4205c996();
  for (iVar1 = 0; iVar1 < iVar3; iVar1 = iVar1 + 1) {
    iVar2 = param_1 + 0x10;
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar2 = param_1 + 0x14;
    }
    FUN_ram_4205c7fc(iVar2,&DAT_ram_3c0f75a5);
  }
  return;
}

