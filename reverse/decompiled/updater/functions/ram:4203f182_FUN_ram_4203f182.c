
void FUN_ram_4203f182(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  DAT_ram_3fcb506d = (undefined1)param_2;
  *(undefined1 *)(param_1 + 0xa6) = DAT_ram_3fcb506d;
  iVar1 = (int)*(char *)(param_1 + 0xa4);
  if (param_3 == 0) {
    if (iVar1 == 0) goto LAB_ram_4203f1be;
  }
  else {
    if (iVar1 == 0) goto LAB_ram_4203f1be;
    param_2 = (iVar1 * 0xd + param_2 * 3) / 0x10;
  }
  iVar1 = param_2 - iVar1;
  if (*(char *)(param_1 + 0xa5) != 0) {
    iVar1 = (iVar1 * 6 + *(char *)(param_1 + 0xa5) * 10) / 0x10;
  }
  *(char *)(param_1 + 0xa5) = (char)iVar1;
LAB_ram_4203f1be:
  *(char *)(param_1 + 0xa4) = (char)param_2;
  return;
}

