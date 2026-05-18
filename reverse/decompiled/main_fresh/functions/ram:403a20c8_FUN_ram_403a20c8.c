
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_403a20c8(undefined4 param_1,byte *param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 auStack_58 [4];
  byte bStack_54;
  undefined1 uStack_53;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  
  puVar4 = *(uint **)(_DAT_ram_3fcdff64 + 0x14);
  bVar1 = *(char *)((int)puVar4 + 0xb) == '\x02';
  if (bVar1) {
    uVar9 = (*puVar4 >> 0xe & 1) << 0xd;
    *puVar4 = *puVar4 & 0xffffdfff | uVar9;
  }
  else {
    uVar9 = (*puVar4 >> 0xf & 1) << 0xd;
    *puVar4 = *puVar4 & 0xffffdfff | uVar9;
  }
  uVar12 = (uint)param_2[1];
  bVar8 = *param_2;
  iVar5 = (**(code **)(_DAT_ram_3fcdfed0 + 0x1d4))
                    (puVar4,param_3,bVar8,uVar12,uVar9,*(code **)(_DAT_ram_3fcdfed0 + 0x1d4));
  uVar2 = *(ushort *)(param_3 + 8);
  uVar11 = (uint)uVar2;
  uVar9 = (uint)(ushort)puVar4[2] << 0x10 | (uint)*(byte *)((int)puVar4 + 0xb) << 8;
  (**(code **)(_DAT_ram_3fcdfecc + 0xa04))
            (0x7011,(uint)bVar8 << 0x18 | uVar12 << 0x10 | (uint)*(ushort *)((int)puVar4 + 0x42),
             uVar11,uVar11 & 3 | uVar9,uVar9,0x7000,*(code **)(_DAT_ram_3fcdfecc + 0xa04));
  bVar8 = *(byte *)(param_3 + 5);
  iVar10 = *(int *)(param_3 + 0x20);
  uVar13 = *(undefined4 *)(param_3 + 0x1c);
  iVar6 = (**(code **)(_DAT_ram_3fcdfecc + 0xd0))(uVar12,bVar8);
  iVar3 = _DAT_ram_3fcdfed0;
  iVar7 = _DAT_ram_3fcdfecc;
  if ((*(ushort *)(param_3 + 6) & 0x80) == 0) {
    uVar9 = puVar4[0x11];
    *(char *)(puVar4 + 0x11) = (char)uVar9 + '\x01';
    (**(code **)(iVar7 + 0xa00))
              (0x7012,CONCAT13(bVar8,CONCAT12(*(undefined1 *)((int)puVar4 + 0xb),(short)puVar4[2])),
               (char)uVar9 + '\x01',(uint)bVar8 << 0x18,*(code **)(iVar7 + 0xa00));
    if (1 < (byte)puVar4[0x11]) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x110))
                (0x84d,"      ",
                 (uint)(byte)puVar4[0x11] |
                 (uint)*(byte *)((int)puVar4 + 0xb) << 8 | (uint)(ushort)puVar4[2] << 0x10,uVar11);
      bVar8 = (byte)(uVar2 >> 2);
      goto joined_r0x403a23fe;
    }
    uVar9 = (**(code **)(_DAT_ram_3fcdfed0 + 500))(puVar4,0);
    bVar8 = (byte)(uVar2 >> 2) & 1;
    if ((bVar1) || (iVar5 != 0)) {
      *(byte *)((int)puVar4 + 0x43) = (byte)(uVar2 >> 3) & 1;
      *(byte *)((int)puVar4 + 0x42) = bVar8;
      if (uVar9 == 0) goto LAB_ram_403a22c6;
      goto LAB_ram_403a2220;
    }
    *(byte *)((int)puVar4 + 0x42) = bVar8;
    if (uVar9 != 0) {
      iVar7 = -1;
      goto LAB_ram_403a2382;
    }
LAB_ram_403a22c6:
    iVar7 = (**(code **)(_DAT_ram_3fcdfed0 + 0x214))(puVar4,uVar13,iVar10 + iVar6);
    if (iVar7 == 0) {
      uVar9 = 0;
      goto LAB_ram_403a2220;
    }
    if (_DAT_ram_3fcdfe70 != 0) {
      (**(code **)(_DAT_ram_3fcdfed0 + 0x264))(puVar4,bVar1);
    }
    (*(code *)&SUB_ram_40010488)(auStack_58,0,0x18);
    uStack_53 = (undefined1)puVar4[0x11];
    bStack_54 = bStack_54 & 0xf4 | *(byte *)((int)puVar4 + 0x42) & 1 |
                (*(byte *)((int)puVar4 + 0x43) & 1) << 1 | (byte)(*puVar4 >> 0xc) & 8;
    if (puVar4[0x32] != 0) {
      iStack_4c = puVar4[0x32] + 8;
    }
    if (bVar1) {
      (**(code **)(_DAT_ram_3fcdfed0 + 0x20c))(puVar4,auStack_58);
      auStack_58[0] = 2;
      bStack_54 = bStack_54 & 0xfb | (byte)(*puVar4 >> 0xc) & 4;
      uStack_50 = 0;
      if (puVar4[0x33] != 0) {
        iStack_48 = puVar4[0x33] + 8;
      }
    }
    else {
      auStack_58[0] = 1;
    }
    uVar11 = 0;
    uVar9 = 0;
    iVar7 = (**(code **)(_DAT_ram_3fcdfed0 + 0x4a8))(auStack_58);
    if (iVar5 == 0) goto LAB_ram_403a2382;
LAB_ram_403a2224:
    (**(code **)(_DAT_ram_3fcdfed0 + 0x438))(param_2,iVar5);
    (**(code **)(_DAT_ram_3fcdfed0 + 0x2d8))(iVar5);
    uVar9 = uVar11;
  }
  else {
    *(undefined1 *)(puVar4 + 0x11) = 0;
    iVar7 = (**(code **)(iVar3 + 0x268))(puVar4,param_2,iVar5,uVar11,*(code **)(iVar3 + 0x268));
    if (iVar7 == 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x7013,(uint)CONCAT21((short)puVar4[2],bVar1));
      if ((bVar1) || (iVar5 != 0)) {
        *(byte *)((int)puVar4 + 0x43) = (byte)(uVar2 >> 3) & 1;
      }
      *(byte *)((int)puVar4 + 0x42) = (byte)(uVar2 >> 2) & 1;
      goto LAB_ram_403a22c6;
    }
    bVar8 = (byte)(uVar2 >> 2);
joined_r0x403a23fe:
    if ((bVar1) || (iVar5 != 0)) {
      *(byte *)((int)puVar4 + 0x43) = (byte)(uVar2 >> 3) & 1;
      *(byte *)((int)puVar4 + 0x42) = bVar8 & 1;
      uVar9 = 1;
LAB_ram_403a2220:
      iVar7 = -1;
      uVar11 = uVar9;
      if (iVar5 != 0) goto LAB_ram_403a2224;
    }
    else {
      *(byte *)((int)puVar4 + 0x42) = bVar8 & 1;
      uVar9 = 1;
      iVar7 = -1;
    }
LAB_ram_403a2382:
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))
              (0x7014,(uint)(ushort)puVar4[2] << 0x10 | (uint)*(byte *)((int)puVar4 + 0xb) << 8 |
                      uVar9);
    (**(code **)(_DAT_ram_3fcdfec4 + 0x38))
              (_DAT_ram_3fcdff64 + 0x48,(int)(uint)*(ushort *)(param_3 + 6) >> 7 & 1);
    (**(code **)(_DAT_ram_3fcdfec4 + 0x14))
              (*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,_DAT_ram_3fcdff64 + 0x48);
  }
  if ((iVar7 != 0) || (uVar9 != 0)) {
    (**(code **)(_DAT_ram_3fcdfecc + 0xa00))
              (0x702e,(uint)(ushort)puVar4[2] << 0x10 | (uint)*(byte *)((int)puVar4 + 0xb) << 8 |
                      uVar9,iVar7,0x1000,*(code **)(_DAT_ram_3fcdfecc + 0xa00));
    (**(code **)(_DAT_ram_3fcdfed0 + 0x1e8))(puVar4);
  }
  return iVar7;
}

