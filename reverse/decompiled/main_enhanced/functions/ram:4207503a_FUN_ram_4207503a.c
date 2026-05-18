
void FUN_ram_4207503a(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (*(char *)(param_4 + 0x2f9) == '\0') {
    if ((*(byte *)(param_4 + 4) & 1) == 0) goto LAB_ram_42075066;
LAB_ram_4207507c:
    param_3 = param_3 + 10;
    iVar1 = FUN_ram_4208cc3c(*(undefined1 *)(*(int *)(gp + -0xb4) + 0x3ff));
  }
  else {
    if ((*(byte *)(param_4 + 4) & 1) != 0) goto LAB_ram_4207507c;
    param_2 = param_2 + 8;
    iVar1 = FUN_ram_4208cc3c(*(undefined1 *)(param_4 + 0x3ae));
  }
  param_3 = param_3 + iVar1;
LAB_ram_42075066:
  FUN_ram_42079edc(param_1,param_2,param_3);
  return;
}

