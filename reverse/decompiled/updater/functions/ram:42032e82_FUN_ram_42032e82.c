
void FUN_ram_42032e82(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (*(char *)(param_4 + 0x2f9) == '\0') {
    if ((*(byte *)(param_4 + 4) & 1) == 0) goto LAB_ram_42032eae;
LAB_ram_42032ec4:
    param_3 = param_3 + 10;
    iVar1 = FUN_ram_4204422e(*(undefined1 *)(*(int *)(gp + -0x2b8) + 0x3ff));
  }
  else {
    if ((*(byte *)(param_4 + 4) & 1) != 0) goto LAB_ram_42032ec4;
    param_2 = param_2 + 8;
    iVar1 = FUN_ram_4204422e(*(undefined1 *)(param_4 + 0x3ae));
  }
  param_3 = param_3 + iVar1;
LAB_ram_42032eae:
  FUN_ram_42033f1c(param_1,param_2,param_3);
  return;
}

