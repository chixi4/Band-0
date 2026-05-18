
undefined4 FUN_ram_42026da6(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char cStack_28;
  undefined1 auStack_27 [15];
  
  if (param_1 < 3) {
    if (0 < param_1) {
LAB_ram_42026dd8:
      FUN_ram_4039c11e(&cStack_28,param_2,7);
      iVar1 = param_3[1];
      iVar4 = 0;
      while( true ) {
        if (iVar1 <= iVar4) {
          if (iVar1 < param_3[2]) {
            FUN_ram_4039c11e(*param_3 + iVar1 * 7,&cStack_28);
            param_3[1] = iVar1 + 1;
            return 0;
          }
          param_3[3] = 6;
          return 6;
        }
        pcVar2 = (char *)(*param_3 + iVar4 * 7);
        if ((*pcVar2 == cStack_28) &&
           (iVar3 = FUN_ram_4039c0e0(pcVar2 + 1,auStack_27,6), iVar3 == 0)) break;
        iVar4 = iVar4 + 1;
      }
      return 0;
    }
  }
  else if (param_1 == 7) goto LAB_ram_42026dd8;
  return 3;
}

