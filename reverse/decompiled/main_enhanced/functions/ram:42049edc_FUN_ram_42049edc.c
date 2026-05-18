
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_42049edc(uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uint *param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  if (param_6 != (uint *)0x0) {
    if ((param_3 & 2) != 0) {
      return 0x106;
    }
    uVar15 = param_1 & 0x7fff;
    if (((param_1 & 0x7fff) == 0) && (((param_4 & 1) == 0 || ((param_4 & 0x14) == 0)))) {
      FUN_ram_403917e0(0x3fcc1d4c);
      uVar14 = param_2 + 0x7fffU & 0xffff8000;
      puVar8 = &DAT_ram_3fcc1d20;
      for (iVar16 = 0; iVar16 != _DAT_ram_3fcc1d20; iVar16 = iVar16 + 1) {
        if (((param_4 == (param_4 & *(uint *)(puVar8 + 0x1c))) &&
            (param_3 == (param_3 & *(uint *)(puVar8 + 0x20)))) &&
           (uVar14 <= *(uint *)(puVar8 + 0x18))) {
          iVar13 = iVar16 * 0x28;
          if (*(int *)(&DAT_ram_3fcc1d44 + iVar13) == 0) {
            puVar2 = (undefined4 *)FUN_ram_403905a0(1,0x2c,0x804);
            if (puVar2 == (undefined4 *)0x0) {
              uVar1 = 0x101;
              goto LAB_ram_42049f60;
            }
            uVar1 = *(undefined4 *)(&DAT_ram_3fcc1d34 + iVar13);
            puVar2[4] = 0;
            puVar2[5] = param_4;
            *puVar2 = uVar1;
            puVar2[1] = uVar1;
            iVar9 = *(int *)(&DAT_ram_3fcc1d44 + iVar13);
            puVar2[9] = iVar9;
            if (iVar9 == 0) {
              *(undefined4 **)(&DAT_ram_3fcc1d48 + iVar13) = puVar2 + 9;
            }
            else {
              *(undefined4 **)(iVar9 + 0x28) = puVar2 + 9;
            }
            iVar13 = iVar16 * 0x28;
            *(undefined4 **)(&DAT_ram_3fcc1d44 + iVar13) = puVar2;
            puVar2[10] = &DAT_ram_3fcc1d44 + iVar13;
            puVar3 = (undefined4 *)FUN_ram_403905a0(1,0x2c,0x804);
            if (puVar3 == (undefined4 *)0x0) {
              uVar1 = 0x101;
              goto LAB_ram_4204a166;
            }
            uVar1 = *(undefined4 *)(&DAT_ram_3fcc1d2c + iVar13);
            puVar3[4] = 0;
            puVar3[5] = param_4;
            *puVar3 = uVar1;
            puVar3[1] = uVar1;
            piVar10 = *(int **)(&DAT_ram_3fcc1d48 + iVar13);
            puVar3[9] = 0;
            puVar3[10] = piVar10;
            *piVar10 = (int)puVar3;
            *(undefined4 **)(&DAT_ram_3fcc1d48 + iVar13) = puVar3 + 9;
          }
          else {
            puVar3 = (undefined4 *)0x0;
            puVar2 = (undefined4 *)0x0;
          }
          uVar6 = param_1 + uVar14;
          iVar13 = *(int *)(&DAT_ram_3fcc1d44 + iVar16 * 0x28);
          goto LAB_ram_4204a032;
        }
        puVar8 = puVar8 + 0x28;
      }
      uVar1 = 0x105;
      goto LAB_ram_42049f60;
    }
  }
  return 0x102;
LAB_ram_4204a032:
  if (iVar13 == 0) goto code_r0x4204a036;
  if (param_3 == *(uint *)(iVar13 + 0x20)) {
    uVar11 = *(uint *)(iVar13 + 0x18);
    uVar7 = *(uint *)(iVar13 + 0x1c);
    if (param_1 < uVar11) {
      if ((param_5 & 1) == 0) {
        if (uVar6 <= uVar11) goto LAB_ram_4204a190;
LAB_ram_4204a150:
        uVar1 = 0x102;
        goto LAB_ram_4204a154;
      }
    }
    else {
      if (uVar6 <= uVar7) {
        uVar1 = 0x103;
        *param_6 = (*(int *)(iVar13 + 8) - uVar11) + param_1;
        goto LAB_ram_4204a154;
      }
      if ((param_5 & 1) == 0) {
LAB_ram_4204a190:
        if ((param_1 < uVar7) && (uVar7 < uVar6)) goto LAB_ram_4204a150;
      }
    }
  }
  iVar13 = *(int *)(iVar13 + 0x24);
  goto LAB_ram_4204a032;
code_r0x4204a036:
  puVar4 = (uint *)FUN_ram_403905a0(1,0x2c,0x804);
  if (puVar4 != (uint *)0x0) {
    bVar5 = false;
    piVar12 = *(int **)(&DAT_ram_3fcc1d44 + iVar16 * 0x28);
    uVar6 = piVar12[1];
    piVar10 = (int *)0x0;
    do {
      uVar7 = *piVar12 - uVar6;
      if ((!bVar5) && (uVar14 <= uVar7)) {
        uVar7 = uVar7 - uVar14;
        *puVar4 = uVar6;
        bVar5 = true;
        piVar10 = piVar12;
      }
      if (uVar15 < uVar7) {
        uVar15 = uVar7;
      }
      uVar6 = piVar12[1];
      piVar12 = (int *)piVar12[9];
    } while (piVar12 != (int *)0x0);
    if (bVar5) {
      piVar12 = (int *)piVar10[10];
      puVar4[9] = (uint)piVar10;
      uVar6 = *puVar4;
      puVar4[10] = (uint)piVar12;
      *piVar12 = (int)puVar4;
      piVar10[10] = (int)(puVar4 + 9);
      *(uint *)(&DAT_ram_3fcc1d38 + iVar16 * 0x28) = uVar15;
      uVar15 = uVar14 + uVar6;
      if ((param_4 & 1) == 0) {
        uVar7 = 0x3c000000;
      }
      else {
        uVar7 = 0x42000000;
      }
      uVar6 = uVar6 | uVar7;
      puVar4[1] = uVar15;
      puVar4[7] = param_1 + uVar14;
      puVar4[2] = uVar6;
      puVar4[3] = uVar7 | uVar15;
      puVar4[4] = uVar14;
      puVar4[5] = param_4;
      puVar4[6] = param_1;
      puVar4[8] = param_3;
      FUN_ram_40392008(param_3,uVar6,param_1,uVar14);
      *param_6 = puVar4[2];
      FUN_ram_403917f8(0x3fcc1d4c);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0);
  }
  uVar1 = 0x101;
LAB_ram_4204a154:
  if (puVar3 != (undefined4 *)0x0) {
    thunk_FUN_ram_40390634(puVar3);
  }
  if (puVar2 != (undefined4 *)0x0) {
LAB_ram_4204a166:
    thunk_FUN_ram_40390634(puVar2);
  }
LAB_ram_42049f60:
  FUN_ram_403917f8(0x3fcc1d4c);
  return uVar1;
}

