
void FUN_ram_42039d7a(int param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ushort uVar11;
  int iVar12;
  
  iVar6 = FUN_ram_420384d8();
  uVar7 = (*(code *)&SUB_ram_40010538)(param_1,0x20);
  if (0x20 < uVar7) {
    uVar7 = 0x20;
  }
  *(uint *)(iVar6 + 4) = uVar7;
  FUN_ram_40399daa(iVar6 + 8,param_1,0x20);
  iVar12 = iVar6 + 0x2f;
  FUN_ram_40399daa(iVar12,param_1 + 0x20,0x40);
  *(undefined1 *)(iVar6 + 0x6f) = 0;
  iVar8 = FUN_ram_42038516(1,iVar6 + 4,DAT_ram_3fcb5145 == '\0');
  if ((iVar8 == 0) && (iVar8 = FUN_ram_42038516(3,iVar12,DAT_ram_3fcb5145 == '\0'), iVar8 == 0)) {
    if (*(char *)(param_1 + 100) == '\0') {
      *(undefined1 *)(iVar6 + 0x92) = 0;
      iVar8 = 0;
      uVar10 = 7;
    }
    else {
      iVar8 = iVar6 + 0x93;
      *(undefined1 *)(iVar6 + 0x92) = 1;
      FUN_ram_40399daa(iVar8,param_1 + 0x65,6);
      iVar9 = FUN_ram_42038516(7,1,DAT_ram_3fcb5145 == '\0');
      if (iVar9 != 0) {
        return;
      }
      uVar10 = 8;
    }
    iVar8 = FUN_ram_42038516(uVar10,iVar8,DAT_ram_3fcb5145 == '\0');
    if (iVar8 == 0) {
      uVar2 = *(undefined2 *)(param_1 + 0x6c);
      *(undefined2 *)(iVar6 + 0x9a) = uVar2;
      iVar8 = FUN_ram_42038516(9,uVar2,DAT_ram_3fcb5145 == '\0');
      if (iVar8 == 0) {
        uVar5 = *(undefined1 *)(param_1 + 0x6b);
        *(undefined1 *)(iVar6 + 0x90) = uVar5;
        iVar8 = FUN_ram_42038516(5,uVar5,DAT_ram_3fcb5145 == '\0');
        cVar4 = DAT_ram_3fcb5145;
        if (iVar8 == 0) {
          bVar3 = *(int *)(param_1 + 0x60) != 0;
          *(bool *)(iVar6 + 0x35c) = bVar3;
          iVar8 = FUN_ram_42038516(0xe,bVar3,cVar4 == '\0');
          cVar4 = DAT_ram_3fcb5145;
          if (iVar8 == 0) {
            bVar3 = *(int *)(param_1 + 0x70) != 0;
            *(bool *)(iVar6 + 0x35d) = bVar3;
            iVar8 = FUN_ram_42038516(0xf,bVar3,cVar4 == '\0');
            cVar4 = DAT_ram_3fcb5145;
            if (iVar8 == 0) {
              cVar1 = *(char *)(param_1 + 0x74);
              *(char *)(iVar6 + 0x35e) = cVar1;
              iVar8 = FUN_ram_42038516(0x10,(int)cVar1,cVar4 == '\0');
              if (iVar8 == 0) {
                if (((*(ushort *)(param_1 + 0x82) & 0x10) == 0) && (*(int *)(param_1 + 0x78) == 9))
                {
                  FUN_ram_42033fd8(1,2,2,0x3c07faa0);
                }
                if (*(int *)(param_1 + 0x78) - 0xbU < 2) {
                  FUN_ram_42033fd8(1,2,2,0x3c07faf4);
                  *(undefined4 *)(param_1 + 0x78) = 6;
                }
                cVar4 = DAT_ram_3fcb5145;
                uVar7 = *(uint *)(param_1 + 0x78);
                *(char *)(iVar6 + 0x35f) = (char)uVar7;
                iVar8 = FUN_ram_42038516(0x11,uVar7 & 0xff,cVar4 == '\0');
                if (iVar8 == 0) {
                  *(char *)(iVar6 + 0x9f) = (char)param_2;
                  iVar8 = FUN_ram_42038516(0xc,iVar6 + 0x9e,DAT_ram_3fcb5145 == '\0');
                  cVar4 = DAT_ram_3fcb5145;
                  if (iVar8 == 0) {
                    *(undefined1 *)(iVar6 + 0x360) = 1;
                    iVar8 = FUN_ram_42038516(0x12,1,cVar4 == '\0');
                    cVar4 = DAT_ram_3fcb5145;
                    if (iVar8 == 0) {
                      uVar5 = *(undefined1 *)(param_1 + 0x81);
                      *(undefined1 *)(iVar6 + 0x361) = uVar5;
                      iVar8 = FUN_ram_42038516(0x13,uVar5,cVar4 == '\0');
                      cVar4 = DAT_ram_3fcb5145;
                      if (iVar8 == 0) {
                        uVar11 = *(ushort *)(param_1 + 0x82) & 1;
                        *(char *)(iVar6 + 0x362) = (char)uVar11;
                        iVar8 = FUN_ram_42038516(0x15,uVar11,cVar4 == '\0');
                        cVar4 = DAT_ram_3fcb5145;
                        if (iVar8 == 0) {
                          uVar7 = *(uint *)(param_1 + 0x80) >> 0x11 & 1;
                          *(char *)(iVar6 + 0x363) = (char)uVar7;
                          iVar8 = FUN_ram_42038516(0x14,uVar7,cVar4 == '\0');
                          cVar4 = DAT_ram_3fcb5145;
                          if (iVar8 == 0) {
                            uVar7 = *(uint *)(param_1 + 0x80) >> 0x12 & 1;
                            *(char *)(iVar6 + 0x364) = (char)uVar7;
                            iVar8 = FUN_ram_42038516(0x16,uVar7,cVar4 == '\0');
                            cVar4 = DAT_ram_3fcb5145;
                            if (iVar8 == 0) {
                              uVar7 = *(uint *)(param_1 + 0x80) >> 0x13 & 1;
                              *(char *)(iVar6 + 0x414) = (char)uVar7;
                              iVar8 = FUN_ram_42038516(0x28,uVar7,cVar4 == '\0');
                              cVar4 = DAT_ram_3fcb5145;
                              if (iVar8 == 0) {
                                uVar7 = *(uint *)(param_1 + 0x80) >> 0x14 & 1;
                                *(char *)(iVar6 + 0x415) = (char)uVar7;
                                iVar8 = FUN_ram_42038516(0x29,uVar7,cVar4 == '\0');
                                cVar4 = DAT_ram_3fcb5145;
                                if (iVar8 == 0) {
                                  uVar5 = *(undefined1 *)(param_1 + 0x90);
                                  *(undefined1 *)(iVar6 + 0x448) = uVar5;
                                  iVar8 = FUN_ram_42038516(0x2d,uVar5,cVar4 == '\0');
                                  cVar4 = DAT_ram_3fcb5145;
                                  if (iVar8 == 0) {
                                    uVar7 = *(uint *)(param_1 + 0x80) >> 0x15 & 1;
                                    *(char *)(iVar6 + 0x416) = (char)uVar7;
                                    iVar8 = FUN_ram_42038516(0x2a,uVar7,cVar4 == '\0');
                                    if (iVar8 == 0) {
                                      uVar5 = FUN_ram_42039d60(*(undefined4 *)(param_1 + 0x88));
                                      cVar4 = DAT_ram_3fcb5145;
                                      *(undefined1 *)(iVar6 + 0x417) = uVar5;
                                      iVar8 = FUN_ram_42038516(0x2b,uVar5,cVar4 == '\0');
                                      cVar4 = DAT_ram_3fcb5145;
                                      if (iVar8 == 0) {
                                        uVar7 = *(uint *)(param_1 + 0x8c);
                                        *(char *)(iVar6 + 0x418) = (char)uVar7;
                                        iVar8 = FUN_ram_42038516(0x2c,uVar7 & 0xff,cVar4 == '\0');
                                        if (iVar8 == 0) {
                                          uVar10 = FUN_ram_40399daa(iVar6 + 0x451,param_1 + 0x97,
                                                                    0x20);
                                          iVar8 = FUN_ram_42038516(0x37,uVar10,
                                                                   DAT_ram_3fcb5145 == '\0');
                                          cVar4 = DAT_ram_3fcb5145;
                                          if (iVar8 == 0) {
                                            if (((*(ushort *)(param_1 + 0x82) & 0x10) != 0) &&
                                               (*(int *)(param_1 + 0x78) == 0)) {
                                              *(undefined1 *)(iVar6 + 0x35c) = 1;
                                              iVar8 = FUN_ram_42038516(0xe,1,cVar4 == '\0');
                                              if (iVar8 != 0) {
                                                return;
                                              }
                                            }
                                            param_2 = param_2 * 0x8c;
                                            FUN_ram_40399daa(param_2 + 0xa4 + iVar6,iVar6 + 8,0x20);
                                            iVar8 = iVar6 + param_2;
                                            *(undefined4 *)(iVar8 + 0xa0) =
                                                 *(undefined4 *)(iVar6 + 4);
                                            FUN_ram_40399daa(param_2 + 0xc4 + iVar6,iVar12,0x40);
                                            if (*(char *)(iVar6 + 0x92) == '\0') {
                                              *(undefined1 *)(iVar8 + 0x104) = 0;
                                            }
                                            else {
                                              *(undefined1 *)(iVar8 + 0x104) = 1;
                                              FUN_ram_40399daa(param_2 + 0x105 + iVar6,iVar6 + 0x93,
                                                               6);
                                            }
                                            if (DAT_ram_3fcb5132 == '\x01') {
                                              (*(code *)&SUB_ram_40010488)
                                                        (iVar6 + param_2 + 0x10b,0xff,0x20);
                                            }
                                            iVar6 = FUN_ram_42038516(0xd,iVar6 + 0xa0,
                                                                     DAT_ram_3fcb5145 == '\0');
                                            if (iVar6 == 0) {
                                              FUN_ram_420384de();
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

