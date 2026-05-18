
int FUN_ram_4204ac34(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x34));
  if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x30)) {
    uVar2 = FUN_ram_4039bf1e();
  }
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  (*(code *)&SUB_ram_4001055c)();
  return ((int)uVar2 + iVar1 + -1) / iVar1;
}

