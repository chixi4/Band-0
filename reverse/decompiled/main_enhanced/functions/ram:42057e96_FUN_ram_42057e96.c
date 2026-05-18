
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42057e96(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  
  if ((param_1 == (int *)0x0) || (param_1[5] == 1)) {
LAB_ram_42057eb4:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if (_DAT_ram_3fcc5300 == param_1) {
    return 0;
  }
  piVar3 = (int *)param_1[0x1c];
  if (piVar3 == (int *)0x0) {
    uVar1 = *(ushort *)((int)param_1 + 0x1e);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x13);
    uVar2 = *(ushort *)(param_1 + 0x19);
    piVar14 = param_1 + 1;
    if ((char)param_1[2] == '\0') {
      iVar6 = FUN_ram_4205b904(param_1,piVar14);
    }
    else {
      iVar6 = FUN_ram_42053426((char)param_1[2]);
    }
    if (iVar6 == 0) {
      return -4;
    }
    if (*param_1 == 0) {
      *param_1 = *(int *)(iVar6 + 4);
    }
    uVar13 = (uint)uVar1;
    if ((uint)uVar2 < (uint)uVar1) {
      uVar13 = (uint)uVar2;
    }
    iVar7 = FUN_ram_420523b8(*(undefined4 *)(piVar3[3] + 4));
    if (((uint)*(ushort *)(piVar3 + 2) - param_1[0x12]) + iVar7 <= uVar13) {
      *(undefined1 *)((int)param_1 + 0xa5) = 0;
      piVar10 = (int *)param_1[0x1d];
      piVar12 = (int *)param_1[0x1d];
      while (piVar17 = piVar10, piVar17 != (int *)0x0) {
        piVar12 = piVar17;
        piVar10 = (int *)*piVar17;
      }
      do {
        iVar7 = FUN_ram_420523b8(*(undefined4 *)(piVar3[3] + 4));
        if (uVar13 < (iVar7 - param_1[0x12]) + (uint)*(ushort *)(piVar3 + 2)) {
LAB_ram_420582c2:
          if (param_1[0x1c] != 0) goto LAB_ram_420582ca;
          break;
        }
        uVar9 = FUN_ram_420523aa(*(undefined2 *)(piVar3[3] + 0xc));
        if ((uVar9 & 4) != 0) goto LAB_ram_42057eb4;
        if (((((param_1[0x1d] != 0) && ((*(ushort *)((int)param_1 + 0x1e) & 0x44) == 0)) &&
             ((piVar10 = (int *)param_1[0x1c], piVar10 == (int *)0x0 ||
              ((*piVar10 == 0 && (*(ushort *)(piVar10 + 2) < *(ushort *)((int)param_1 + 0x36)))))))
            && ((short)param_1[0x1a] != 0)) &&
           ((*(ushort *)((int)param_1 + 0x6a) < 0x10 &&
            ((*(ushort *)((int)param_1 + 0x1e) & 0xa0) == 0)))) goto LAB_ram_420582c2;
        if (param_1[5] != 2) {
          uVar5 = *(undefined2 *)(piVar3[3] + 0xc);
          uVar4 = FUN_ram_420523aa(0x10);
          iVar7 = piVar3[3];
          *(byte *)(iVar7 + 0xc) = (byte)uVar5 | (byte)uVar4;
          *(byte *)(iVar7 + 0xd) = (byte)((ushort)uVar5 >> 8) | (byte)((ushort)uVar4 >> 8);
        }
        iVar7 = FUN_ram_4205724c(piVar3);
        if (iVar7 == 0) {
          iVar7 = piVar3[3];
          uVar8 = FUN_ram_420523b8(param_1[10]);
          *(char *)(iVar7 + 8) = (char)uVar8;
          *(char *)(iVar7 + 9) = (char)((uint)uVar8 >> 8);
          *(char *)(iVar7 + 0xb) = (char)((uint)uVar8 >> 0x18);
          uVar5 = *(undefined2 *)((int)param_1 + 0x2e);
          *(char *)(iVar7 + 10) = (char)((uint)uVar8 >> 0x10);
          iVar15 = piVar3[3];
          uVar5 = FUN_ram_420523aa(uVar5);
          uVar1 = *(ushort *)((int)param_1 + 0x2e);
          iVar7 = param_1[10];
          *(char *)(iVar15 + 0xe) = (char)uVar5;
          *(char *)(iVar15 + 0xf) = (char)((ushort)uVar5 >> 8);
          param_1[0xc] = iVar7 + (uint)uVar1;
          iVar7 = piVar3[3];
          if ((*(byte *)((int)piVar3 + 10) & 1) == 0) {
            iVar7 = iVar7 + 0x14;
          }
          else {
            uVar9 = FUN_ram_420549c0(0x5a0,iVar6,piVar14);
            uVar8 = FUN_ram_420523b8(uVar9 | 0x2040000);
            *(undefined4 *)(iVar7 + 0x14) = uVar8;
            iVar7 = iVar7 + 0x18;
          }
          if ((short)param_1[0xd] < 0) {
            *(undefined2 *)(param_1 + 0xd) = 0;
          }
          if (param_1[0xe] == 0) {
            iVar15 = piVar3[3];
            param_1[0xe] = _DAT_ram_3fcc52fc;
            iVar15 = FUN_ram_420523b8(*(undefined4 *)(iVar15 + 4));
            param_1[0xf] = iVar15;
          }
          iVar15 = piVar3[1];
          iVar16 = piVar3[3];
          uVar11 = iVar16 - *(int *)(iVar15 + 4);
          uVar9 = (uint)*(ushort *)(iVar15 + 8) - (uVar11 & 0xffff);
          *(short *)(iVar15 + 10) = *(short *)(iVar15 + 10) - (short)(uVar11 * 0x10000 >> 0x10);
          *(short *)(iVar15 + 8) = (short)(uVar9 * 0x10000 >> 0x10);
          *(int *)(iVar15 + 4) = iVar16;
          *(undefined1 *)(iVar16 + 0x10) = 0;
          *(undefined1 *)(iVar16 + 0x11) = 0;
          if (iVar7 != ((*(byte *)((int)piVar3 + 10) & 1) - 1 & 0xfffffffc) + 0x18 + iVar16)
          goto LAB_ram_42057eb4;
          uVar5 = thunk_FUN_ram_4205e7ee(iVar15,6,uVar9 & 0xffff,param_1,piVar14);
          *(char *)(iVar16 + 0x10) = (char)uVar5;
          *(char *)(iVar16 + 0x11) = (char)((ushort)uVar5 >> 8);
          iVar7 = FUN_ram_4205be20(piVar3[1],param_1,piVar14,*(undefined1 *)((int)param_1 + 0xb),
                                   *(undefined1 *)((int)param_1 + 10),6,iVar6);
          if (iVar7 != 0) {
            *(ushort *)((int)param_1 + 0x1e) = *(ushort *)((int)param_1 + 0x1e) | 0x80;
            return iVar7;
          }
        }
        param_1[0x1c] = *piVar3;
        if (param_1[5] != 2) {
          *(ushort *)((int)param_1 + 0x1e) = *(ushort *)((int)param_1 + 0x1e) & 0xfffc;
        }
        iVar7 = FUN_ram_420523b8(*(undefined4 *)(piVar3[3] + 4));
        uVar1 = *(ushort *)(piVar3 + 2);
        uVar9 = FUN_ram_420523aa(*(undefined2 *)(piVar3[3] + 0xc));
        iVar7 = (uint)((uVar9 & 3) != 0) + iVar7 + (uint)uVar1;
        if (param_1[0x15] - iVar7 < 0) {
          param_1[0x15] = iVar7;
        }
        iVar7 = piVar3[2];
        uVar9 = FUN_ram_420523aa(*(undefined2 *)(piVar3[3] + 0xc));
        if (((uVar9 & 3) == 0) && ((short)iVar7 == 0)) {
          FUN_ram_420548a2(piVar3);
        }
        else {
          iVar7 = param_1[0x1d];
          *piVar3 = 0;
          if (iVar7 == 0) {
            param_1[0x1d] = (int)piVar3;
            piVar12 = piVar3;
          }
          else {
            iVar7 = FUN_ram_420523b8(*(undefined4 *)(piVar3[3] + 4));
            iVar15 = FUN_ram_420523b8(*(undefined4 *)(piVar12[3] + 4));
            piVar10 = param_1 + 0x1d;
            if (iVar7 - iVar15 < 0) {
              do {
                piVar17 = piVar10;
                if (*piVar17 == 0) break;
                iVar7 = FUN_ram_420523b8(*(undefined4 *)(*(int *)(*piVar17 + 0xc) + 4));
                iVar15 = FUN_ram_420523b8(*(undefined4 *)(piVar3[3] + 4));
                piVar10 = (int *)*piVar17;
              } while (iVar7 - iVar15 < 0);
              *piVar3 = *piVar17;
              *piVar17 = (int)piVar3;
            }
            else {
              *piVar12 = (int)piVar3;
              piVar12 = piVar3;
            }
          }
        }
        piVar3 = (int *)param_1[0x1c];
      } while (piVar3 != (int *)0x0);
      *(undefined2 *)(param_1 + 0x1b) = 0;
      goto LAB_ram_420582ca;
    }
    if (((*(ushort *)(param_1 + 0x19) == uVar13) && (param_1[0x1d] == 0)) &&
       (*(char *)((int)param_1 + 0xa5) == '\0')) {
      *(undefined2 *)(param_1 + 0x29) = 0x100;
      *(undefined1 *)((int)param_1 + 0xa6) = 0;
    }
    uVar1 = *(ushort *)((int)param_1 + 0x1e);
  }
  if ((uVar1 & 2) != 0) {
    iVar6 = FUN_ram_42057e3a(param_1);
    return iVar6;
  }
LAB_ram_420582ca:
  *(ushort *)((int)param_1 + 0x1e) = *(ushort *)((int)param_1 + 0x1e) & 0xff7f;
  return 0;
}

