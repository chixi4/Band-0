
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4201a12e(uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uint *param_6)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  if (param_6 == (uint *)0x0) {
    return 0x102;
  }
  if ((param_3 & 2) != 0) {
    return 0x106;
  }
  uVar15 = param_1 & 0x7fff;
  if ((param_1 & 0x7fff) != 0) {
    return 0x102;
  }
  if (((param_4 & 1) != 0) && ((param_4 & 0x14) != 0)) {
    return 0x102;
  }
  FUN_ram_40390ff2(0x3fcb3554);
  uVar14 = param_2 + 0x7fffU & 0xffff8000;
  puVar9 = &DAT_ram_3fcb3528;
  for (iVar16 = 0; iVar16 != _DAT_ram_3fcb3528; iVar16 = iVar16 + 1) {
    if (((param_4 == (param_4 & *(uint *)(puVar9 + 0x1c))) &&
        (param_3 == (param_3 & *(uint *)(puVar9 + 0x20)))) && (uVar14 <= *(uint *)(puVar9 + 0x18)))
    {
      iVar3 = iVar16 * 0x28;
      if (*(int *)(&DAT_ram_3fcb354c + iVar3) == 0) {
        puVar4 = (undefined4 *)FUN_ram_40390574(1,0x2c,0x804);
        if (puVar4 == (undefined4 *)0x0) {
          uVar2 = 0x101;
          goto LAB_ram_4201a1be;
        }
        uVar2 = *(undefined4 *)(&DAT_ram_3fcb353c + iVar3);
        puVar4[4] = 0;
        puVar4[5] = param_4;
        *puVar4 = uVar2;
        puVar4[1] = uVar2;
        iVar10 = *(int *)(&DAT_ram_3fcb354c + iVar3);
        puVar4[9] = iVar10;
        if (iVar10 == 0) {
          *(undefined4 **)(&DAT_ram_3fcb3550 + iVar3) = puVar4 + 9;
        }
        else {
          *(undefined4 **)(iVar10 + 0x28) = puVar4 + 9;
        }
        iVar3 = iVar16 * 0x28;
        *(undefined4 **)(&DAT_ram_3fcb354c + iVar3) = puVar4;
        puVar4[10] = &DAT_ram_3fcb354c + iVar3;
        puVar5 = (undefined4 *)FUN_ram_40390574(1,0x2c,0x804);
        if (puVar5 == (undefined4 *)0x0) {
          uVar2 = 0x101;
          goto LAB_ram_4201a3aa;
        }
        uVar2 = *(undefined4 *)(&DAT_ram_3fcb3534 + iVar3);
        puVar5[4] = 0;
        puVar5[5] = param_4;
        *puVar5 = uVar2;
        puVar5[1] = uVar2;
        piVar11 = *(int **)(&DAT_ram_3fcb3550 + iVar3);
        puVar5[9] = 0;
        puVar5[10] = piVar11;
        *piVar11 = (int)puVar5;
        *(undefined4 **)(&DAT_ram_3fcb3550 + iVar3) = puVar5 + 9;
      }
      else {
        puVar5 = (undefined4 *)0x0;
        puVar4 = (undefined4 *)0x0;
      }
      uVar7 = param_1 + uVar14;
      iVar3 = *(int *)(&DAT_ram_3fcb354c + iVar16 * 0x28);
      goto LAB_ram_4201a286;
    }
    puVar9 = puVar9 + 0x28;
  }
  uVar2 = 0x105;
  goto LAB_ram_4201a1be;
LAB_ram_4201a286:
  if (iVar3 == 0) goto code_r0x4201a28a;
  if (param_3 == *(uint *)(iVar3 + 0x20)) {
    uVar12 = *(uint *)(iVar3 + 0x18);
    uVar8 = *(uint *)(iVar3 + 0x1c);
    if (param_1 < uVar12) {
      if ((param_5 & 1) == 0) {
        if (uVar7 <= uVar12) goto LAB_ram_4201a3c8;
LAB_ram_4201a394:
        uVar2 = 0x102;
        goto LAB_ram_4201a398;
      }
    }
    else {
      if (uVar7 <= uVar8) {
        uVar2 = 0x103;
        *param_6 = (*(int *)(iVar3 + 8) - uVar12) + param_1;
        goto LAB_ram_4201a398;
      }
      if ((param_5 & 1) == 0) {
LAB_ram_4201a3c8:
        if ((param_1 < uVar8) && (uVar8 < uVar7)) goto LAB_ram_4201a394;
      }
    }
  }
  iVar3 = *(int *)(iVar3 + 0x24);
  goto LAB_ram_4201a286;
code_r0x4201a28a:
  puVar6 = (uint *)FUN_ram_40390574(1,0x2c,0x804);
  if (puVar6 != (uint *)0x0) {
    bVar1 = false;
    piVar13 = *(int **)(&DAT_ram_3fcb354c + iVar16 * 0x28);
    uVar7 = piVar13[1];
    piVar11 = (int *)0x0;
    do {
      uVar8 = *piVar13 - uVar7;
      if ((!bVar1) && (uVar14 <= uVar8)) {
        uVar8 = uVar8 - uVar14;
        *puVar6 = uVar7;
        bVar1 = true;
        piVar11 = piVar13;
      }
      if (uVar15 < uVar8) {
        uVar15 = uVar8;
      }
      uVar7 = piVar13[1];
      piVar13 = (int *)piVar13[9];
    } while (piVar13 != (int *)0x0);
    piVar13 = (int *)piVar11[10];
    puVar6[9] = (uint)piVar11;
    uVar7 = *puVar6;
    puVar6[10] = (uint)piVar13;
    *piVar13 = (int)puVar6;
    piVar11[10] = (int)(puVar6 + 9);
    *(uint *)(&DAT_ram_3fcb3540 + iVar16 * 0x28) = uVar15;
    uVar15 = uVar14 + uVar7;
    if ((param_4 & 1) == 0) {
      uVar8 = 0x3c000000;
    }
    else {
      uVar8 = 0x42000000;
    }
    uVar7 = uVar7 | uVar8;
    puVar6[1] = uVar15;
    puVar6[7] = param_1 + uVar14;
    puVar6[2] = uVar7;
    puVar6[3] = uVar8 | uVar15;
    puVar6[4] = uVar14;
    puVar6[5] = param_4;
    puVar6[6] = param_1;
    puVar6[8] = param_3;
    FUN_ram_403915d8(param_3,uVar7,param_1,uVar14);
    *param_6 = puVar6[2];
    FUN_ram_4039100a(0x3fcb3554);
    return 0;
  }
  uVar2 = 0x101;
LAB_ram_4201a398:
  if (puVar5 != (undefined4 *)0x0) {
    thunk_FUN_ram_40390608(puVar5);
  }
  if (puVar4 != (undefined4 *)0x0) {
LAB_ram_4201a3aa:
    thunk_FUN_ram_40390608(puVar4);
  }
LAB_ram_4201a1be:
  FUN_ram_4039100a(0x3fcb3554);
  return uVar2;
}

