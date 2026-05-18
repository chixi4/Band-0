
undefined4 FUN_ram_42044294(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  if (0x1f < (uint)*(ushort *)(param_1 + 0x16) + (uint)*(ushort *)(param_1 + 0x14)) {
    iVar9 = *(int *)(*(int *)(param_1 + 4) + 4);
    if ((*(byte *)(iVar9 + 0x1b) & 0x20) == 0) {
      uVar1 = *(undefined1 *)(iVar9 + 0xf);
      uVar2 = *(undefined1 *)(iVar9 + 0xd);
      uVar3 = *(undefined1 *)(iVar9 + 0xc);
      uVar4 = *(undefined1 *)(iVar9 + 0xb);
      uVar5 = *(undefined1 *)(iVar9 + 10);
      uVar6 = *(undefined1 *)(iVar9 + 0xe);
      uVar13 = 0x3c07db50;
    }
    else {
      if ((*(byte *)(iVar9 + 0x1b) & 0x1f) == 0 && *(char *)(iVar9 + 0x1a) == '\0') {
        iVar10 = (*(code *)&SUB_ram_40012008)(iVar9);
        uVar14 = (uint)*(byte *)(iVar9 + 0x19) << 8 | (uint)*(byte *)(iVar9 + 0x1c) << 0x10 |
                 (uint)*(byte *)(iVar9 + 0x18) | (uint)*(byte *)(iVar9 + 0x1d) << 0x18;
        uVar12 = (uint)*(ushort *)(iVar9 + 0x1e);
        iVar10 = iVar10 * 8 + param_2;
        uVar11 = *(uint *)(iVar10 + 8);
        uVar8 = *(uint *)(iVar10 + 0xc);
        if (((uVar11 != 0xffffffff) || (uVar8 != 0xffffffff)) &&
           (((uVar11 == uVar14 && (uVar8 == uVar12)) ||
            (((uVar12 - uVar8) - (uint)(uVar14 < uVar14 - uVar11) & 0x8000) != 0)))) {
          FUN_ram_42033fd8(1,0x20,1,0x3c07dbf8,*(undefined1 *)(iVar9 + 4),*(undefined1 *)(iVar9 + 5)
                           ,*(undefined1 *)(iVar9 + 6),*(undefined1 *)(iVar9 + 7),
                           *(undefined1 *)(iVar9 + 8),*(undefined1 *)(iVar9 + 9),
                           *(undefined1 *)(iVar9 + 10),*(undefined1 *)(iVar9 + 0xb),
                           *(undefined1 *)(iVar9 + 0xc),*(undefined1 *)(iVar9 + 0xd),
                           *(undefined1 *)(iVar9 + 0xe),*(undefined1 *)(iVar9 + 0xf),uVar14,uVar12,
                           uVar11,uVar8,*(undefined2 *)(iVar9 + 0x16));
          return 0xffffffff;
        }
        iVar15 = *(int *)(*(int *)(param_2 + 0xa0) + 4);
        uVar13 = *(undefined4 *)(*(int *)(param_2 + 0xa0) + 8);
        sVar7 = *(short *)(param_1 + 0x16);
        *(int *)(*(int *)(param_1 + 4) + 4) = iVar9 + iVar15 + 0x18;
        *(short *)(param_1 + 0x16) = sVar7 - ((short)uVar13 + (short)iVar15);
        *(uint *)(iVar10 + 8) = uVar14;
        *(uint *)(iVar10 + 0xc) = uVar12;
        return 0;
      }
      uVar1 = *(undefined1 *)(iVar9 + 0xf);
      uVar2 = *(undefined1 *)(iVar9 + 0xd);
      uVar3 = *(undefined1 *)(iVar9 + 0xc);
      uVar4 = *(undefined1 *)(iVar9 + 0xb);
      uVar5 = *(undefined1 *)(iVar9 + 10);
      uVar6 = *(undefined1 *)(iVar9 + 0xe);
      uVar13 = 0x3c07dba8;
    }
    FUN_ram_42033fd8(1,0x20,1,uVar13,uVar5,uVar4,uVar3,uVar2,uVar6,uVar1);
    return 0xffffffff;
  }
  return 0x104;
}

