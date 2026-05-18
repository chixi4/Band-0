
int FUN_ram_420466b0(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 1) {
    iVar1 = param_1 / 7 + 2;
    iVar2 = param_1 / 7 + 1;
    iVar3 = 0x1a;
    if (param_1 != 0x20) {
      iVar3 = ((param_1 * 2 + iVar1) * 2 + 1) / (iVar2 * 2) << 1;
    }
    iVar4 = param_1 * 4 + 10;
    do {
      param_2[iVar2] = (char)iVar4;
      iVar2 = iVar2 + -1;
      iVar4 = iVar4 - iVar3;
    } while (iVar2 != 0);
    *param_2 = 6;
    return iVar1;
  }
  return 0;
}

