
int FUN_ram_420208ae(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0x1105;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if ((*(int *)(iVar1 + 0xc) != -0x10) || (iVar2 = FUN_ram_4201f892(iVar1), iVar2 == 0)) {
    FUN_ram_42020876(param_1 + 0xc,*(undefined4 *)(param_1 + 0xc));
    FUN_ram_4202085a(param_1,iVar1);
    FUN_ram_4201f87c(iVar1,*(undefined4 *)(param_1 + 0x24));
    iVar2 = 0;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  return iVar2;
}

