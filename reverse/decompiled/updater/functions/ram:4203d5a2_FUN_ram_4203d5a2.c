
int FUN_ram_4203d5a2(int param_1)

{
  int iVar1;
  
  if ((DAT_ram_3fcb4ee5 & 1) == 0) {
    iVar1 = 0;
    if ((DAT_ram_3fcb4ee5 & 2) != 0) {
      iVar1 = (int)*(char *)(param_1 + 0xa4);
    }
  }
  else {
    iVar1 = (int)*(char *)(param_1 + 0xa7);
    if ((DAT_ram_3fcb4ee5 & 2) != 0) {
      iVar1 = iVar1 * *(char *)(param_1 + 0xa4);
    }
  }
  if ((((DAT_ram_3fcb4ee5 & 4) != 0) && (iVar1 != 0)) && (*(char *)(param_1 + 0xa5) != '\0')) {
    iVar1 = iVar1 + 2;
  }
  if (((DAT_ram_3fcb4ee5 & 8) != 0) && (*(char *)(param_1 + 0xaa) != '\0')) {
    iVar1 = iVar1 << 1;
  }
  return iVar1;
}

