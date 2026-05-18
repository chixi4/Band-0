
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_42042f02(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  uint uVar9;
  byte *pbVar10;
  
  pbVar7 = (byte *)*param_2;
  bVar1 = pbVar7[1];
  bVar2 = pbVar7[2];
  uVar4 = (uint)bVar2;
  (**(code **)(_DAT_ram_3fcdfecc + 0xa00))
            (0x7018,uVar4,bVar1 - 1,param_4,param_5,*(code **)(_DAT_ram_3fcdfecc + 0xa00));
  if (uVar4 < 0x2a) {
    if (*(char *)(*(int *)(_DAT_ram_3fcdff6c + 0x10) + uVar4) != (byte)(bVar1 - 1)) {
LAB_ram_420434c2:
      *pbVar7 = 7;
      uVar8 = 0xffffffff;
      goto LAB_ram_42042fd6;
    }
    pbVar10 = pbVar7 + 3;
    if (uVar4 < 0x11) {
      if (uVar4 < 0xf) {
        if (uVar4 == 5) {
LAB_ram_42043242:
          uVar9 = 1;
          goto LAB_ram_42043208;
        }
        if (uVar4 < 6) {
          uVar9 = 1;
          if (uVar4 == 3) goto LAB_ram_42043208;
          goto LAB_ram_42042f96;
        }
        if (uVar4 == 10) goto LAB_ram_42043242;
        if (uVar4 != 0xe) goto LAB_ram_42042f96;
        uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0xd8))();
        if ((uVar4 & 8) == 0) goto LAB_ram_42042fce;
LAB_ram_420431f8:
        uVar8 = 0xe;
LAB_ram_420430fa:
        uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x47c))(param_1,pbVar10,pbVar7,uVar8);
        uVar4 = uVar4 & 0xff;
        uVar8 = 0;
        goto LAB_ram_42043024;
      }
      uVar9 = 2;
LAB_ram_42043208:
      uVar6 = (**(code **)(_DAT_ram_3fcdfecc + 0xd8))();
      if ((uVar6 & uVar9) != 0) goto LAB_ram_42042f96;
      if (uVar4 != 3) goto LAB_ram_42042fce;
      if ((param_1[0x15] & 4) == 0) {
        pbVar7[1] = 0x1a;
        *pbVar7 = 0xd;
        uVar4 = 0xd;
        uVar8 = 0;
      }
      else {
        pbVar7[2] = 0x1a;
        pbVar7[1] = bVar2;
        *pbVar7 = 0x11;
        uVar4 = 0x11;
        uVar8 = 0;
      }
    }
    else {
      if (uVar4 == 0x16) {
        uVar9 = 0x900;
LAB_ram_42042fee:
        uVar6 = (**(code **)(_DAT_ram_3fcdfecc + 0xd8))();
        if ((uVar9 & uVar6) == 0) goto LAB_ram_42042fce;
LAB_ram_42042f96:
        if (uVar4 == 0xf) {
          uVar8 = 0;
          uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x468))(param_1,pbVar10,pbVar7);
          uVar4 = uVar4 & 0xff;
LAB_ram_42043024:
          if (uVar4 != 0xff) {
            *pbVar7 = (byte)uVar4;
            if (uVar4 == 7) goto LAB_ram_42042fd6;
            goto LAB_ram_42043036;
          }
        }
        else {
          if (uVar4 < 0x10) {
            if (uVar4 == 7) {
              uVar8 = 0;
              uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x454))(param_1,pbVar10);
              uVar4 = uVar4 & 0xff;
            }
            else if (uVar4 < 8) {
              if (uVar4 == 3) {
                uVar8 = 0;
                uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x474))(param_1,pbVar10);
              }
              else if (uVar4 < 4) {
                if (uVar4 == 0) {
                  uVar8 = 0;
                  uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x470))(param_1,pbVar10);
                  uVar4 = uVar4 & 0xff;
                }
                else {
                  if (uVar4 != 1) goto LAB_ram_42042fce;
                  uVar8 = 0;
                  uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x464))(param_1,pbVar10);
                  uVar4 = uVar4 & 0xff;
                }
              }
              else if (uVar4 == 5) {
                uVar8 = 0;
                uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x4a8))(param_1);
              }
              else {
                if (uVar4 < 6) {
                  uVar8 = 0;
                  (**(code **)(_DAT_ram_3fcdfecc + 0x478))(param_1,pbVar10);
                  goto LAB_ram_4204324a;
                }
                uVar8 = 0;
                uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x4ac))(param_1);
              }
            }
            else if (uVar4 == 0xb) {
              uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x488))(param_1);
              if (uVar4 == 0xb) {
                *pbVar7 = bVar2;
                uVar8 = 0;
                cVar3 = *(char *)(*(int *)(_DAT_ram_3fcdff6c + 0x10) + 0xb) + '\x01';
                (**(code **)(_DAT_ram_3fcdfecc + 0x37c))
                          (param_1,param_2,3,cVar3,*(int *)(_DAT_ram_3fcdff6c + 0x10),
                           *(code **)(_DAT_ram_3fcdfecc + 0x37c));
                (**(code **)(_DAT_ram_3fcdfecc + 0xa00))(0x7019,0xb,cVar3);
                (**(code **)(_DAT_ram_3fcdfecc + 0x444))(param_1,2);
                goto LAB_ram_42043058;
              }
LAB_ram_420433ca:
              uVar8 = 0;
            }
            else if (uVar4 < 0xc) {
              if (uVar4 == 9) {
                uVar8 = 0;
                (**(code **)(_DAT_ram_3fcdfecc + 0x480))(param_1,pbVar10);
                goto LAB_ram_4204324a;
              }
              if (uVar4 < 10) {
                uVar8 = 8;
                goto LAB_ram_420430fa;
              }
              uVar8 = 0;
              uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x484))(param_1);
            }
            else {
              if (uVar4 == 0xd) goto LAB_ram_420433b4;
              if (0xd < uVar4) goto LAB_ram_420431f8;
              uVar8 = 0;
              uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x4b0))(param_1,pbVar10);
              uVar4 = uVar4 & 0xff;
            }
            goto LAB_ram_42043024;
          }
          if (uVar4 == 0x17) {
            uVar8 = 0;
            uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x498))(param_1,pbVar10);
            goto LAB_ram_42043024;
          }
          if (0x17 < uVar4) {
            if (uVar4 == 0x1d) {
              uVar8 = 0;
              uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0xa38))(param_1,pbVar10);
            }
            else if (uVar4 < 0x1e) {
              if (uVar4 == 0x19) {
                uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0xa4c))(param_1,pbVar10,pbVar7);
                uVar4 = uVar4 & 0xff;
                uVar8 = 0;
              }
              else if (uVar4 < 0x19) {
                uVar8 = 0;
                uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x49c))(param_1,pbVar10);
              }
              else {
                if (uVar4 != 0x1c) goto LAB_ram_42042fce;
                uVar8 = 0;
                uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x490))(param_1,pbVar10);
              }
            }
            else if (uVar4 == 0x28) {
              uVar8 = 0;
              uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0xaa4))(param_1,pbVar10);
            }
            else if (uVar4 == 0x29) {
              uVar8 = 0;
              uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0xaa8))(param_1,pbVar10);
            }
            else {
              if (uVar4 != 0x1e) {
LAB_ram_42042fce:
                *pbVar7 = 7;
                uVar8 = 0;
                goto LAB_ram_42042fd6;
              }
              uVar8 = 0;
              uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0xa44))(param_1,pbVar10);
            }
            goto LAB_ram_42043024;
          }
          if (uVar4 != 0x13) {
            if (uVar4 < 0x14) {
              if (uVar4 == 0x11) {
LAB_ram_420433b4:
                uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x4a4))(param_1,pbVar10,uVar4,pbVar7 + 1);
                uVar4 = uVar4 & 0xff;
                goto LAB_ram_420433ca;
              }
              if (0x11 < uVar4) goto LAB_ram_42043284;
              uVar8 = 0;
              uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x46c))(param_1,pbVar10,pbVar7);
              uVar4 = uVar4 & 0xff;
            }
            else if (uVar4 == 0x15) {
              uVar8 = 0;
              if ((char)param_1[0x14] != '\b') goto LAB_ram_4204324a;
              iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x428))(param_1,pbVar10);
              uVar4 = 0xff;
              uVar8 = 0;
              if (iVar5 != 0) {
                uVar8 = 0xffffffff;
                uVar4 = 7;
              }
              (**(code **)(_DAT_ram_3fcdfecc + 0x450))(param_1,8);
            }
            else {
              if (uVar4 < 0x16) {
                iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x428))(param_1,pbVar10);
                if (iVar5 != 0) goto LAB_ram_420434c2;
                if (((char)param_1[0x14] != '\b') && (((ushort)param_1[0x17] & 0x100) != 0)) {
                  *(ushort *)(param_1 + 0x17) = (ushort)param_1[0x17] & 0xfeff;
                }
                uVar4 = 0x15;
                (**(code **)(_DAT_ram_3fcdfecc + 0x40c))(param_1,pbVar7);
                *pbVar7 = 0x15;
                uVar8 = 0;
                goto LAB_ram_42043036;
              }
              uVar8 = 0;
              uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x494))(param_1,pbVar10);
            }
            goto LAB_ram_42043024;
          }
          uVar8 = 0;
          (**(code **)(_DAT_ram_3fcdfecc + 0x4a0))(param_1);
        }
LAB_ram_4204324a:
        (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x701a,0);
        (**(code **)(_DAT_ram_3fcdfecc + 0x904))(param_2);
        goto LAB_ram_42043058;
      }
      if (0x16 < uVar4) {
        if (uVar4 == 0x19) {
          uVar9 = 0x10000;
          goto LAB_ram_42042fee;
        }
        if ((uVar4 != 0x1c) || (iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0xd8))(), iVar5 << 6 < 0))
        goto LAB_ram_42042f96;
        goto LAB_ram_42042fce;
      }
      if (uVar4 != 0x12) {
        uVar9 = 0x20;
        if (uVar4 != 0x14) goto LAB_ram_42042f96;
        goto LAB_ram_42042fee;
      }
      uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0xd8))();
      if ((uVar4 & 0x10) == 0) goto LAB_ram_42042fce;
LAB_ram_42043284:
      *pbVar7 = 0x13;
      uVar4 = 0x13;
      uVar8 = 0;
    }
  }
  else {
    *pbVar7 = 7;
    uVar8 = 0xffffffff;
LAB_ram_42042fd6:
    pbVar7[1] = bVar2;
    uVar4 = 7;
  }
LAB_ram_42043036:
  (**(code **)(_DAT_ram_3fcdfecc + 0x37c))
            (param_1,param_2,3,*(char *)(uVar4 + *(int *)(_DAT_ram_3fcdff6c + 0x10)) + '\x01',
             *(code **)(_DAT_ram_3fcdfecc + 0x37c));
LAB_ram_42043058:
  if ((int)(*param_1 << 1) < 0) {
    *param_1 = *param_1 & 0xbfffffff;
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x7022,0);
    (**(code **)(_DAT_ram_3fcdfecc + 0x424))(param_1);
  }
  return uVar8;
}

