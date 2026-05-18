
void FUN_ram_4202d72e(int param_1)

{
  int iVar1;
  undefined1 auStack_11 [5];
  
  if (param_1 != 0) {
    for (iVar1 = 0; iVar1 < (int)(uint)*(ushort *)(param_1 + 0x10); iVar1 = iVar1 + 1) {
      (*(code *)&SUB_ram_400119f4)(param_1,iVar1,1,auStack_11);
    }
    return;
  }
  return;
}

