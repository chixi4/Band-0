
int FUN_ram_4204f15c(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0x1105;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if ((*(int *)(iVar1 + 0xc) != -0x10) || (iVar2 = FUN_ram_4204c58e(iVar1), iVar2 == 0)) {
    FUN_ram_4204f124(param_1 + 0xc,*(undefined4 *)(param_1 + 0xc));
    FUN_ram_4204f108(param_1,iVar1);
    FUN_ram_4204c578(iVar1,*(undefined4 *)(param_1 + 0x24));
    iVar2 = 0;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  return iVar2;
}

