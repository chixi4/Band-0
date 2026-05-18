
undefined4 FUN_ram_40399a1c(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  char cVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  uint auStack_54 [2];
  uint uStack_18;
  uint uStack_14;
  
  iVar6 = *(int *)(param_1 + 4);
  uVar7 = param_5 & 0xffff;
  if ((int)param_5 < 0) {
    *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 8;
    *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 0x40000;
    *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 0x80000;
  }
  if (param_2 < 0x100) {
    *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 0x10) | 0x80000000;
    uVar4 = param_2 & 0xffff | 0x70000000;
  }
  else {
    *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 0x10) | 0x80000000;
    uVar4 = param_2 & 0xff | 0xf0000000;
  }
  *(uint *)(iVar6 + 0x18) = uVar4;
  *(uint *)(iVar6 + 0x14) = *(uint *)(iVar6 + 0x14) & 0x7ffffff | (param_3 + -1) * 0x8000000;
  *(uint *)(iVar6 + 0x10) = (uint)(param_3 != 0) << 0x1e | *(uint *)(iVar6 + 0x10) & 0xbfffffff;
  param_4 = param_4 + (uint)*(byte *)(param_1 + 0xc);
  *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 0x10) & 0xdfffffff | (uint)(param_4 != 0) << 0x1d;
  if (param_4 != 0) {
    *(uint *)(iVar6 + 0x14) = param_4 - 1U & 0xff | *(uint *)(iVar6 + 0x14) & 0xffffff00;
  }
  *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 0x10) & 0xefffffff;
  *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 0x10) & 0xf7ffffff;
  uStack_18 = *(uint *)(iVar6 + 8) & 0xffff3c9f;
  uStack_14 = *(uint *)(iVar6 + 0x10) & 0xffffcfff;
  if (uVar7 == 3) {
    uStack_18 = uStack_18 | 0x4020;
LAB_ram_40399bba:
    uVar7 = 0x1000;
  }
  else {
    if ((param_5 & 0xffff) >> 2 == 0) {
      if (uVar7 != 2) goto LAB_ram_40399b38;
      uStack_18 = uStack_18 | 0x4000;
      goto LAB_ram_40399bba;
    }
    if (uVar7 == 4) {
      uStack_18 = uStack_18 | 0x8000;
    }
    else {
      if (uVar7 != 5) {
        uVar11 = FUN_ram_4039bf1e();
        iVar6 = (int)((ulonglong)uVar11 >> 0x20);
        piVar3 = (int *)uVar11;
        puVar2 = (uint *)piVar3[1];
        cVar1 = *(char *)(iVar6 + 0x16);
        if ((*(uint *)(iVar6 + 0x10) & 2) == 0) {
          iVar5 = piVar3[5];
        }
        else {
          iVar5 = *(int *)(iVar6 + 0x18);
        }
        (**(code **)(*piVar3 + 0x3c))
                  (piVar3,*(undefined2 *)(iVar6 + 0x14),*(undefined1 *)(iVar6 + 3),cVar1,iVar5,
                   *(code **)(*piVar3 + 0x3c));
        uVar7 = (uint)*(byte *)(iVar6 + 3);
        uVar4 = 0;
        if (uVar7 != 0x20) {
          uVar4 = 0xffffffff >> (uVar7 & 0x1f);
        }
        puVar2[1] = *(int *)(iVar6 + 4) << (0x20 - uVar7 & 0x1f) | uVar4;
        uVar7 = (uint)*(byte *)(iVar6 + 2);
        if ((uVar7 == 0) &&
           (puVar2[4] = puVar2[4] & 0xdfffffff | (uint)(cVar1 != '\0') << 0x1d, cVar1 != '\0')) {
          puVar2[5] = puVar2[5] & 0xffffff00 | (uint)(byte)(cVar1 - 1);
        }
        uVar4 = (uint)*(byte *)(iVar6 + 1);
        puVar2[4] = puVar2[4] & 0xf7ffffff | (uint)(uVar4 != 0) << 0x1b;
        if (uVar4 != 0) {
          puVar2[7] = uVar4 * 8 - 1 & 0x3ffff | puVar2[7] & 0xfffc0000;
        }
        iVar10 = *(int *)(iVar6 + 8);
        uVar9 = uVar4 + 3;
        for (iVar5 = 0; iVar5 < (int)(uVar9 >> 2); iVar5 = iVar5 + 1) {
          auStack_54[0] = 0;
          uVar8 = uVar4;
          if (4 < uVar4) {
            uVar8 = 4;
          }
          FUN_ram_4039c11e(auStack_54,iVar10,uVar8);
          puVar2[iVar5 + 0x26] = auStack_54[0];
          uVar4 = uVar4 - uVar8;
          iVar10 = iVar10 + uVar8;
        }
        puVar2[4] = puVar2[4] & 0xefffffff | (uint)(uVar7 != 0) << 0x1c;
        if (uVar7 != 0) {
          puVar2[7] = puVar2[7] & 0xfffc0000 | uVar7 * 8 - 1 & 0x3ffff;
        }
        puVar2[2] = puVar2[2] | 0x100000;
        *puVar2 = *puVar2 | 0x800000;
        do {
        } while ((int)(*puVar2 << 8) < 0);
        *puVar2 = *puVar2 | 0x1000000;
        (**(code **)(*piVar3 + 0x40))(piVar3);
        if (*(char *)(iVar6 + 2) != '\0') {
          FUN_ram_403998bc(puVar2,*(undefined4 *)(iVar6 + 0xc));
        }
        return 0;
      }
      uStack_18 = uStack_18 | 0x8040;
    }
    uVar7 = 0x2000;
  }
  uStack_14 = uStack_14 | uVar7;
LAB_ram_40399b38:
  *(uint *)(iVar6 + 8) = uStack_18;
  *(uint *)(iVar6 + 0x10) = uStack_14;
  return 0;
}

