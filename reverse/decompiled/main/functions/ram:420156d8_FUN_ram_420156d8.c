
int FUN_ram_420156d8(int *param_1)

{
  int iVar1;
  int aiStack_14 [3];
  
  if (DAT_ram_3fcc4f67 != '\0') {
    iVar1 = 0x103;
    if ((param_1 != (int *)0x0) && (iVar1 = FUN_ram_420155d4(aiStack_14), iVar1 == 0)) {
      *param_1 = aiStack_14[0] << 1;
    }
    return iVar1;
  }
  return 0x103;
}

