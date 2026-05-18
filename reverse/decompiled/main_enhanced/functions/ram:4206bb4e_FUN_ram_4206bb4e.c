
int FUN_ram_4206bb4e(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_s2;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  
  if ((param_1 == 0) || ((*(uint *)(param_1 + 4) & 0x1f) != 0x10)) {
    iVar4 = -0x14;
  }
  else {
    FUN_ram_4206a9b4();
    iVar4 = FUN_ram_4206a9fa();
    if (((iVar4 == 0) && (iVar4 = FUN_ram_4206aa52(), iVar4 == 0)) &&
       (iVar4 = FUN_ram_4206ab3c(), iVar4 == 0)) {
      *(undefined4 *)(unaff_s2 + 0xcc) = 0;
      *(undefined4 *)(unaff_s2 + 200) = 0;
      *(undefined4 *)(unaff_s2 + 0xd4) = 0;
      *(undefined1 *)(unaff_s2 + 0x189) = 0;
      *(undefined4 *)(unaff_s2 + 0xd0) = 0;
      *(undefined4 *)(unaff_s2 + 0x48) = 0;
      *(undefined4 *)(unaff_s2 + 0x4c) = 0;
      *(undefined4 *)(unaff_s2 + 0x50) = 0;
      *(undefined4 *)(unaff_s2 + 0x54) = 0;
      iVar9 = 3;
      iVar8 = 4;
      do {
        puVar3 = (undefined4 *)(iVar8 * 0x20 + 0x48 + unaff_s2);
        uVar11 = (*(code *)&SUB_ram_400108c8)(puVar3[2],puVar3[3]);
        uVar12 = (*(code *)&SUB_ram_400108c8)((int)(uVar11 >> 1),(int)((uVar11 >> 1) >> 0x20));
        pbVar1 = (byte *)(iVar8 * 0x10 + 0x48 + unaff_s2);
        pbVar1[9] = (byte)((ulonglong)uVar12 >> 8);
        pbVar1[10] = (byte)((ulonglong)uVar12 >> 0x10);
        pbVar1[0xb] = (byte)((ulonglong)uVar12 >> 0x18);
        pbVar1[0xc] = (byte)((ulonglong)uVar12 >> 0x20);
        pbVar1[0xd] = (byte)((ulonglong)uVar12 >> 0x28);
        pbVar1[8] = (byte)uVar12;
        pbVar1[0xe] = (byte)((ulonglong)uVar12 >> 0x30);
        pbVar1[0xf] = (byte)((ulonglong)uVar12 >> 0x38);
        iVar9 = iVar9 + -1;
        iVar8 = iVar8 >> 1;
        pbVar1[8] = *(char *)((int)puVar3 + 7) << 7 | (byte)uVar12;
        uVar11 = (*(code *)&SUB_ram_400108c8)(*puVar3,puVar3[1]);
        uVar12 = (*(code *)&SUB_ram_400108c8)((int)(uVar11 >> 1),(int)((uVar11 >> 1) >> 0x20));
        pbVar1[1] = (byte)((ulonglong)uVar12 >> 8);
        pbVar1[2] = (byte)((ulonglong)uVar12 >> 0x10);
        pbVar1[3] = (byte)((ulonglong)uVar12 >> 0x18);
        pbVar1[4] = (byte)((ulonglong)uVar12 >> 0x20);
        pbVar1[5] = (byte)((ulonglong)uVar12 >> 0x28);
        *pbVar1 = (byte)uVar12;
        pbVar1[6] = (byte)((ulonglong)uVar12 >> 0x30);
        pbVar1[7] = (byte)((ulonglong)uVar12 >> 0x38);
        *pbVar1 = ((*(byte *)((int)puVar3 + 0xf) & 1) - 1 & 0x1f) - 0x1f ^ (byte)uVar12;
      } while (iVar9 != 0);
      iVar9 = 4;
      iVar8 = 8;
      do {
        iVar6 = (iVar8 + 4) * 0x10 + unaff_s2;
        iVar2 = iVar8 * 0x10 + unaff_s2;
        uVar12 = (*(code *)&SUB_ram_400108c8)
                           (*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0xc));
        *(char *)(iVar2 + 0x49) = (char)((ulonglong)uVar12 >> 8);
        *(char *)(iVar2 + 0x4a) = (char)((ulonglong)uVar12 >> 0x10);
        *(char *)(iVar2 + 0x48) = (char)uVar12;
        *(char *)(iVar2 + 0x4c) = (char)((ulonglong)uVar12 >> 0x20);
        *(char *)(iVar2 + 0x4d) = (char)((ulonglong)uVar12 >> 0x28);
        *(char *)(iVar2 + 0x4b) = (char)((ulonglong)uVar12 >> 0x18);
        *(char *)(iVar2 + 0x4f) = (char)((ulonglong)uVar12 >> 0x38);
        *(char *)(iVar2 + 0x4e) = (char)((ulonglong)uVar12 >> 0x30);
        iVar9 = iVar9 + -1;
        uVar12 = (*(code *)&SUB_ram_400108c8)
                           (*(undefined4 *)(iVar2 + 0x50),*(undefined4 *)(iVar2 + 0x54));
        *(char *)(iVar2 + 0x51) = (char)((ulonglong)uVar12 >> 8);
        *(char *)(iVar2 + 0x52) = (char)((ulonglong)uVar12 >> 0x10);
        *(char *)(iVar2 + 0x50) = (char)uVar12;
        *(char *)(iVar2 + 0x54) = (char)((ulonglong)uVar12 >> 0x20);
        *(char *)(iVar2 + 0x55) = (char)((ulonglong)uVar12 >> 0x28);
        *(char *)(iVar2 + 0x53) = (char)((ulonglong)uVar12 >> 0x18);
        *(char *)(iVar2 + 0x56) = (char)((ulonglong)uVar12 >> 0x30);
        *(char *)(iVar2 + 0x57) = (char)((ulonglong)uVar12 >> 0x38);
        iVar8 = iVar8 >> 1;
      } while (iVar9 != 0);
      iVar8 = 3;
      iVar9 = 2;
      do {
        iVar6 = unaff_s2 + 0x58;
        for (iVar2 = 1; iVar2 < iVar9; iVar2 = iVar2 + 1) {
          iVar7 = 0;
          do {
            iVar5 = iVar9 * 0x10 + 0x48 + iVar7;
            pbVar10 = (byte *)(iVar6 + iVar7);
            pbVar1 = (byte *)(iVar9 * 0x10 + iVar6 + iVar7);
            iVar7 = iVar7 + 1;
            *pbVar1 = *(byte *)(iVar5 + unaff_s2) ^ *pbVar10;
          } while (iVar7 != 0x10);
          iVar6 = iVar6 + 0x10;
        }
        iVar8 = iVar8 + -1;
        iVar9 = iVar9 << 1;
      } while (iVar8 != 0);
    }
  }
  return iVar4;
}

