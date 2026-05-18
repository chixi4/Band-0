
int FUN_ram_420a6660(int *param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iStack_24;
  
  uVar9 = (uint)*(byte *)(*(int *)(param_1[0xe] + 0xc) + 10);
  if ((uVar9 < 0xb) && ((0x69eU >> (uVar9 & 0x1f) & 1) != 0)) {
    uVar1 = *(undefined1 *)(*param_1 + 10);
    iVar4 = FUN_ram_420a4c64(param_1,1);
    if (iVar4 == 0) {
      iVar4 = param_1[0xd];
      if (*(int *)(iVar4 + 0x60) != 0) {
        FUN_ram_4206d7d4();
        *(undefined4 *)(iVar4 + 0x60) = 0;
        *(undefined4 *)(iVar4 + 0x68) = 0;
        *(undefined4 *)(iVar4 + 100) = 0;
      }
      iVar5 = FUN_ram_4206d7ce(1,0x198);
      if (iVar5 == 0) {
LAB_ram_420a66c4:
        FUN_ram_420a71ae(param_1,2,0x50);
        iVar4 = -0x7f00;
      }
      else {
        FUN_ram_420aa2aa();
        if ((param_1[0x1d] == 0x16) && (pcVar7 = (char *)param_1[0x1b], *pcVar7 == '\v')) {
          if ((((uint)param_1[0x20] < 10) || (pcVar7[4] != '\0')) ||
             (param_1[0x20] !=
              ((uint)(*(ushort *)(pcVar7 + 5) >> 8) | (*(ushort *)(pcVar7 + 5) & 0xff) << 8) + 7)) {
LAB_ram_420a672c:
            FUN_ram_420a71ae(param_1,2,0x32);
            iVar4 = -0x7300;
          }
          else {
            uVar9 = 7;
            do {
              while( true ) {
                uVar10 = param_1[0x20];
                if (uVar10 <= uVar9) {
                  iVar4 = FUN_ram_420a64be(param_1,uVar1,iVar5,*(undefined4 *)(param_1[0xe] + 0xc),0
                                          );
                  if (iVar4 != 0) goto LAB_ram_420a6708;
                  iVar11 = *(int *)(iVar5 + 200);
                  iVar12 = *(int *)(iVar5 + 0xc4);
                  uVar3 = *(undefined4 *)(iVar5 + 0xc);
                  uVar13 = *(undefined4 *)(iVar5 + 8);
                  FUN_ram_420aa2b8(iVar5);
                  FUN_ram_4206d7d4(iVar5);
                  iVar5 = param_1[0xd];
                  uVar6 = FUN_ram_4206d7ce(1,0x20);
                  iVar4 = param_1[0xd];
                  *(undefined4 *)(iVar5 + 0x60) = uVar6;
                  if (*(int *)(iVar4 + 0x60) == 0) goto LAB_ram_420a66c4;
                  uVar6 = FUN_ram_4206c444(9);
                  iVar4 = FUN_ram_4206c6da(uVar6,uVar3,uVar13,*(undefined4 *)(param_1[0xd] + 0x60));
                  iVar5 = param_1[0xd];
                  *(undefined4 *)(iVar5 + 0x68) = 9;
                  *(undefined4 *)(iVar5 + 100) = 0x20;
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  iStack_24 = iVar11;
                  FUN_ram_420a85a4(param_1[0xe] + 0x108);
                  iVar4 = FUN_ram_420a8f76(&iStack_24,iVar11 + iVar12,param_1[0xe] + 0x108);
                  if (iVar4 != 0) {
                    return -0x6c00;
                  }
                  goto LAB_ram_420a68a6;
                }
                uVar8 = uVar9 + 3;
                if (uVar10 < uVar8) goto LAB_ram_420a672c;
                pcVar7 = (char *)(uVar9 + param_1[0x1b]);
                if (*pcVar7 != '\0') {
                  FUN_ram_420a71ae(param_1,2,0x2b);
                  iVar4 = -0x7a00;
                  goto LAB_ram_420a6708;
                }
                uVar2 = *(ushort *)(pcVar7 + 1);
                uVar9 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
                if ((uVar9 < 0x80) || (uVar9 = uVar8 + uVar9, uVar10 < uVar9))
                goto LAB_ram_420a672c;
                iVar4 = FUN_ram_420aabc6(iVar5,param_1[0x1b] + uVar8);
                if (iVar4 == -0x2580) {
                  uVar3 = 0x2b;
                  goto LAB_ram_420a688a;
                }
                if (-0x2580 < iVar4) break;
                if (iVar4 == -0x2880) {
                  uVar3 = 0x50;
                  goto LAB_ram_420a688a;
                }
                if (iVar4 != -0x262e) goto LAB_ram_420a6886;
              }
            } while (iVar4 == 0);
LAB_ram_420a6886:
            uVar3 = 0x2a;
LAB_ram_420a688a:
            FUN_ram_420a71ae(param_1,2,uVar3);
          }
        }
        else {
          FUN_ram_420a71ae(param_1,2,10);
          iVar4 = -0x7700;
        }
LAB_ram_420a6708:
        FUN_ram_420aa2b8(iVar5);
        FUN_ram_4206d7d4(iVar5);
      }
    }
  }
  else {
LAB_ram_420a68a6:
    iVar4 = 0;
    param_1[1] = param_1[1] + 1;
  }
  return iVar4;
}

