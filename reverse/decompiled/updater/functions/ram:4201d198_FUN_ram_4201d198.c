
int FUN_ram_4201d198(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_14;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  iVar3 = param_1[10];
  if (iVar3 != 0) {
    iVar1 = -2;
    if (*(char *)(param_1 + 0xb) != '\0') {
      iVar1 = -1;
      if (0 < (int)param_1[8]) {
        iVar1 = param_1[8];
      }
    }
    if (iVar3 != 2) {
      if (iVar3 != 4) {
        if (iVar3 != 1) {
          return -1;
        }
        iVar3 = FUN_ram_42018afc(param_1[1],iVar1,param_1);
        if (iVar3 != 0) {
          return iVar3;
        }
        FUN_ram_42018c78(*param_1,param_1[2],*(undefined1 *)(param_1 + 3));
        param_1[10] = 2;
        if ((*(uint *)(param_1[2] + 4) & 0xfffffffd) != 0) {
          return 0x9001;
        }
        iVar3 = param_1[7];
        if (iVar3 == 0) {
          iVar3 = FUN_ram_4201ccac(param_1);
          if (iVar3 != 0) {
            return -1;
          }
          iVar3 = 0x400;
        }
        param_1[7] = 0;
        iVar1 = param_1[5];
        if ((*(uint *)(param_1[2] + 4) & 0xfffffffd) == 0) {
          FUN_ram_4201cc96(3,iVar1 + 0xc,2);
          if (*(short *)(iVar1 + 0xc) == 0xc) {
            FUN_ram_4201cc96(4,iVar1 + 0xf,2);
            iVar2 = FUN_ram_42019780(iVar1,1);
            if (iVar2 != 0) goto LAB_ram_4201d230;
          }
          return 0x10a;
        }
        goto LAB_ram_4201d230;
      }
      iVar3 = FUN_ram_42018bc6(param_1[1],iVar1,param_1[7],param_1);
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_ram_42018c78(*param_1,param_1[2],*(undefined1 *)(param_1 + 3));
      param_1[10] = 2;
    }
    iVar3 = FUN_ram_4205ba92(param_1[4],param_1[5],param_1[6]);
    if (iVar3 == 0) {
      iVar3 = FUN_ram_4205ba70(param_1[4]);
      if (iVar3 != 0) {
        if (*(char *)((int)param_1 + 0x2d) != '\0') {
          if (param_1[8] != param_1[7]) {
            if (param_1[10] != 2) {
              return 0;
            }
            if ((int)param_1[7] < (int)param_1[8]) {
              iVar3 = FUN_ram_4205cd1a(param_1[4]);
              if (iVar3 == 0) {
                FUN_ram_4205bd42(param_1[4]);
              }
              iVar3 = param_1[7];
              iStack_14 = 0;
              if ((int)param_1[9] < param_1[8] - iVar3) {
                (*(code *)&SUB_ram_400106a4)(&iStack_14,0x3c071454,iVar3,param_1[9] + iVar3 + -1);
              }
              else {
                (*(code *)&SUB_ram_400106a4)(&iStack_14,0x3c071440);
              }
              if (iStack_14 != 0) {
                FUN_ram_4205b9ae(param_1[4],0x3c07144c);
                thunk_FUN_ram_40390608(iStack_14);
                iVar3 = FUN_ram_4201ce00(param_1);
                if (iVar3 != 0) {
                  return -1;
                }
                return 0x9001;
              }
              return 0x101;
            }
            return 0;
          }
        }
        param_1[10] = 3;
        return 0;
      }
    }
    else {
      if (0 < iVar3) {
        iVar1 = param_1[5];
LAB_ram_4201d230:
        iVar3 = FUN_ram_4201cd00(param_1,iVar1,iVar3);
        return iVar3;
      }
      if (iVar3 == -0x7007) {
        return 0x9001;
      }
    }
  }
  return -1;
}

