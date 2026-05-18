
int FUN_ram_420a6dc0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int aiStack_24 [4];
  
  iVar1 = param_1[1] - (uint)(param_2 == 0);
  if ((0x1a < param_1[1]) || (param_1[0xe] == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    if ((param_1[0x2d] == 0) && (iVar3 = FUN_ram_420a6afe(), iVar3 != 0)) {
      return iVar3;
    }
    if (iVar1 == 8) {
      return 0;
    }
    if (iVar1 < 9) {
      if (iVar1 != 4) {
        if (iVar1 < 5) {
          if (iVar1 != 2) {
            if (iVar1 != 3) {
              return 0;
            }
            iVar1 = FUN_ram_420a6c9a(param_1);
            if (iVar1 == 0) {
              FUN_ram_420a6da4(param_1);
              return 0;
            }
            return iVar1;
          }
        }
        else {
          if (iVar1 == 6) goto LAB_ram_420a6e72;
          if (iVar1 == 7) {
            return 0;
          }
        }
      }
      if (param_1[0x22] != 0) {
        return 0;
      }
    }
    else if (iVar1 != 0xc) {
      if (iVar1 < 0xd) {
        if (iVar1 == 10) {
          return 0;
        }
        if (iVar1 == 0xb) {
          return 0;
        }
        FUN_ram_420a6d58(param_1);
        FUN_ram_420a6d80(param_1);
        FUN_ram_420a6d5a(param_1);
        return 0;
      }
      if (iVar1 != 0x13) {
        if (iVar1 == 0x15) {
          return 0;
        }
        if (iVar1 != 0xd) {
          return 0;
        }
      }
    }
LAB_ram_420a6e72:
    iVar1 = FUN_ram_420a6c9a(param_1);
    return iVar1;
  }
  if (iVar1 != 8) {
    if (iVar1 < 9) {
      if (iVar1 == 4) {
LAB_ram_420a6e12:
        iVar1 = FUN_ram_420a6b9c(param_1);
        return iVar1;
      }
      if (4 < iVar1) {
        if (iVar1 == 6) {
          iVar1 = param_1[0x22];
        }
        else {
          if (iVar1 == 7) {
            uVar2 = 3;
            for (piVar4 = *(int **)(*param_1 + 0x44); (piVar4 != (int *)0x0 && (*piVar4 != 0));
                piVar4 = (int *)piVar4[2]) {
              iVar1 = FUN_ram_420a6d40(*piVar4,aiStack_24);
              uVar2 = uVar2 + aiStack_24[0] * 3 + iVar1;
            }
            if (uVar2 < 0x93d) {
              uVar2 = 0x93d;
            }
            goto LAB_ram_420a6e50;
          }
          iVar1 = param_1[0x22];
        }
        if (iVar1 != 0) {
          return 0;
        }
        goto LAB_ram_420a6e12;
      }
      if ((iVar1 == 2) || (iVar1 == 3)) goto LAB_ram_420a6e12;
      if (iVar1 != 1) {
        return 0;
      }
      uVar2 = 0x93d;
      goto LAB_ram_420a6e50;
    }
    if (iVar1 == 0xc) goto LAB_ram_420a6e12;
    if (0xc < iVar1) {
      if (iVar1 == 0x13) goto LAB_ram_420a6e12;
      if (iVar1 != 0x15) {
        if (iVar1 != 0xd) {
          return 0;
        }
        goto LAB_ram_420a6e12;
      }
    }
  }
  uVar2 = 0x93d;
LAB_ram_420a6e50:
  iVar1 = FUN_ram_420a6a58(param_1,uVar2);
  return iVar1;
}

