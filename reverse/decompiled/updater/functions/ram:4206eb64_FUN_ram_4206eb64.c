
void FUN_ram_4206eb64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  if ((iVar1 != 0) && (iVar1 != 0x3c071e68)) {
    uVar2 = (*(code *)&SUB_ram_400104a8)(iVar1);
    FUN_ram_420293c8(iVar1,uVar2);
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}

