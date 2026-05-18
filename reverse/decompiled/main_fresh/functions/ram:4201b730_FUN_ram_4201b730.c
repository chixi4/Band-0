
void FUN_ram_4201b730(int param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  byte *pbVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  
  iVar2 = 0;
  pbVar5 = param_2;
  while( true ) {
    uVar7 = (ushort)*pbVar5;
    if (uVar7 == 0) break;
    if ((char)*pbVar5 < '\0') {
      if ((uVar7 & 0xe0) == 0xc0) {
        uVar7 = (uVar7 & 0x1f) << 6 | pbVar5[1] & 0x3f;
        pbVar5 = pbVar5 + 1;
        goto LAB_ram_4201b7e0;
      }
      if ((uVar7 & 0xf0) == 0xe0) {
        uVar7 = uVar7 << 0xc | pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
        pbVar5 = pbVar5 + 2;
        goto LAB_ram_4201b7e0;
      }
    }
    else {
LAB_ram_4201b7e0:
      puVar3 = &DAT_ram_3c0dcc70;
      iVar11 = 0;
      do {
        if (*puVar3 == uVar7) {
          uVar9 = (uint)(byte)(&DAT_ram_3c0dccdc)[iVar11];
          goto LAB_ram_4201b7f8;
        }
        iVar11 = iVar11 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar11 != 0x35);
      uVar9 = 0;
LAB_ram_4201b7f8:
      iVar2 = iVar2 + uVar9;
    }
    pbVar5 = pbVar5 + 1;
  }
  iVar11 = 0;
  do {
    uVar7 = (ushort)*param_2;
    if (uVar7 == 0) {
      return;
    }
    if ((char)*param_2 < '\0') {
      if ((uVar7 & 0xe0) == 0xc0) {
        uVar7 = (uVar7 & 0x1f) << 6 | param_2[1] & 0x3f;
        param_2 = param_2 + 1;
        goto LAB_ram_4201b854;
      }
      if ((uVar7 & 0xf0) == 0xe0) {
        uVar7 = uVar7 << 0xc | param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
        param_2 = param_2 + 2;
        goto LAB_ram_4201b854;
      }
    }
    else {
LAB_ram_4201b854:
      puVar4 = &DAT_ram_3c0dcc70;
      puVar3 = &DAT_ram_3c0dcc70;
      iVar6 = 0;
      do {
        if (*puVar3 == uVar7) {
          pcVar10 = "HwABAJ0f/wEAAU+AAAADGAABX//gAAAPGQACT/gAAB8ZAAJP/AAAPxkAAh/+GQAIL3/wRwEAbwf/AAB/wBkAAF8B/wAA/2UAAW/8f4AA/39+AAFff4AA/nxLAABfD7+AAP59AAKRv4AA/O/////8GQEigH8NAfEHAAADn4AA/N/////+B//////A/////0EADxkABh8BMgAFDxkACx/PfQAAATIADxMBAg8ZAP//////JsEBACAAQIgQICEEQBAcBgRfBcoB//IQYM/5N/GH4BgZAMCAY/hgzDG0YMbAMID7BwUyALGBYzBgzDGywIbAf6AFBRkAuv/jN/v/8bGARPjRMgC6gGMwYMwhs2PscRtkALqhY/Rg3/k8ONggDhkAur/jNmDtoBkQ7/AzSwDYs2MzYM0Qf4DEYMD4YH0A2rNjM2HP+CxAwmP/0PAZAKkyY8zQ/+DDwMzAGQDJv2PwYtjAJ0DRgP/ASwDYomMgYNvwdsDjwMzAIEsA2IBiAGDYwGZhxmDMwEAZANiB4AHh0MDOcIw4/8CAGQC5AEAAQKf5BCAwEIDIAA0CAARFAQ0CAA8ZANlxgEAMAEAAMSoBCfoAgv/gDEBgADGQHgEHEwGPzMB/4MgT//gZAABPDMGP+EsAAV/ADZEtsBkAAI/Mwf/6fbAAIEsAAEIGA+2w+ggJfQCN/8AcIM2wDGAyAG+AgD/xj/AZAABfCEBsQ+0yAAGRpmDf4Q2wDGHgTAAH4QCbszMIwB2wDmMwGQCcAbKwAMBtsA3DGQCcA7CYAMPP8AyDGQCdAT/QA4EIIAwBZABxH4ABAAAACGIACX0ACgIAB5YACgIADxkA//////89ApwFCgIAAV8FDxkAAS8Dn9IPCBP+FAcJAgAvHz82EAgf/+YQAT/+f4CaEAcPzBAGD7IQAQ8XEQsPfAABAWIRD5QRBgGtEA0CAB/g+BEIDwIAr1AAAAAAAA=="
                    + iVar6 * 0x48 + 0x348;
          goto LAB_ram_4201b87a;
        }
        iVar6 = iVar6 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar6 != 0x35);
      pcVar10 = (char *)0x0;
LAB_ram_4201b87a:
      iVar6 = 0;
      do {
        if (*puVar4 == uVar7) {
          uVar9 = 0;
          if (pcVar10 != (char *)0x0) {
            uVar8 = (uint)(byte)(&DAT_ram_3c0dccdc)[iVar6];
            uVar9 = 0;
            if (uVar8 != 0) {
              iVar6 = 0;
              do {
                uVar9 = 0;
                do {
                  uVar1 = (200 - iVar2) / 2 + iVar11 + uVar9;
                  if ((uVar1 < 200) &&
                     (((int)(uint)(byte)pcVar10[((int)uVar9 >> 3) + iVar6 * 3] >> (~uVar9 & 7) & 1U)
                      != 0)) {
                    FUN_ram_4201f246((int)(uVar1 * 0x10000) >> 0x10,
                                     (param_1 + iVar6) * 0x10000 >> 0x10,0);
                  }
                  uVar9 = uVar9 + 1;
                } while ((int)uVar9 < (int)uVar8);
                iVar6 = iVar6 + 1;
                uVar9 = uVar8;
              } while (iVar6 != 0x18);
            }
          }
          goto LAB_ram_4201b88a;
        }
        iVar6 = iVar6 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar6 != 0x35);
      uVar9 = 0;
LAB_ram_4201b88a:
      iVar11 = iVar11 + uVar9;
    }
    param_2 = param_2 + 1;
  } while( true );
}

