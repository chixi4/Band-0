
void FUN_ram_42080234(int param_1,int param_2)

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
  
  iVar6 = FUN_ram_4207e5a8();
  uVar7 = (*(code *)&SUB_ram_40010538)(param_1,0x20);
  if (0x20 < uVar7) {
    uVar7 = 0x20;
  }
  *(uint *)(iVar6 + 4) = uVar7;
  FUN_ram_4039c11e(iVar6 + 8,param_1,0x20);
  iVar12 = iVar6 + 0x2f;
  FUN_ram_4039c11e(iVar12,param_1 + 0x20,0x40);
  *(undefined1 *)(iVar6 + 0x6f) = 0;
  iVar8 = FUN_ram_4207e5e6(1,iVar6 + 4,DAT_ram_3fcc41d5 == '\0');
  if ((iVar8 == 0) && (iVar8 = FUN_ram_4207e5e6(3,iVar12,DAT_ram_3fcc41d5 == '\0'), iVar8 == 0)) {
    if (*(char *)(param_1 + 100) == '\0') {
      *(undefined1 *)(iVar6 + 0x92) = 0;
      iVar8 = 0;
      uVar10 = 7;
    }
    else {
      iVar8 = iVar6 + 0x93;
      *(undefined1 *)(iVar6 + 0x92) = 1;
      FUN_ram_4039c11e(iVar8,param_1 + 0x65,6);
      iVar9 = FUN_ram_4207e5e6(7,1,DAT_ram_3fcc41d5 == '\0');
      if (iVar9 != 0) {
        return;
      }
      uVar10 = 8;
    }
    iVar8 = FUN_ram_4207e5e6(uVar10,iVar8,DAT_ram_3fcc41d5 == '\0');
    if (iVar8 == 0) {
      uVar2 = *(undefined2 *)(param_1 + 0x6c);
      *(undefined2 *)(iVar6 + 0x9a) = uVar2;
      iVar8 = FUN_ram_4207e5e6(9,uVar2,DAT_ram_3fcc41d5 == '\0');
      if (iVar8 == 0) {
        uVar5 = *(undefined1 *)(param_1 + 0x6b);
        *(undefined1 *)(iVar6 + 0x90) = uVar5;
        iVar8 = FUN_ram_4207e5e6(5,uVar5,DAT_ram_3fcc41d5 == '\0');
        cVar4 = DAT_ram_3fcc41d5;
        if (iVar8 == 0) {
          bVar3 = *(int *)(param_1 + 0x60) != 0;
          *(bool *)(iVar6 + 0x35c) = bVar3;
          iVar8 = FUN_ram_4207e5e6(0xe,bVar3,cVar4 == '\0');
          cVar4 = DAT_ram_3fcc41d5;
          if (iVar8 == 0) {
            bVar3 = *(int *)(param_1 + 0x70) != 0;
            *(bool *)(iVar6 + 0x35d) = bVar3;
            iVar8 = FUN_ram_4207e5e6(0xf,bVar3,cVar4 == '\0');
            cVar4 = DAT_ram_3fcc41d5;
            if (iVar8 == 0) {
              cVar1 = *(char *)(param_1 + 0x74);
              *(char *)(iVar6 + 0x35e) = cVar1;
              iVar8 = FUN_ram_4207e5e6(0x10,(int)cVar1,cVar4 == '\0');
              if (iVar8 == 0) {
                if (((*(ushort *)(param_1 + 0x82) & 0x10) == 0) && (*(int *)(param_1 + 0x78) == 9))
                {
                  FUN_ram_4207a038(1,2,2,
                                   "b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                                  );
                }
                if (*(int *)(param_1 + 0x78) - 0xbU < 2) {
                  FUN_ram_4207a038(1,2,2,
                                   "4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                                  );
                  *(undefined4 *)(param_1 + 0x78) = 6;
                }
                cVar4 = DAT_ram_3fcc41d5;
                uVar7 = *(uint *)(param_1 + 0x78);
                *(char *)(iVar6 + 0x35f) = (char)uVar7;
                iVar8 = FUN_ram_4207e5e6(0x11,uVar7 & 0xff,cVar4 == '\0');
                if (iVar8 == 0) {
                  *(char *)(iVar6 + 0x9f) = (char)param_2;
                  iVar8 = FUN_ram_4207e5e6(0xc,iVar6 + 0x9e,DAT_ram_3fcc41d5 == '\0');
                  cVar4 = DAT_ram_3fcc41d5;
                  if (iVar8 == 0) {
                    *(undefined1 *)(iVar6 + 0x360) = 1;
                    iVar8 = FUN_ram_4207e5e6(0x12,1,cVar4 == '\0');
                    cVar4 = DAT_ram_3fcc41d5;
                    if (iVar8 == 0) {
                      uVar5 = *(undefined1 *)(param_1 + 0x81);
                      *(undefined1 *)(iVar6 + 0x361) = uVar5;
                      iVar8 = FUN_ram_4207e5e6(0x13,uVar5,cVar4 == '\0');
                      cVar4 = DAT_ram_3fcc41d5;
                      if (iVar8 == 0) {
                        uVar11 = *(ushort *)(param_1 + 0x82) & 1;
                        *(char *)(iVar6 + 0x362) = (char)uVar11;
                        iVar8 = FUN_ram_4207e5e6(0x15,uVar11,cVar4 == '\0');
                        cVar4 = DAT_ram_3fcc41d5;
                        if (iVar8 == 0) {
                          uVar7 = *(uint *)(param_1 + 0x80) >> 0x11 & 1;
                          *(char *)(iVar6 + 0x363) = (char)uVar7;
                          iVar8 = FUN_ram_4207e5e6(0x14,uVar7,cVar4 == '\0');
                          cVar4 = DAT_ram_3fcc41d5;
                          if (iVar8 == 0) {
                            uVar7 = *(uint *)(param_1 + 0x80) >> 0x12 & 1;
                            *(char *)(iVar6 + 0x364) = (char)uVar7;
                            iVar8 = FUN_ram_4207e5e6(0x16,uVar7,cVar4 == '\0');
                            cVar4 = DAT_ram_3fcc41d5;
                            if (iVar8 == 0) {
                              uVar7 = *(uint *)(param_1 + 0x80) >> 0x13 & 1;
                              *(char *)(iVar6 + 0x414) = (char)uVar7;
                              iVar8 = FUN_ram_4207e5e6(0x28,uVar7,cVar4 == '\0');
                              cVar4 = DAT_ram_3fcc41d5;
                              if (iVar8 == 0) {
                                uVar7 = *(uint *)(param_1 + 0x80) >> 0x14 & 1;
                                *(char *)(iVar6 + 0x415) = (char)uVar7;
                                iVar8 = FUN_ram_4207e5e6(0x29,uVar7,cVar4 == '\0');
                                cVar4 = DAT_ram_3fcc41d5;
                                if (iVar8 == 0) {
                                  uVar5 = *(undefined1 *)(param_1 + 0x90);
                                  *(undefined1 *)(iVar6 + 0x448) = uVar5;
                                  iVar8 = FUN_ram_4207e5e6(0x2d,uVar5,cVar4 == '\0');
                                  cVar4 = DAT_ram_3fcc41d5;
                                  if (iVar8 == 0) {
                                    uVar7 = *(uint *)(param_1 + 0x80) >> 0x15 & 1;
                                    *(char *)(iVar6 + 0x416) = (char)uVar7;
                                    iVar8 = FUN_ram_4207e5e6(0x2a,uVar7,cVar4 == '\0');
                                    if (iVar8 == 0) {
                                      uVar5 = FUN_ram_42098a5e(*(undefined4 *)(param_1 + 0x88));
                                      cVar4 = DAT_ram_3fcc41d5;
                                      *(undefined1 *)(iVar6 + 0x417) = uVar5;
                                      iVar8 = FUN_ram_4207e5e6(0x2b,uVar5,cVar4 == '\0');
                                      cVar4 = DAT_ram_3fcc41d5;
                                      if (iVar8 == 0) {
                                        uVar7 = *(uint *)(param_1 + 0x8c);
                                        *(char *)(iVar6 + 0x418) = (char)uVar7;
                                        iVar8 = FUN_ram_4207e5e6(0x2c,uVar7 & 0xff,cVar4 == '\0');
                                        if (iVar8 == 0) {
                                          uVar10 = FUN_ram_4039c11e(iVar6 + 0x451,param_1 + 0x97,
                                                                    0x20);
                                          iVar8 = FUN_ram_4207e5e6(0x37,uVar10,
                                                                   DAT_ram_3fcc41d5 == '\0');
                                          cVar4 = DAT_ram_3fcc41d5;
                                          if (iVar8 == 0) {
                                            if (((*(ushort *)(param_1 + 0x82) & 0x10) != 0) &&
                                               (*(int *)(param_1 + 0x78) == 0)) {
                                              *(undefined1 *)(iVar6 + 0x35c) = 1;
                                              iVar8 = FUN_ram_4207e5e6(0xe,1,cVar4 == '\0');
                                              if (iVar8 != 0) {
                                                return;
                                              }
                                            }
                                            param_2 = param_2 * 0x8c;
                                            FUN_ram_4039c11e(param_2 + 0xa4 + iVar6,iVar6 + 8,0x20);
                                            iVar8 = iVar6 + param_2;
                                            *(undefined4 *)(iVar8 + 0xa0) =
                                                 *(undefined4 *)(iVar6 + 4);
                                            FUN_ram_4039c11e(param_2 + 0xc4 + iVar6,iVar12,0x40);
                                            if (*(char *)(iVar6 + 0x92) == '\0') {
                                              *(undefined1 *)(iVar8 + 0x104) = 0;
                                            }
                                            else {
                                              *(undefined1 *)(iVar8 + 0x104) = 1;
                                              FUN_ram_4039c11e(param_2 + 0x105 + iVar6,iVar6 + 0x93,
                                                               6);
                                            }
                                            if (DAT_ram_3fcc41c2 == '\x01') {
                                              (*(code *)&SUB_ram_40010488)
                                                        (iVar6 + param_2 + 0x10b,0xff,0x20);
                                            }
                                            iVar6 = FUN_ram_4207e5e6(0xd,iVar6 + 0xa0,
                                                                     DAT_ram_3fcc41d5 == '\0');
                                            if (iVar6 == 0) {
                                              FUN_ram_4207e5ae();
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

