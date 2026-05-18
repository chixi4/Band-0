
int FUN_ram_420689c6(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  undefined4 uVar12;
  ushort uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  undefined8 uVar19;
  int iStack_9c;
  int iStack_74;
  undefined2 uStack_70;
  ushort uStack_6e;
  int iStack_6c;
  undefined2 uStack_68;
  ushort uStack_66;
  int aiStack_64 [2];
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  
  iVar3 = FUN_ram_420685b4(param_4,0);
  if (iVar3 == 0) {
    return -0xc;
  }
  uStack_50 = 0x30001;
  puStack_54 = &uStack_4c;
  uStack_70 = 1;
  uStack_68 = 1;
  aiStack_64[1] = 1;
  uStack_58 = 1;
  iVar3 = FUN_ram_420684a2(param_3,param_4);
  if (iVar3 == -1) {
    if (((param_1 == 0) || (iVar3 = FUN_ram_42068310(param_1,0), iVar3 == 0)) &&
       ((param_2 == 0 || (iVar3 = FUN_ram_4206826c(param_2,param_3), iVar3 == 0)))) {
      return 0;
    }
    uVar13 = 0;
    iVar15 = 0;
    uVar2 = 0;
    iVar3 = 0;
    puVar1 = (undefined4 *)0x0;
    iVar4 = 0;
  }
  else {
    iStack_74 = 0;
    uStack_6e = 0;
    iVar15 = FUN_ram_4206826c(&iStack_74,param_3);
    iVar3 = iStack_74;
    uVar2 = (uint)uStack_6e;
    if (iVar15 == 0) {
      iStack_6c = 0;
      uStack_66 = 0;
      iVar4 = FUN_ram_4206826c(&iStack_6c,param_4);
      uVar13 = uStack_66;
      iVar15 = iStack_6c;
      if (iVar4 == 0) {
        uStack_68 = 1;
        uStack_70 = 1;
        aiStack_64[0] = 0;
        iVar4 = FUN_ram_420680a2(aiStack_64,*(ushort *)(param_3 + 6) + 2);
        if ((iVar4 == 0) &&
           (iVar5 = FUN_ram_42068310(aiStack_64,0), iVar4 = aiStack_64[0], iVar5 == 0)) {
          puStack_5c = (undefined4 *)0x0;
          iVar5 = FUN_ram_420680a2(&puStack_5c,*(ushort *)(param_3 + 6) + 2);
          puVar1 = puStack_5c;
          iVar16 = -0x10;
          if (iVar5 == 0) {
            uVar6 = FUN_ram_420683ba(&iStack_6c);
            if ((uVar6 & 0x1f) == 0x1f) {
              iStack_9c = 0;
              uVar6 = uVar2;
              iStack_6c = iVar15;
              uStack_66 = uVar13;
            }
            else {
              iStack_9c = 0x1f - (uVar6 & 0x1f);
              iVar5 = FUN_ram_42068436(&iStack_74,iStack_9c);
              iVar3 = iStack_74;
              uVar6 = (uint)uStack_6e;
              uVar2 = uVar6;
              if ((iVar5 != 0) ||
                 (iVar5 = FUN_ram_42068436(&iStack_6c,iStack_9c), iVar15 = iStack_6c,
                 uVar13 = uStack_66, iVar5 != 0)) goto LAB_ram_42068be0;
            }
            uVar14 = (uint)uStack_66;
            iVar10 = (uVar6 - uVar14) * 0x20;
            iVar5 = FUN_ram_42068436(&iStack_6c,iVar10);
            uVar13 = uStack_66;
            iVar15 = iStack_6c;
            iVar16 = -0x10;
            uVar2 = uVar6;
            if (iVar5 == 0) {
              piVar18 = (int *)((uVar6 - uVar14) * 4 + iVar4);
              do {
                uStack_6e = (ushort)uVar2;
                iStack_74 = iVar3;
                iStack_6c = iVar15;
                uStack_66 = uVar13;
                iVar5 = FUN_ram_42068514(&iStack_74,&iStack_6c);
                if (iVar5 < 0) {
                  uVar17 = uVar14 - 1;
                  FUN_ram_42068484(&iStack_6c,iVar10);
                  puVar11 = (uint *)(uVar17 * 4 + iVar15);
                  piVar18 = (int *)(((uVar6 + 0x3fffffff) - uVar14) * 4 + iVar4);
                  goto LAB_ram_42068b8a;
                }
                *piVar18 = *piVar18 + 1;
                iVar16 = FUN_ram_420687f0(&iStack_74,&iStack_74,&iStack_6c);
                uVar2 = (uint)uStack_6e;
                iVar3 = iStack_74;
              } while (iVar16 == 0);
            }
          }
          goto LAB_ram_42068be0;
        }
        puVar1 = (undefined4 *)0x0;
        iVar4 = aiStack_64[0];
      }
      else {
        iVar4 = 0;
        puVar1 = (undefined4 *)0x0;
      }
    }
    else {
      iVar4 = 0;
      uVar13 = 0;
      iVar15 = 0;
      puVar1 = (undefined4 *)0x0;
    }
  }
LAB_ram_42068a5e:
  iVar16 = -0x10;
LAB_ram_42068be0:
  uStack_6e = (ushort)uVar2;
  iStack_74 = iVar3;
  FUN_ram_42068078(&iStack_74);
  iStack_6c = iVar15;
  uStack_66 = uVar13;
  FUN_ram_42068078(&iStack_6c);
  aiStack_64[0] = iVar4;
  FUN_ram_42068078(aiStack_64);
  puStack_5c = puVar1;
  FUN_ram_42068078(&puStack_5c);
  FUN_ram_4206d7da(&uStack_4c,0xc);
  return iVar16;
LAB_ram_42068b8a:
  uVar6 = uVar6 - 1;
  if (uVar6 <= uVar17) goto code_r0x42068b8e;
  iVar16 = uVar6 * 4;
  uVar8 = *puVar11;
  uVar7 = *(uint *)(iVar3 + iVar16);
  puVar9 = (undefined4 *)(iVar16 + -4 + iVar3);
  iVar5 = -1;
  if (uVar7 < uVar8) {
    uVar19 = (*(code *)&SUB_ram_400109f0)(*puVar9,uVar7,uVar8,0);
    iVar5 = (int)uVar19;
    if ((int)((ulonglong)uVar19 >> 0x20) != 0) {
      iVar5 = -1;
    }
  }
  *piVar18 = iVar5;
  uStack_4c = 0;
  if (uVar6 != 1) {
    uStack_4c = *(undefined4 *)(iVar16 + iVar3 + -8);
  }
  uStack_48 = *puVar9;
  uStack_44 = *(uint *)(iVar3 + iVar16);
  *piVar18 = *piVar18 + 1;
  do {
    *piVar18 = *piVar18 + -1;
    puStack_5c = puVar1;
    iVar5 = FUN_ram_42068310(&puStack_5c,0);
    puVar1 = puStack_5c;
    if (iVar5 != 0) goto LAB_ram_42068a5e;
    uVar12 = 0;
    if (uVar17 != 0) {
      uVar12 = *(undefined4 *)(uVar14 * 4 + -8 + iVar15);
    }
    *puStack_5c = uVar12;
    puStack_5c[1] = *puVar11;
    iVar5 = FUN_ram_4206893c(&puStack_5c,&puStack_5c,*piVar18);
    puVar1 = puStack_5c;
    if (iVar5 != 0) goto LAB_ram_42068a5e;
    iVar5 = FUN_ram_42068514(&puStack_5c,&puStack_54);
  } while (0 < iVar5);
  iStack_6c = iVar15;
  uStack_66 = uVar13;
  iVar5 = FUN_ram_4206893c(&puStack_5c,&iStack_6c,*piVar18);
  puVar1 = puStack_5c;
  if (iVar5 != 0) goto LAB_ram_42068a5e;
  iVar10 = iVar4 * -8 + (int)piVar18 * 8;
  iVar5 = FUN_ram_42068436(&puStack_5c,iVar10);
  puVar1 = puStack_5c;
  if (iVar5 != 0) goto LAB_ram_42068a5e;
  iStack_74 = iVar3;
  uStack_6e = (ushort)uVar2;
  iVar16 = FUN_ram_420687f0(&iStack_74,&iStack_74,&puStack_5c);
  iVar3 = iStack_74;
  uVar2 = (uint)uStack_6e;
  if (iVar16 != 0) goto LAB_ram_42068be0;
  iVar5 = FUN_ram_420685b4(&iStack_74,0);
  if (iVar5 < 0) {
    iVar5 = FUN_ram_4206826c(&puStack_5c,&iStack_6c);
    puVar1 = puStack_5c;
    if ((iVar5 != 0) ||
       (iVar5 = FUN_ram_42068436(&puStack_5c,iVar10), puVar1 = puStack_5c, iVar5 != 0))
    goto LAB_ram_42068a5e;
    iVar16 = FUN_ram_420687ea(&iStack_74,&iStack_74,&puStack_5c);
    uVar2 = (uint)uStack_6e;
    iVar3 = iStack_74;
    if (iVar16 != 0) goto LAB_ram_42068be0;
    *piVar18 = *piVar18 + -1;
  }
  piVar18 = piVar18 + -1;
  goto LAB_ram_42068b8a;
code_r0x42068b8e:
  if (param_1 != 0) {
    iVar5 = FUN_ram_4206826c(param_1,aiStack_64);
    if (iVar5 != 0) goto LAB_ram_42068a5e;
    *(short *)(param_1 + 4) = *(short *)(param_3 + 4) * *(short *)(param_4 + 4);
  }
  if (param_2 != 0) {
    iStack_74 = iVar3;
    uStack_6e = (ushort)uVar2;
    FUN_ram_42068484(&iStack_74,iStack_9c);
    uStack_70 = *(undefined2 *)(param_3 + 4);
    iVar5 = FUN_ram_4206826c(param_2,&iStack_74);
    if (iVar5 != 0) goto LAB_ram_42068a5e;
    iVar5 = FUN_ram_420685b4(param_2,0);
    if (iVar5 == 0) {
      *(undefined2 *)(param_2 + 4) = 1;
    }
  }
  iVar16 = 0;
  goto LAB_ram_42068be0;
}

