
int FUN_ram_42059e24(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((*(byte *)(param_1 + 0x28) & 8) != 0) || (iVar1 = FUN_ram_42059dfe(), iVar1 == 0)) {
    FUN_ram_4205ac4c(param_1);
    iVar1 = 0;
  }
  return iVar1;
}

