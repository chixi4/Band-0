
undefined4 FUN_ram_4204589c(int param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte bVar11;
  byte *pbVar12;
  byte *pbVar13;
  
  iVar9 = *param_2;
  pcVar3 = (char *)(param_2[2] + iVar9);
  pbVar2 = (byte *)(param_2[2] + 1 + iVar9);
  if (*pcVar3 == '\"') {
    iVar8 = 0;
    for (pbVar12 = pbVar2; (uint)((int)pbVar12 - iVar9) < (uint)param_2[1]; pbVar12 = pbVar12 + 1) {
      if (*pbVar12 == 0x22) {
        pbVar4 = (byte *)(*(code *)param_2[4])(pbVar12 + (-iVar8 - (int)pcVar3) + 1);
        pbVar13 = pbVar4;
        if (pbVar4 != (byte *)0x0) goto LAB_ram_42045918;
        break;
      }
      if (*pbVar12 == 0x5c) {
        pbVar12 = pbVar12 + 1;
        if ((uint)param_2[1] <= (uint)((int)pbVar12 - iVar9)) break;
        iVar8 = iVar8 + 1;
      }
    }
  }
  if (pbVar2 != (byte *)0x0) {
LAB_ram_420459b2:
    param_2[2] = (int)pbVar2 - *param_2;
  }
  return 0;
LAB_ram_42045918:
  if (pbVar12 <= pbVar2) {
    *pbVar13 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0x10;
    iVar9 = *param_2;
    *(byte **)(param_1 + 0x10) = pbVar4;
    param_2[2] = (int)(pbVar12 + (1 - iVar9));
    return 1;
  }
  bVar11 = *pbVar2;
  if (bVar11 == 0x5c) {
    bVar11 = pbVar2[1];
    if (bVar11 == 0x6e) {
      bVar11 = 10;
LAB_ram_420459ec:
      pbVar10 = pbVar13 + 1;
      iVar9 = 2;
    }
    else {
      if (bVar11 < 0x6f) {
        if (bVar11 != 0x62) {
          if (bVar11 < 99) {
            if (((bVar11 == 0x2f) || (bVar11 == 0x5c)) || (bVar11 == 0x22)) goto LAB_ram_420459ec;
          }
          else if (bVar11 == 0x66) {
            bVar11 = 0xc;
            goto LAB_ram_420459ec;
          }
          goto LAB_ram_420459aa;
        }
        bVar11 = 8;
        goto LAB_ram_420459ec;
      }
      if (bVar11 == 0x74) {
        bVar11 = 9;
        goto LAB_ram_420459ec;
      }
      if (bVar11 != 0x75) {
        if (bVar11 == 0x72) {
          bVar11 = 0xd;
          goto LAB_ram_420459ec;
        }
LAB_ram_420459aa:
        (*(code *)param_2[5])(pbVar4);
        goto LAB_ram_420459b2;
      }
      if (((int)pbVar12 - (int)pbVar2 < 6) ||
         (uVar5 = FUN_ram_42045840(pbVar2 + 2), uVar5 - 0xdc00 < 0x400)) goto LAB_ram_420459aa;
      if (uVar5 - 0xd800 < 0x400) {
        if ((((int)pbVar12 - (int)(pbVar2 + 6) < 6) || (pbVar2[6] != 0x5c)) ||
           ((pbVar2[7] != 0x75 || (uVar6 = FUN_ram_42045840(pbVar2 + 8), 0x3ff < uVar6 - 0xdc00))))
        goto LAB_ram_420459aa;
        uVar5 = ((uVar5 & 0x3ff) << 10 | uVar6 & 0x3ff) + 0x10000;
        iVar9 = 0xc;
LAB_ram_42045a8c:
        bVar7 = 0xf0;
        iVar8 = 4;
      }
      else if (uVar5 < 0x80) {
        iVar9 = 6;
        bVar7 = 0;
        iVar8 = 1;
      }
      else if (uVar5 < 0x800) {
        iVar9 = 6;
        bVar7 = 0xc0;
        iVar8 = 2;
      }
      else {
        if (0xffff < uVar5) {
          if (0x10ffff < uVar5) goto LAB_ram_420459aa;
          iVar9 = 6;
          goto LAB_ram_42045a8c;
        }
        iVar9 = 6;
        bVar7 = 0xe0;
        iVar8 = 3;
      }
      for (pbVar10 = pbVar13 + (iVar8 - 1U & 0xff); bVar1 = (byte)uVar5, pbVar13 != pbVar10;
          pbVar10 = pbVar10 + -1) {
        *pbVar10 = bVar1 & 0x3f | 0x80;
        uVar5 = uVar5 >> 6;
      }
      bVar11 = bVar1 & 0x7f;
      if (iVar8 != 1) {
        bVar11 = bVar1 | bVar7;
      }
      pbVar10 = pbVar13 + iVar8;
    }
    pbVar2 = pbVar2 + iVar9;
  }
  else {
    pbVar2 = pbVar2 + 1;
    pbVar10 = pbVar13 + 1;
  }
  *pbVar13 = bVar11;
  pbVar13 = pbVar10;
  goto LAB_ram_42045918;
}

