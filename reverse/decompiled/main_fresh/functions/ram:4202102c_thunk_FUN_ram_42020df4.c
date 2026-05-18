
undefined4
thunk_FUN_ram_42020df4(byte *param_1,int param_2,undefined1 *param_3,int param_4,int *param_5)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  ushort *puVar7;
  undefined4 uVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint uVar16;
  undefined1 *puVar17;
  
  if (param_1 == (byte *)0x0) {
    return 4;
  }
  uVar8 = 4;
  if ((param_3 != (undefined1 *)0x0) && (param_5 != (int *)0x0)) {
    *param_5 = 0;
    pbVar9 = param_1 + param_2;
    uVar11 = 0;
    uVar6 = 0;
    uVar16 = 0;
    for (; param_1 != pbVar9; param_1 = param_1 + 1) {
      uVar13 = (uint)*param_1;
      uVar12 = uVar16;
      if ((uVar13 - 9 & 0xff) < 0x18) {
        if ((-0x800014 >> (uVar13 - 9 & 0x1f) & 1U) != 0) goto LAB_ram_42020eb8;
      }
      else {
        if (uVar13 == 0x3d) break;
LAB_ram_42020eb8:
        if (-1 < "HwABAJ0vf/8BAABPAAAAARcAAG///8AAAAcZAAJP8AAADxkAAk/4AAAfGQACT/wAAD8ZAAJf/gAAP8BHAQBvAf4AAH+AGQAAXwD/AAB/fgABX/h/AAD+ZQABb/4/gAD8cEsAAG8HH4AA/GAZAABfAx+AAPyWAAIfnxkA//////+8DPkFBNwFIgP8HAAQMN4HJj/wGQAoB44ZABbgGQAiDgcZAAECACYwABkANhwDgGcACBkA2hgBjPBmAgIDMDwwIEAZAMfP+GYGBwMw/jBwwDFLANg4AM8cZgYDBjHHGHDAfQDnMADODGMGAwYxgxjwwDivAPYAMADMDGMMAYYzAZjRgHAwlgD2ADAAzAxhDAGMM/+YmYAAOBkA9gA4AcwMYYgBjDP/jZmAABgZANgYAYwMYZgAzDMADYkAGQCBHAGMDGCYANgZABdgMgDYDAMMDGDQAFgxgYcPAH0A9gAPDwwMYPAAcDHDBw8AOHBkAOcD/gwMYHAAcDD+BwYAH+EA9gAA8AQEQGAAIDA4AgYAB4AyAAECAAVfAQcsAQECAAi/BwTbAV8AAAAAAxkABgIgAAICAAgyAAkCAA8ZACYIdwACXAIDSwAYw2AACBkAHwMZAB70Ak/B4E4eA8AI4A8GYA8weCAQsQj0As/H8P8/D+Af+D+H4D+w/jAwGQD3AMMOGOHjnDAOHHHHADDxhxkA9QEMHOHBmDAMDGDGAGBxAxhgMgDYDAzAwZwADAzAZgBgcBkA5x/8wIGPAAwO/+YAYDAfMgD1AR/8wIGH4AgG/+YAYDH/DMBLAOcYAMCBgPAMDsAGAGAzgxkA6AwAwIGAMAwMwAYAYHMDGQAxDMCBlgB1ZgBgcwcHgEsA9QEOGMCBnDAOHHDGADDzjweGGQD0Acf4wcGP4Av4P4YAP7H7Aw4ZAPQCQcHgQIEDwAjgDgYADiDzAwQZAAN2ARMICAAVA6kBAxEABBkAHAYZABMcIQAcHhkABDIAByADDQIAAw0CDRgAC5YABwIADzIA//////8LCBMIBAIAAdIPDwQQBQ82EAYPaBAGD5oQBg/MEAYPmRABAf4QDzARBg/kEAEBYhEPlBEGD8YRBg/4EQYPAgCvUAAAAAAA"
                 [uVar13 + 0xb0]) {
          uVar11 = uVar11 << 6 |
                   (int)"HwABAJ0vf/8BAABPAAAAARcAAG///8AAAAcZAAJP8AAADxkAAk/4AAAfGQACT/wAAD8ZAAJf/gAAP8BHAQBvAf4AAH+AGQAAXwD/AAB/fgABX/h/AAD+ZQABb/4/gAD8cEsAAG8HH4AA/GAZAABfAx+AAPyWAAIfnxkA//////+8DPkFBNwFIgP8HAAQMN4HJj/wGQAoB44ZABbgGQAiDgcZAAECACYwABkANhwDgGcACBkA2hgBjPBmAgIDMDwwIEAZAMfP+GYGBwMw/jBwwDFLANg4AM8cZgYDBjHHGHDAfQDnMADODGMGAwYxgxjwwDivAPYAMADMDGMMAYYzAZjRgHAwlgD2ADAAzAxhDAGMM/+YmYAAOBkA9gA4AcwMYYgBjDP/jZmAABgZANgYAYwMYZgAzDMADYkAGQCBHAGMDGCYANgZABdgMgDYDAMMDGDQAFgxgYcPAH0A9gAPDwwMYPAAcDHDBw8AOHBkAOcD/gwMYHAAcDD+BwYAH+EA9gAA8AQEQGAAIDA4AgYAB4AyAAECAAVfAQcsAQECAAi/BwTbAV8AAAAAAxkABgIgAAICAAgyAAkCAA8ZACYIdwACXAIDSwAYw2AACBkAHwMZAB70Ak/B4E4eA8AI4A8GYA8weCAQsQj0As/H8P8/D+Af+D+H4D+w/jAwGQD3AMMOGOHjnDAOHHHHADDxhxkA9QEMHOHBmDAMDGDGAGBxAxhgMgDYDAzAwZwADAzAZgBgcBkA5x/8wIGPAAwO/+YAYDAfMgD1AR/8wIGH4AgG/+YAYDH/DMBLAOcYAMCBgPAMDsAGAGAzgxkA6AwAwIGAMAwMwAYAYHMDGQAxDMCBlgB1ZgBgcwcHgEsA9QEOGMCBnDAOHHDGADDzjweGGQD0Acf4wcGP4Av4P4YAP7H7Aw4ZAPQCQcHgQIEDwAjgDgYADiDzAwQZAAN2ARMICAAVA6kBAxEABBkAHAYZABMcIQAcHhkABDIAByADDQIAAw0CDRgAC5YABwIADzIA//////8LCBMIBAIAAdIPDwQQBQ82EAYPaBAGD5oQBg/MEAYPmRABAf4QDzARBg/kEAEBYhEPlBEGD8YRBg/4EQYPAgCvUAAAAAAA"
                        [uVar13 + 0xb0];
          uVar12 = uVar16 + 6;
          if (7 < (int)uVar12) {
            if (0x27ff < uVar6) {
              return 1;
            }
            (&DAT_ram_3fcbeee4)[uVar6] = (char)(uVar11 >> (uVar16 - 2 & 0x1f));
            uVar6 = uVar6 + 1;
            uVar12 = uVar16 - 2;
          }
        }
      }
      uVar16 = uVar12;
    }
    uVar8 = 1;
    if (0 < (int)uVar6) {
      puVar7 = (ushort *)(&DAT_ram_3fcbeee4 + uVar6);
      puVar17 = param_3 + param_4;
      puVar15 = (ushort *)&DAT_ram_3fcbeee4;
      puVar10 = param_3;
      while (puVar5 = puVar10, puVar15 < puVar7) {
        uVar2 = *puVar15;
        puVar14 = (ushort *)((int)puVar15 + 1);
        uVar16 = (uint)(byte)((byte)uVar2 >> 4);
        if (uVar16 == 0xf) {
          uVar16 = 0xf;
          do {
            if (puVar7 == puVar14) goto LAB_ram_42020e88;
            uVar3 = *puVar14;
            puVar14 = (ushort *)((int)puVar14 + 1);
            uVar16 = uVar16 + (byte)uVar3;
          } while ((byte)uVar3 == 0xff);
        }
        if (uVar16 != 0) {
          if (puVar7 < (ushort *)((int)puVar14 + uVar16)) {
            uVar16 = (int)puVar7 - (int)puVar14;
          }
          puVar5 = puVar10 + uVar16;
          if (puVar17 < puVar10 + uVar16) {
            uVar16 = (int)puVar17 - (int)puVar10;
            puVar5 = puVar17;
          }
          FUN_ram_4039c11e(puVar10,puVar14,uVar16);
          puVar14 = (ushort *)((int)puVar14 + uVar16);
        }
        if ((puVar7 <= puVar14) || (puVar15 = puVar14 + 1, puVar7 < puVar15)) break;
        uVar16 = (uint)*puVar14;
        if ((uVar16 == 0) || ((uint)((int)puVar5 - (int)param_3) < uVar16)) goto LAB_ram_42020e90;
        uVar11 = (byte)uVar2 & 0xf;
        uVar6 = uVar11 + 4;
        if (uVar11 == 0xf) {
          uVar6 = 0x13;
          do {
            if (puVar7 == puVar15) break;
            uVar2 = *puVar15;
            puVar15 = (ushort *)((int)puVar15 + 1);
            uVar6 = uVar6 + (byte)uVar2;
          } while ((byte)uVar2 == 0xff);
        }
        if (puVar17 < puVar5 + uVar6) {
          uVar6 = (int)puVar17 - (int)puVar5;
        }
        iVar4 = 0;
        if (uVar16 < 8) {
          for (uVar11 = 0; puVar10 = puVar5 + uVar11, uVar11 != uVar6; uVar11 = uVar11 + 1) {
            *puVar10 = puVar5[uVar11 - uVar16];
          }
        }
        else {
          while( true ) {
            if (uVar6 - iVar4 < 8) break;
            FUN_ram_4039c11e(puVar5 + iVar4,puVar5 + (iVar4 - uVar16),8);
            iVar4 = iVar4 + 8;
          }
          uVar11 = uVar6 >> 3;
          iVar4 = 0;
          while( true ) {
            puVar10 = puVar5 + iVar4 + uVar11 * 8;
            iVar1 = iVar4 + (uVar11 * 8 - uVar16);
            if (uVar6 + uVar11 * -8 == iVar4) break;
            iVar4 = iVar4 + 1;
            *puVar10 = puVar5[iVar1];
          }
        }
      }
LAB_ram_42020e88:
      iVar4 = (int)puVar5 - (int)param_3;
      if (iVar4 < 1) {
LAB_ram_42020e90:
        uVar8 = 2;
      }
      else {
        *param_5 = iVar4;
        uVar8 = 3;
        if (param_4 == iVar4) {
          uVar8 = 0;
        }
      }
    }
  }
  return uVar8;
}

