
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420497a4(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uStack_48;
  int aiStack_44 [4];
  
  uVar6 = *param_1;
  uVar7 = param_1[0x37];
  puVar14 = param_1 + 0x27;
  puVar1 = param_1 + 7;
  uVar8 = uVar7 + uVar6;
  for (iVar11 = 0; iVar11 < (int)(uint)*(byte *)((int)param_1 + 5); iVar11 = iVar11 + 1) {
    iVar3 = FUN_ram_42049738(uVar8,puVar1,8,1);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (param_2 != 0) {
      FUN_ram_42049c6c(param_2,puVar1,8);
    }
    uVar2 = puVar1[1];
    if (((uVar2 & 3) != 0) || (0xffffff < uVar2)) goto LAB_ram_42049824;
    uVar13 = *puVar1;
    uVar12 = uVar8 + 8;
    if (iVar11 == 0) {
      if ((*param_1 == 0) || (*param_1 == _DAT_ram_3fcc51e4)) {
        param_1[0x41] = 0x8000;
      }
      else {
        uStack_48 = 0;
        aiStack_44[0] = 0;
        iVar3 = FUN_ram_42049738(uVar12,aiStack_44,4,1);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_ram_42049738(uVar8 + 0xbc,&uStack_48,4,1);
        if (iVar3 != 0) {
          return iVar3;
        }
        if (aiStack_44[0] != -0x5432abce) {
          return -1;
        }
        uVar8 = 0x8000;
        if ((uStack_48 & 0xff) != 0) {
          uVar8 = 1 << (uStack_48 & 0x1f);
        }
        param_1[0x41] = uVar8;
      }
    }
    if ((uVar13 + 0xbe000000 < 0x400000 || uVar13 + 0xc4000000 < 0x400000) &&
       (uVar12 % param_1[0x41] != uVar13 % param_1[0x41])) goto LAB_ram_42049824;
    uVar13 = FUN_ram_420496d2();
    uVar8 = uVar12;
    for (; uVar2 != 0; uVar2 = uVar2 - uVar9) {
      uVar9 = (uint)((uVar8 & 0x7fff) != 0);
      if (uVar13 <= uVar9) {
        return 0x101;
      }
      uVar9 = uVar13 - uVar9;
      uVar10 = 0xffffffff;
      if ((int)((ulonglong)uVar9 * 0x8000 >> 0x20) == 0) {
        uVar10 = uVar9 * 0x8000;
      }
      uVar9 = uVar2;
      if (uVar10 < uVar2) {
        uVar9 = uVar10;
      }
      if (param_3 != (uint *)0x0) {
        iVar3 = FUN_ram_420496d8(uVar8,uVar9);
        if (iVar3 == 0) {
          return -1;
        }
        if ((((iVar11 == 0) && (*param_1 != 0)) && (*param_1 != _DAT_ram_3fcc51e4)) &&
           (iVar4 = FUN_ram_420495d8(*(undefined2 *)(iVar3 + 0xb0),*(undefined2 *)(iVar3 + 0xb2)),
           iVar4 != 0)) {
          FUN_ram_42049716(iVar3);
          return iVar4;
        }
        for (uVar10 = 0; uVar10 < uVar9; uVar10 = uVar10 + 4) {
          *param_3 = *param_3 ^ *(uint *)(iVar3 + uVar10);
          if ((param_2 != 0) && ((uVar10 & 0x3ff) == 0)) {
            uVar5 = uVar9 - uVar10;
            if (0x400 < uVar5) {
              uVar5 = 0x400;
            }
            FUN_ram_42049c6c(param_2,(uint *)(iVar3 + uVar10),uVar5);
          }
        }
        FUN_ram_42049716(iVar3);
      }
      uVar8 = uVar8 + uVar9;
    }
    *puVar14 = uVar12;
    puVar14 = puVar14 + 1;
    uVar8 = puVar1[1] + uVar12;
    puVar1 = puVar1 + 2;
  }
  if (uVar8 < *param_1) {
LAB_ram_42049824:
    iVar11 = 0x2002;
  }
  else {
    param_1[0x37] = (param_1[0x37] - (uVar7 + uVar6)) + uVar8;
    iVar11 = 0;
  }
  return iVar11;
}

