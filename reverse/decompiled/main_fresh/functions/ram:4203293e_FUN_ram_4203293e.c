
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203293e(char *param_1)

{
  short *psVar1;
  short sVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  short sVar13;
  
  iVar5 = _DAT_ram_3fcb6b88;
  uVar11 = 0;
  sVar7 = 0;
  sVar13 = 0;
  do {
    if (*param_1 == '\0') {
      psVar1 = (short *)(_DAT_ram_3fcb6b88 + 2);
      *(short *)(_DAT_ram_3fcb6b88 + 4) = sVar13 + *(short *)(_DAT_ram_3fcb6b88 + 4);
      *(short *)(iVar5 + 2) = (short)uVar11 + *psVar1;
      *(short *)(iVar5 + 6) = *(short *)(iVar5 + 6) + sVar7 * 2;
      return 0;
    }
    if ((1 < (byte)(*param_1 - 1U)) || (*(int *)(param_1 + 4) == 0)) {
      return 3;
    }
    uVar12 = uVar11 + 1 & 0xffff;
    piVar9 = *(int **)(param_1 + 8);
    piVar10 = piVar9;
    uVar11 = uVar12;
    while (uVar4 = uVar12, piVar9 != (int *)0x0) {
      piVar9 = (int *)*piVar10;
      piVar10 = piVar10 + 1;
      uVar12 = uVar4 + 1 & 0xffff;
      uVar11 = uVar4;
    }
    piVar10 = *(int **)(param_1 + 0xc);
    if (piVar10 != (int *)0x0) {
      for (; *piVar10 != 0; piVar10 = piVar10 + 8) {
        if (piVar10[1] == 0) {
          return 3;
        }
        if ((piVar10[4] & 0x30U) == 0) {
          uVar11 = uVar11 + 2;
        }
        else {
          sVar7 = sVar7 + 1;
          uVar11 = uVar11 + 3;
        }
        piVar9 = (int *)piVar10[3];
        uVar11 = uVar11 & 0xffff;
        if (piVar9 != (int *)0x0) {
          while (*piVar9 != 0) {
            piVar3 = piVar9 + 2;
            uVar11 = uVar11 + 1 & 0xffff;
            piVar9 = piVar9 + 4;
            if (*piVar3 == 0) {
              return 3;
            }
          }
        }
        pcVar8 = (char *)piVar10[7];
        if (pcVar8 != (char *)0x0) {
          iVar6 = 0;
          for (; *pcVar8 != '\0'; pcVar8 = pcVar8 + 8) {
            if (0x1b < (byte)(*pcVar8 - 1U)) {
              return 3;
            }
            sVar2 = *(short *)(pcVar8 + 2);
            if (200 < (ushort)(sVar2 + 0xd900U)) {
              return 3;
            }
            if ((ushort)(sVar2 + 0xd8f8U) < 8) {
              return 3;
            }
            if (sVar2 == 0x271f) {
              return 3;
            }
            if ((ushort)(sVar2 + 0xd8caU) < 10) {
              return 3;
            }
            if ((ushort)(sVar2 + 0xd8a8U) < 8) {
              return 3;
            }
            if ((ushort)(sVar2 + 0xd897U) < 0x17) {
              return 3;
            }
            if ((ushort)(sVar2 + 0xd878U) < 0x18) {
              return 3;
            }
            if (sVar2 == 0x27bb) {
              return 3;
            }
            if ((pcVar8[4] == '\x01') && (0x110 < *(ushort *)(pcVar8 + 6))) {
              return 3;
            }
            iVar6 = iVar6 + 1;
          }
          uVar11 = uVar11 + iVar6 & 0xffff;
          if (1 < iVar6) {
            uVar11 = uVar11 + 1 & 0xffff;
          }
        }
      }
    }
    sVar13 = sVar13 + 1;
    param_1 = param_1 + 0x10;
  } while( true );
}

