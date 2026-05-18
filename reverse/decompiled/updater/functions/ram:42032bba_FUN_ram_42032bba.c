
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42032bba(int *param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  byte bVar8;
  short sVar9;
  uint *puVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iStack_38;
  short *psStack_34;
  
  iVar14 = *param_1;
  iStack_38 = -1;
  iVar12 = (int)param_2 >> 0x10;
  uVar13 = param_2 & 0xffff;
  if (*(int *)(iVar14 + 0x120) == 0) {
    iVar4 = FUN_ram_42040e12();
    if ((iVar4 == 0) || (DAT_ram_3fcb512c != '\x06')) {
      if ((*(int *)(iVar14 + 0x120) != 0) || (DAT_ram_3fcb512c != '\b')) goto LAB_ram_42032cba;
      if (_DAT_ram_3fcb51b4 == (ushort *)0x0) goto LAB_ram_42032cf8;
      DAT_ram_3fcb51a8 = 1;
      iVar4 = *_DAT_ram_3fcb51b4 + 6;
      sVar11 = 1;
LAB_ram_42032cb2:
      bVar2 = false;
    }
    else {
      if (iVar12 == 0) {
        iVar5 = (**(code **)(_DAT_ram_3fcb50e8 + 0x48))
                          (param_1 + 1,uVar13,&iStack_38,6,6,*(code **)(_DAT_ram_3fcb50e8 + 0x48));
        if (iVar5 != 0) {
          iVar4 = iStack_38 + 6;
          sVar11 = 0;
          bVar1 = false;
          bVar3 = false;
          uVar7 = 0x18;
          bVar2 = true;
          goto LAB_ram_42032c62;
        }
        if (iStack_38 == -1) {
          FUN_ram_42040fac(&DAT_ram_3fcb4f74,0,0x100);
          return 0;
        }
        goto LAB_ram_42032cf8;
      }
      iVar4 = 6;
      sVar11 = 0;
      bVar2 = true;
    }
    bVar1 = false;
  }
  else {
LAB_ram_42032cba:
    if (uVar13 - 2 < 2) {
      if (*(int *)(iVar14 + 0xb0) != 0) {
        if (iVar12 == 0) {
          iVar4 = 0x88;
          uVar7 = 0x1c;
        }
        else {
          iVar4 = 6;
          uVar7 = 0x18;
        }
        sVar11 = 0;
        bVar2 = false;
        iVar5 = 0;
        bVar1 = true;
        bVar3 = true;
        goto LAB_ram_42032c62;
      }
      if (uVar13 != 3) {
LAB_ram_42032cf8:
        iVar4 = 6;
        sVar11 = 0;
        goto LAB_ram_42032cb2;
      }
    }
    else if (uVar13 < 3) {
      if ((uVar13 != 1) || (DAT_ram_3fcb512c != '\x02')) goto LAB_ram_42032cf8;
      bVar1 = true;
      iVar4 = 6;
      sVar11 = 0;
      bVar2 = false;
      goto LAB_ram_42032cb6;
    }
    iVar4 = 6;
    sVar11 = 0;
    bVar2 = false;
    bVar1 = true;
  }
LAB_ram_42032cb6:
  iVar5 = 0;
  uVar7 = 0x18;
  bVar3 = false;
LAB_ram_42032c62:
  iVar4 = FUN_ram_42033f1c(&psStack_34,uVar7,iVar4);
  if (iVar4 == 0) {
    FUN_ram_42033fd8(1,0x40,2,0x3c07f5fc);
  }
  else {
    *(undefined2 *)(iVar4 + 0x14) = 0x18;
    sVar9 = 1;
    if ((!bVar1) && (sVar9 = 3, !bVar2)) {
      sVar9 = sVar11 << 1;
    }
    *(short *)((int)param_1 + 0x3b2) = sVar9;
    *psStack_34 = sVar9;
    psStack_34[1] = (short)param_2;
    if (((bVar2) && (DAT_ram_3fcb51c0 != '\0')) && (uVar13 == 1)) {
      sVar9 = (DAT_ram_3fcb51c1 != '\0') + 0x7e;
    }
    else {
      sVar9 = (short)(param_2 >> 0x10);
    }
    psStack_34[2] = sVar9;
    if ((bVar3) && (iVar12 == 0)) {
      uVar7 = *(undefined4 *)(iVar14 + 0xb0);
      psStack_34[3] = -0x7ff0;
      FUN_ram_40399daa(psStack_34 + 4,uVar7,0x80);
      *(undefined2 *)(iVar4 + 0x16) = 0x88;
      *(int *)(*(int *)(iVar4 + 4) + 4) = *(int *)(*(int *)(iVar4 + 4) + 4) + 0x1c;
      pbVar6 = (byte *)(*(code *)&SUB_ram_40011ff4)(param_1,iVar4);
      *(int *)(*(int *)(iVar4 + 4) + 4) = *(int *)(*(int *)(iVar4 + 4) + 4) + -0x18;
      iVar12 = _DAT_ram_3fcb4f88;
      puVar10 = *(uint **)(iVar4 + 0x24);
      if (pbVar6 == (byte *)0x0) {
        uVar13 = puVar10[4] & 0xfffff0ff;
      }
      else {
        *puVar10 = *puVar10 | 1;
        bVar8 = *pbVar6;
        if (iVar12 == iVar14) {
          bVar8 = bVar8 | 0x40;
        }
        *(byte *)(puVar10 + 4) = bVar8;
        uVar13 = puVar10[4] & 0xfffff0ff | (**(uint **)(pbVar6 + 0xa0) & 0xf) << 8;
      }
      puVar10[4] = uVar13;
    }
    else {
      *(undefined2 *)(iVar4 + 0x16) = 6;
    }
    iVar12 = iStack_38;
    if ((bVar2) && (iVar5 != 0)) {
      FUN_ram_40399daa(psStack_34 + 3,iVar5,iStack_38);
      *(short *)(iVar4 + 0x16) = *(short *)(iVar4 + 0x16) + (short)iVar12;
    }
    if (sVar11 != 0) {
      FUN_ram_40399daa(psStack_34 + 3,_DAT_ram_3fcb51b4 + 1,*_DAT_ram_3fcb51b4);
      *(ushort *)(iVar4 + 0x16) = *_DAT_ram_3fcb51b4 + *(short *)(iVar4 + 0x16);
    }
  }
  return iVar4;
}

