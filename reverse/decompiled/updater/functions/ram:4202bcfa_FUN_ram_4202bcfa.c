
int FUN_ram_4202bcfa(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 1;
  uVar2 = param_3;
  if (0x7f < param_3) {
    do {
      uVar2 = uVar2 >> 8;
      iVar1 = iVar1 + 1;
    } while (uVar2 != 0);
  }
  if (*param_1 - param_2 < iVar1) {
    iVar3 = -0x6c;
  }
  else {
    do {
      iVar3 = *param_1;
      *param_1 = iVar3 + -1;
      *(char *)(iVar3 + -1) = (char)param_3;
      param_3 = param_3 >> 8;
    } while (param_3 != 0);
    iVar3 = 1;
    if (iVar1 != 1) {
      iVar3 = *param_1;
      *param_1 = iVar3 + -1;
      *(char *)(iVar3 + -1) = (char)iVar1 + '\x7f';
      return iVar1;
    }
  }
  return iVar3;
}

