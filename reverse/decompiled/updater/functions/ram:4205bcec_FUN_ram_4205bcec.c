
int FUN_ram_4205bcec(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (2 < *(uint *)(param_1 + 0x80)) {
    iVar2 = 0;
    while (((iVar1 = iVar2, 0 < param_3 &&
            (iVar1 = FUN_ram_4206caa4(*(undefined4 *)(param_1 + 0x1c),param_2 + iVar2,param_3,
                                      *(undefined4 *)(param_1 + 0x88)),
            *(char *)(param_1 + 0xc4) == '\0')) && (0 < iVar1))) {
      iVar2 = iVar2 + iVar1;
      param_3 = param_3 - iVar1;
    }
    return iVar1;
  }
  return -1;
}

