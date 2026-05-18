
int FUN_ram_4204ac34(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  (*(code *)&SUB_ram_4001055c)();
  return (iVar1 + iVar2 + -1) / iVar2;
}

