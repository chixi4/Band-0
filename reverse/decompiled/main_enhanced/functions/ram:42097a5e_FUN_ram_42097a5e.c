
void FUN_ram_42097a5e(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint *puVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  char *pcVar19;
  uint uVar20;
  uint uStack0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  uint in_stack_00000018;
  
  if (param_5 < 0x224) {
    param_5 = 0x224;
  }
  uStack0000000c = param_5 & 0xffff;
  iVar5 = thunk_FUN_ram_4039c08e(1,(int)(short)param_5);
  if (iVar5 == 0) {
    FUN_ram_42053ac4(param_3);
    return;
  }
  uVar2 = *(ushort *)(param_3 + 2);
  iVar8 = param_3[1];
  for (uVar10 = 0; uVar10 < *(ushort *)((int)param_3 + 10); uVar10 = uVar10 + 1 & 0xffff) {
    *(undefined1 *)(uVar10 + iVar5) = *(undefined1 *)(iVar8 + uVar10);
  }
  if (*param_3 != 0) {
    iVar8 = *(int *)(*param_3 + 4);
    for (uVar17 = 0; uVar17 < *(ushort *)(*param_3 + 10); uVar17 = uVar17 + 1 & 0xffff) {
      *(undefined1 *)((uVar10 + uVar17 & 0xffff) + iVar5) = *(undefined1 *)(iVar8 + uVar17);
    }
  }
  iVar8 = FUN_ram_4039c0e0(iVar5 + 0xec,&DAT_ram_3c0face4,4);
  if (iVar8 != 0) goto LAB_ram_42097aee;
  piVar13 = *(int **)(param_1 + 0x20);
  uVar17 = *(int *)(param_1 + 0x34) * 0x3c;
  *(undefined1 *)(param_1 + 0x24) = 0;
  uVar20 = *(uint *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  uVar10 = uVar20;
  if (piVar13 == (int *)0x0) {
    if (*(char *)(param_1 + 0x50) == '\0') {
      *(uint *)(param_1 + 0x14) = uVar20;
    }
    else {
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
  }
  else {
    if (*(char *)(param_1 + 0x50) != '\0') {
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
    bVar3 = false;
    do {
      puVar14 = (uint *)*piVar13;
      iVar8 = FUN_ram_4039c0e0(puVar14 + 1,iVar5 + 0x1c,6);
      uVar16 = *puVar14;
      if (iVar8 == 0) {
        iVar8 = FUN_ram_4039c0e0(puVar14,iVar5 + 0xc,4);
        if (iVar8 == 0) {
          *(undefined1 *)(param_1 + 0x24) = 1;
        }
        *(uint *)(param_1 + 0x14) = uVar16;
        puVar14[3] = uVar17;
        goto LAB_ram_42097bcc;
      }
      if (*(uint *)(param_1 + 0x18) == uVar16) {
        iVar8 = (*(code *)&SUB_ram_400108cc)(uVar16);
        uVar6 = (*(code *)&SUB_ram_400108cc)(iVar8 + 1);
        *(undefined4 *)(param_1 + 0x18) = uVar6;
        *(undefined4 *)(param_1 + 0x14) = uVar6;
      }
      if (!bVar3) {
        if (uVar10 < uVar16) {
          bVar3 = true;
        }
        else {
          iVar8 = (*(code *)&SUB_ram_400108cc)(uVar10);
          uVar10 = (*(code *)&SUB_ram_400108cc)(iVar8 + 1);
        }
      }
      piVar13 = (int *)piVar13[1];
    } while (piVar13 != (int *)0x0);
  }
  if (*(uint *)(param_1 + 0x30) < *(uint *)(param_1 + 0x18)) {
    *(uint *)(param_1 + 0x14) = uVar10;
  }
  uVar16 = *(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x30) < uVar16) {
    *(uint *)(param_1 + 0x18) = uVar20;
    piVar13 = (int *)0x0;
    puVar14 = (uint *)0x0;
  }
  else {
    puVar14 = (uint *)thunk_FUN_ram_4039c08e(1,0x10);
    *puVar14 = *(uint *)(param_1 + 0x14);
    FUN_ram_4039c11e(puVar14 + 1,iVar5 + 0x1c,6);
    puVar14[3] = uVar17;
    piVar13 = (int *)thunk_FUN_ram_4039c08e(1,8);
    *piVar13 = (int)puVar14;
    piVar13[1] = 0;
    puVar11 = *(undefined4 **)(param_1 + 0x20);
    if (puVar11 == (undefined4 *)0x0) {
LAB_ram_42097d38:
      *(int **)(param_1 + 0x20) = piVar13;
    }
    else {
      if (*puVar14 < *(uint *)*puVar11) {
        piVar13[1] = (int)puVar11;
        goto LAB_ram_42097d38;
      }
      do {
        puVar12 = puVar11;
        puVar11 = (undefined4 *)puVar12[1];
        if (puVar11 == (undefined4 *)0x0) goto LAB_ram_42097d6e;
      } while (*(uint *)*puVar11 <= *puVar14);
      piVar13[1] = (int)puVar11;
LAB_ram_42097d6e:
      puVar12[1] = piVar13;
    }
    uVar16 = *(uint *)(param_1 + 0x14);
    if (uVar16 == *(uint *)(param_1 + 0x30)) {
      uVar6 = *(undefined4 *)(param_1 + 0x2c);
    }
    else {
      iVar8 = (*(code *)&SUB_ram_400108cc)(uVar16);
      uVar6 = (*(code *)&SUB_ram_400108cc)(iVar8 + 1);
    }
    *(undefined4 *)(param_1 + 0x18) = uVar6;
  }
LAB_ram_42097bcc:
  if ((*(uint *)(param_1 + 0x30) < uVar16) || (uVar16 == 0)) {
    if (piVar13 != (int *)0x0) {
      FUN_ram_4209791a(param_1 + 0x20,piVar13);
      thunk_FUN_ram_40390634(piVar13);
    }
    if (puVar14 != (uint *)0x0) {
      thunk_FUN_ram_40390634(puVar14);
    }
LAB_ram_42097bfc:
    FUN_ram_420974e0(param_1,iVar5);
    *(undefined1 *)(iVar5 + 0xf0) = 0x35;
    *(undefined1 *)(iVar5 + 0xf1) = 1;
    *(undefined1 *)(iVar5 + 0xf2) = 6;
    *(undefined1 *)(iVar5 + 0xf3) = 0xff;
    piVar13 = (int *)FUN_ram_42097a36(uStack0000000c);
    if (piVar13 == (int *)0x0) goto LAB_ram_42097aee;
    uVar10 = 0;
    piVar9 = piVar13;
    do {
      iVar8 = piVar9[1];
      for (uVar17 = 0; uVar20 = uVar10 + uVar17 & 0xffff, uVar17 < *(ushort *)((int)piVar9 + 10);
          uVar17 = uVar17 + 1 & 0xffff) {
        *(undefined1 *)(iVar8 + uVar17) = *(undefined1 *)(uVar20 + iVar5);
      }
      piVar9 = (int *)*piVar9;
      uVar10 = uVar20;
    } while (piVar9 != (int *)0x0);
    FUN_ram_4039c11e(&stack0x00000018,iVar5 + 0x1c,6);
    FUN_ram_4039c11e(&stack0x00000014,iVar5 + 0x18,4);
    if (in_stack_00000014 == 0) {
      in_stack_00000010 = *(int *)(param_1 + 4);
    }
    else {
      in_stack_00000010 = in_stack_00000014;
      FUN_ram_4205a932(&stack0x00000014,&stack0x00000018);
    }
    FUN_ram_42058c24(*(undefined4 *)(param_1 + 0x48),piVar13,&stack0x00000010,0x44);
    puVar11 = &stack0x00000010;
LAB_ram_42097f66:
    FUN_ram_4205a95c(puVar11);
  }
  else {
    pcVar18 = (char *)(iVar5 + 0xf0);
    pcVar19 = pcVar18 + ((int)((uVar2 - 0xf0) * 0x10000) >> 0x10);
    cVar4 = '\x05';
    bVar15 = 0;
    in_stack_00000018 = uVar16;
    for (; pcVar18 < pcVar19; pcVar18 = pcVar18 + (byte)pcVar18[1] + 2) {
      cVar1 = *pcVar18;
      if (cVar1 == '5') {
        bVar15 = pcVar18[2];
      }
      else {
        if (cVar1 == -1) break;
        if (cVar1 == '2') {
          iVar8 = FUN_ram_4039c0e0(&stack0x00000018,pcVar18 + 2,4);
          cVar4 = (iVar8 != 0) + '\x03';
        }
      }
    }
    if (bVar15 == 4) {
      iVar8 = 2;
LAB_ram_42097eac:
      if (piVar13 != (int *)0x0) {
        FUN_ram_4209791a(param_1 + 0x20,piVar13);
        thunk_FUN_ram_40390634(piVar13);
      }
      if (puVar14 != (uint *)0x0) {
        thunk_FUN_ram_40390634(puVar14);
      }
      if (iVar8 == 2) {
        *(undefined1 *)(param_1 + 0x50) = 1;
      }
      *(undefined1 *)(param_1 + 0x14) = 0;
      *(undefined1 *)(param_1 + 0x15) = 0;
      *(undefined1 *)(param_1 + 0x16) = 0;
      *(undefined1 *)(param_1 + 0x17) = 0;
      if (iVar8 != 4) goto LAB_ram_42097aee;
      goto LAB_ram_42097bfc;
    }
    if (4 < bVar15) {
      if (bVar15 == 7) {
        iVar8 = 6;
      }
      else {
LAB_ram_42097dc6:
        if (cVar4 != '\x04') {
          if (cVar4 != '\x03') goto LAB_ram_42097aee;
          goto LAB_ram_42097dd2;
        }
LAB_ram_42097f7a:
        iVar8 = 4;
      }
      goto LAB_ram_42097eac;
    }
    if (bVar15 == 1) {
      FUN_ram_420974e0(param_1,iVar5);
      *(undefined1 *)(iVar5 + 0xf0) = 0x35;
      *(undefined1 *)(iVar5 + 0xf2) = 2;
      *(undefined1 *)(iVar5 + 0xf1) = 1;
      puVar7 = (undefined1 *)FUN_ram_4209754a(param_1,iVar5 + 0xf3);
      *puVar7 = 0xff;
      piVar13 = (int *)FUN_ram_42097a36(uStack0000000c);
      if (piVar13 == (int *)0x0) goto LAB_ram_42097aee;
      uVar10 = 0;
      piVar9 = piVar13;
      do {
        iVar8 = piVar9[1];
        for (uVar17 = 0; uVar20 = uVar17 + uVar10 & 0xffff, uVar17 < *(ushort *)((int)piVar9 + 10);
            uVar17 = uVar17 + 1 & 0xffff) {
          *(undefined1 *)(iVar8 + uVar17) = *(undefined1 *)(uVar20 + iVar5);
        }
        piVar9 = (int *)*piVar9;
        uVar10 = uVar20;
      } while (piVar9 != (int *)0x0);
      in_stack_00000018 = 0;
      FUN_ram_4209770e(param_1,iVar5,&stack0x00000018);
      FUN_ram_42058c24(*(undefined4 *)(param_1 + 0x48),piVar13,&stack0x00000018,0x44);
      puVar11 = &stack0x00000018;
      goto LAB_ram_42097f66;
    }
    if ((bVar15 != 3) || (cVar4 != '\x05')) goto LAB_ram_42097dc6;
    if (*(char *)(param_1 + 0x24) == '\0') goto LAB_ram_42097f7a;
LAB_ram_42097dd2:
    FUN_ram_420974e0(param_1,iVar5);
    *(undefined1 *)(iVar5 + 0xf0) = 0x35;
    *(undefined1 *)(iVar5 + 0xf1) = 1;
    *(undefined1 *)(iVar5 + 0xf2) = 5;
    puVar7 = (undefined1 *)FUN_ram_4209754a(param_1,iVar5 + 0xf3);
    *puVar7 = 0xff;
    piVar13 = (int *)FUN_ram_42097a36(uStack0000000c);
    if (piVar13 == (int *)0x0) goto LAB_ram_42097aee;
    uVar10 = 0;
    piVar9 = piVar13;
    do {
      iVar8 = piVar9[1];
      for (uVar17 = 0; uVar20 = uVar17 + uVar10 & 0xffff, uVar17 < *(ushort *)((int)piVar9 + 10);
          uVar17 = uVar17 + 1 & 0xffff) {
        *(undefined1 *)(iVar8 + uVar17) = *(undefined1 *)(uVar20 + iVar5);
      }
      piVar9 = (int *)*piVar9;
      uVar10 = uVar20;
    } while (piVar9 != (int *)0x0);
    in_stack_00000018 = 0;
    FUN_ram_4209770e(param_1,iVar5,&stack0x00000018);
    iVar8 = FUN_ram_42058c24(*(undefined4 *)(param_1 + 0x48),piVar13,&stack0x00000018,0x44);
    FUN_ram_4205a95c(&stack0x00000018);
    if (iVar8 == 0) {
      (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),iVar5 + 0x10,iVar5 + 0x1c);
    }
  }
  if (*(char *)((int)piVar13 + 0xe) != '\0') {
    FUN_ram_42053ac4(piVar13);
  }
LAB_ram_42097aee:
  FUN_ram_42053ac4(param_3);
  thunk_FUN_ram_40390634(iVar5);
  return;
}

