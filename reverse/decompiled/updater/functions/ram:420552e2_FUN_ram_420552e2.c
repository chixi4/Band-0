
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420552e2(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  
  if (_DAT_ram_3fcb67d0 == param_1) {
    return 0;
  }
  piVar3 = (int *)param_1[0x1c];
  if (piVar3 == (int *)0x0) {
    uVar1 = *(ushort *)((int)param_1 + 0x1e);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x13);
    uVar2 = *(ushort *)(param_1 + 0x19);
    piVar13 = param_1 + 1;
    if ((char)param_1[2] == '\0') {
      iVar5 = FUN_ram_42058ae0(param_1,piVar13);
    }
    else {
      iVar5 = FUN_ram_42051704((char)param_1[2]);
    }
    if (iVar5 == 0) {
      return -4;
    }
    if (*param_1 == 0) {
      *param_1 = *(int *)(iVar5 + 4);
    }
    uVar12 = (uint)uVar1;
    if ((uint)uVar2 < (uint)uVar1) {
      uVar12 = (uint)uVar2;
    }
    iVar6 = FUN_ram_4205074c(*(undefined4 *)(piVar3[3] + 4));
    if (((uint)*(ushort *)(piVar3 + 2) - param_1[0x12]) + iVar6 <= uVar12) {
      *(undefined1 *)((int)param_1 + 0xa1) = 0;
      piVar9 = (int *)param_1[0x1d];
      piVar11 = (int *)param_1[0x1d];
      while (piVar15 = piVar9, piVar15 != (int *)0x0) {
        piVar11 = piVar15;
        piVar9 = (int *)*piVar15;
      }
      do {
        iVar6 = FUN_ram_4205074c(*(undefined4 *)(piVar3[3] + 4));
        if ((uVar12 < (iVar6 - param_1[0x12]) + (uint)*(ushort *)(piVar3 + 2)) ||
           (((((param_1[0x1d] != 0 && ((*(ushort *)((int)param_1 + 0x1e) & 0x44) == 0)) &&
              ((piVar9 = (int *)param_1[0x1c], piVar9 == (int *)0x0 ||
               ((*piVar9 == 0 && (*(ushort *)(piVar9 + 2) < *(ushort *)((int)param_1 + 0x36)))))))
             && ((short)param_1[0x1a] != 0)) &&
            ((*(ushort *)((int)param_1 + 0x6a) < 0x10 &&
             ((*(ushort *)((int)param_1 + 0x1e) & 0xa0) == 0)))))) {
          if (param_1[0x1c] != 0) goto LAB_ram_420556d4;
          break;
        }
        if (param_1[5] != 2) {
          uVar1 = *(ushort *)(piVar3[3] + 0xc);
          uVar7 = FUN_ram_4205073e(0x10);
          uVar7 = uVar1 | uVar7;
          iVar6 = piVar3[3];
          *(char *)(iVar6 + 0xc) = (char)uVar7;
          *(char *)(iVar6 + 0xd) = (char)(uVar7 >> 8);
        }
        if (*(char *)(piVar3[1] + 0xe) == '\x01') {
          iVar6 = piVar3[3];
          uVar8 = FUN_ram_4205074c(param_1[10]);
          *(char *)(iVar6 + 8) = (char)uVar8;
          *(char *)(iVar6 + 9) = (char)((uint)uVar8 >> 8);
          *(char *)(iVar6 + 0xb) = (char)((uint)uVar8 >> 0x18);
          uVar4 = *(undefined2 *)((int)param_1 + 0x2e);
          *(char *)(iVar6 + 10) = (char)((uint)uVar8 >> 0x10);
          iVar14 = piVar3[3];
          uVar4 = FUN_ram_4205073e(uVar4);
          uVar1 = *(ushort *)((int)param_1 + 0x2e);
          iVar6 = param_1[10];
          *(char *)(iVar14 + 0xe) = (char)uVar4;
          *(char *)(iVar14 + 0xf) = (char)((ushort)uVar4 >> 8);
          param_1[0xc] = iVar6 + (uint)uVar1;
          if ((*(byte *)((int)piVar3 + 10) & 1) != 0) {
            iVar6 = piVar3[3];
            uVar7 = FUN_ram_4205329c(0x5a0,iVar5,piVar13);
            uVar8 = FUN_ram_4205074c(uVar7 | 0x2040000);
            *(undefined4 *)(iVar6 + 0x14) = uVar8;
          }
          if ((short)param_1[0xd] < 0) {
            *(undefined2 *)(param_1 + 0xd) = 0;
          }
          if (param_1[0xe] == 0) {
            iVar6 = piVar3[3];
            param_1[0xe] = _DAT_ram_3fcb67cc;
            iVar6 = FUN_ram_4205074c(*(undefined4 *)(iVar6 + 4));
            param_1[0xf] = iVar6;
          }
          iVar6 = piVar3[1];
          iVar14 = piVar3[3];
          uVar10 = iVar14 - *(int *)(iVar6 + 4);
          uVar7 = (uint)*(ushort *)(iVar6 + 8) - (uVar10 & 0xffff);
          *(short *)(iVar6 + 10) = *(short *)(iVar6 + 10) - (short)(uVar10 * 0x10000 >> 0x10);
          *(short *)(iVar6 + 8) = (short)(uVar7 * 0x10000 >> 0x10);
          *(int *)(iVar6 + 4) = iVar14;
          *(undefined1 *)(iVar14 + 0x10) = 0;
          *(undefined1 *)(iVar14 + 0x11) = 0;
          uVar4 = thunk_FUN_ram_4205b2d0(iVar6,6,uVar7 & 0xffff,param_1,piVar13);
          *(char *)(iVar14 + 0x10) = (char)uVar4;
          *(char *)(iVar14 + 0x11) = (char)((ushort)uVar4 >> 8);
          iVar6 = FUN_ram_42058fe2(piVar3[1],param_1,piVar13,*(undefined1 *)((int)param_1 + 0xb),
                                   *(undefined1 *)((int)param_1 + 10),6,iVar5);
          if (iVar6 != 0) {
            *(ushort *)((int)param_1 + 0x1e) = *(ushort *)((int)param_1 + 0x1e) | 0x80;
            return iVar6;
          }
        }
        param_1[0x1c] = *piVar3;
        if (param_1[5] != 2) {
          *(ushort *)((int)param_1 + 0x1e) = *(ushort *)((int)param_1 + 0x1e) & 0xfffc;
        }
        iVar6 = FUN_ram_4205074c(*(undefined4 *)(piVar3[3] + 4));
        uVar1 = *(ushort *)(piVar3 + 2);
        uVar7 = FUN_ram_4205073e(*(undefined2 *)(piVar3[3] + 0xc));
        iVar6 = (uint)((uVar7 & 3) != 0) + iVar6 + (uint)uVar1;
        if (param_1[0x15] - iVar6 < 0) {
          param_1[0x15] = iVar6;
        }
        iVar6 = piVar3[2];
        uVar7 = FUN_ram_4205073e(*(undefined2 *)(piVar3[3] + 0xc));
        if (((uVar7 & 3) == 0) && ((short)iVar6 == 0)) {
          FUN_ram_42052766(piVar3);
        }
        else {
          iVar6 = param_1[0x1d];
          *piVar3 = 0;
          if (iVar6 == 0) {
            param_1[0x1d] = (int)piVar3;
            piVar11 = piVar3;
          }
          else {
            iVar6 = FUN_ram_4205074c(*(undefined4 *)(piVar3[3] + 4));
            iVar14 = FUN_ram_4205074c(*(undefined4 *)(piVar11[3] + 4));
            if (iVar6 - iVar14 < 0) {
              piVar9 = param_1 + 0x1d;
              do {
                piVar15 = piVar9;
                if (*piVar15 == 0) break;
                iVar6 = FUN_ram_4205074c(*(undefined4 *)(*(int *)(*piVar15 + 0xc) + 4));
                iVar14 = FUN_ram_4205074c(*(undefined4 *)(piVar3[3] + 4));
                piVar9 = (int *)*piVar15;
              } while (iVar6 - iVar14 < 0);
              *piVar3 = *piVar15;
              *piVar15 = (int)piVar3;
            }
            else {
              *piVar11 = (int)piVar3;
              piVar11 = piVar3;
            }
          }
        }
        piVar3 = (int *)param_1[0x1c];
      } while (piVar3 != (int *)0x0);
      *(undefined2 *)(param_1 + 0x1b) = 0;
      goto LAB_ram_420556d4;
    }
    if (((*(ushort *)(param_1 + 0x19) == uVar12) && (param_1[0x1d] == 0)) &&
       (*(char *)((int)param_1 + 0xa1) == '\0')) {
      *(undefined2 *)(param_1 + 0x28) = 0x100;
      *(undefined1 *)((int)param_1 + 0xa2) = 0;
    }
    uVar1 = *(ushort *)((int)param_1 + 0x1e);
  }
  if ((uVar1 & 2) != 0) {
    iVar5 = FUN_ram_42055290(param_1);
    return iVar5;
  }
LAB_ram_420556d4:
  *(ushort *)((int)param_1 + 0x1e) = *(ushort *)((int)param_1 + 0x1e) & 0xff7f;
  return 0;
}

