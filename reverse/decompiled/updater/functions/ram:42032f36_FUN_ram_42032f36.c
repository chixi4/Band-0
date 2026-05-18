
int FUN_ram_42032f36(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 *puStack_14;
  
  iVar1 = FUN_ram_42032e82(&puStack_14,0x18,2,param_1);
  if (iVar1 == 0) {
    FUN_ram_42033fd8(1,0x40,2,0x3c07f620);
  }
  else {
    if (*(char *)(param_1 + 0x2f9) != '\0') {
      **(uint **)(iVar1 + 0x24) = **(uint **)(iVar1 + 0x24) | 1;
    }
    *(undefined2 *)(iVar1 + 0x14) = 0x18;
    *puStack_14 = param_2;
    *(undefined2 *)(iVar1 + 0x16) = 2;
  }
  return iVar1;
}

