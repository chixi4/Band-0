
int FUN_ram_42068514(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)*(ushort *)((int)param_1 + 6);
  while ((uVar3 != 0 && (*(int *)(*param_1 + uVar3 * 4 + -4) == 0))) {
    uVar3 = uVar3 - 1;
  }
  uVar2 = (uint)*(ushort *)((int)param_2 + 6);
  do {
    if (uVar2 == 0) {
      if (uVar3 == 0) {
        return 0;
      }
LAB_ram_420685ae:
      return (int)(short)param_1[1];
    }
    if (*(int *)(uVar2 * 4 + *param_2 + -4) != 0) {
      if (uVar3 != 0) {
        if (uVar2 < uVar3) goto LAB_ram_420685ae;
        if (uVar2 <= uVar3) {
          iVar1 = (int)(short)param_1[1];
          if (iVar1 < 1) {
            if ((0 < (short)param_2[1]) && (iVar1 != 0)) {
              return -1;
            }
          }
          else if ((short)param_2[1] < 0) {
            return 1;
          }
          iVar4 = uVar3 - 1;
          while( true ) {
            uVar3 = *(uint *)(*param_1 + iVar4 * 4);
            uVar2 = *(uint *)(iVar4 * 4 + *param_2);
            if (uVar2 < uVar3) {
              return iVar1;
            }
            iVar4 = iVar4 + -1;
            if (uVar3 < uVar2) break;
            if (iVar4 == -1) {
              return 0;
            }
          }
          return -iVar1;
        }
      }
      return -(int)(short)param_2[1];
    }
    uVar2 = uVar2 - 1;
  } while( true );
}

