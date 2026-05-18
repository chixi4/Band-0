
undefined1 * FUN_ram_4207b8c4(undefined1 *param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  
  if ((param_2 != (int *)0x0) && (iVar2 = *param_2, iVar2 != 0)) {
    uVar6 = *(uint *)(iVar2 + 300);
    if ((uVar6 & 0x1000000) == 0) {
      uVar9 = *(ushort *)(iVar2 + 0x134) & 0xfffd;
    }
    else {
      uVar9 = *(ushort *)(iVar2 + 0x134) | 2;
    }
    if (*(int *)(iVar2 + 0x120) == 0) {
      bVar11 = *(byte *)((int)param_2 + 0x15e);
      uVar8 = *(ushort *)(iVar2 + 0x130);
      uVar5 = bVar11 & 3;
      uVar3 = uVar8 & 3;
      bVar12 = (byte)uVar5;
      if (uVar3 < uVar5) {
        bVar12 = (byte)uVar3;
      }
      if ((uVar8 >> 2 & 0x1c) < (bVar11 >> 2 & 0x1c)) {
        uVar3 = (int)(uint)bVar11 >> 2 & 7;
      }
      else {
        uVar3 = (int)(uint)uVar8 >> 2 & 7;
      }
    }
    else {
      uVar3 = 0;
      bVar12 = 0;
    }
    uVar8 = uVar9 | 0x20;
    if ((uVar6 & 0x4000000) == 0) {
      uVar8 = uVar9 & 0xffdf;
    }
    if (((uVar6 & 0x8000000) == 0) || (uVar9 = uVar8 | 0x40, (uVar8 & 2) == 0)) {
      uVar9 = uVar8 & 0xffbf;
    }
    *param_1 = (char)uVar9;
    param_1[1] = (char)(uVar9 >> 8);
    param_1[2] = (byte)(uVar3 << 2) | bVar12;
    iVar4 = (*(code *)&SUB_ram_40010488)(param_1 + 3,0,0x17);
    iVar10 = *param_2;
    for (uVar6 = 0; (int)uVar6 < (int)((uint)*(byte *)(iVar10 + 0x13a) << 3); uVar6 = uVar6 + 1) {
      pbVar7 = (byte *)(((int)uVar6 >> 3) + iVar4);
      *pbVar7 = (byte)(1 << (uVar6 & 7)) | *pbVar7;
    }
    if (((*(uint *)(iVar10 + 300) & 0x1000000) != 0) &&
       ((*(uint *)(iVar10 + 0x134) & 0x400000) != 0)) {
      param_1[7] = param_1[7] | 1;
    }
    if ((*(uint *)(iVar10 + 0x134) & 0x200000) != 0) {
      if (1 < *(byte *)(iVar10 + 0x13a)) {
        param_1[7] = param_1[7] | 0x7e;
      }
      if (2 < *(byte *)(iVar10 + 0x13a)) {
        uVar6 = 0x27;
        do {
          pbVar7 = (byte *)(((int)uVar6 >> 3) + iVar4);
          *pbVar7 = (byte)(1 << (uVar6 & 7)) | *pbVar7;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x35);
      }
      if (3 < *(byte *)(iVar10 + 0x13b)) {
        uVar6 = 0x35;
        do {
          pbVar7 = (byte *)(((int)uVar6 >> 3) + iVar4);
          *pbVar7 = (byte)(1 << (uVar6 & 7)) | *pbVar7;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x4d);
      }
    }
    if (*(char *)(iVar10 + 0x13a) == *(char *)(iVar10 + 0x13b)) {
      bVar12 = 1;
    }
    else {
      bVar11 = (*(char *)(iVar10 + 0x13b) + -1) * '\x04';
      bVar12 = bVar11 | 3;
      if ((*(uint *)(iVar10 + 0x134) & 0x800000) != 0) {
        bVar12 = bVar11 | 0x13;
      }
    }
    param_1[0xf] = bVar12;
    uVar1 = *(undefined2 *)(iVar2 + 0x138);
    param_1[0x13] = (char)uVar1;
    param_1[0x14] = (char)((ushort)uVar1 >> 8);
    return param_1 + 0x1a;
  }
  FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe7e0,&DAT_ram_3c0c426c,0xa42);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

