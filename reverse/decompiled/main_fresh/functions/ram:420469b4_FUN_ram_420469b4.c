
char FUN_ram_420469b4(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = param_1[1];
  if (param_2 * 3 < iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if ((((iVar2 < 1) || (param_1[2] != iVar2)) || (param_1[3] != iVar2 * 3)) ||
     ((param_1[4] != iVar2 || (param_1[5] != iVar2)))) {
    bVar3 = false;
    bVar1 = false;
  }
  else {
    bVar3 = iVar2 << 2 <= *param_1 && iVar2 <= param_1[6];
    bVar1 = false;
    if (iVar2 << 2 <= param_1[6]) {
      bVar1 = iVar2 <= *param_1;
    }
  }
  return bVar1 + bVar3;
}

