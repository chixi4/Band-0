
int FUN_ram_420700a2(int *param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = (uint)*(byte *)(*(int *)(param_1[0xe] + 0xc) + 10);
  if ((uVar8 < 0xb) && ((0x69eU >> (uVar8 & 0x1f) & 1) != 0)) {
    uVar1 = *(undefined1 *)(*param_1 + 10);
    iVar3 = FUN_ram_4206e2ae(param_1,1);
    if (iVar3 == 0) {
      iVar3 = param_1[0xd];
      if (*(int *)(iVar3 + 0x60) != 0) {
        FUN_ram_42071c72();
        FUN_ram_420293a0(*(undefined4 *)(iVar3 + 0x60));
        *(undefined4 *)(iVar3 + 0x60) = 0;
      }
      iVar4 = FUN_ram_4202939a(1,0x198);
      if (iVar4 == 0) {
        FUN_ram_4206e0e0(param_1,2,0x50);
        iVar3 = -0x7f00;
      }
      else {
        FUN_ram_42071c64();
        if ((param_1[0x1d] == 0x16) && (pcVar6 = (char *)param_1[0x1b], *pcVar6 == '\v')) {
          if (((uint)param_1[0x20] < 10) ||
             ((pcVar6[4] != '\0' ||
              (param_1[0x20] !=
               ((uint)(*(ushort *)(pcVar6 + 5) >> 8) | (*(ushort *)(pcVar6 + 5) & 0xff) << 8) + 7)))
             ) {
LAB_ram_4207016c:
            FUN_ram_4206e0e0(param_1,2,0x32);
            iVar3 = -0x7300;
          }
          else {
            uVar8 = 7;
            do {
              while( true ) {
                uVar9 = param_1[0x20];
                if (uVar9 <= uVar8) {
                  iVar3 = FUN_ram_4206ff00(param_1,uVar1,iVar4,*(undefined4 *)(param_1[0xe] + 0xc),0
                                          );
                  if (iVar3 != 0) goto LAB_ram_42070148;
                  *(int *)(param_1[0xd] + 0x60) = iVar4;
                  goto LAB_ram_420701d2;
                }
                uVar7 = uVar8 + 3;
                if (uVar9 < uVar7) goto LAB_ram_4207016c;
                pcVar6 = (char *)(uVar8 + param_1[0x1b]);
                if (*pcVar6 != '\0') {
                  FUN_ram_4206e0e0(param_1,2,0x2b);
                  iVar3 = -0x7a00;
                  goto LAB_ram_42070148;
                }
                uVar2 = *(ushort *)(pcVar6 + 1);
                uVar8 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
                if ((uVar8 < 0x80) || (uVar8 = uVar7 + uVar8, uVar9 < uVar8)) goto LAB_ram_4207016c;
                iVar3 = FUN_ram_42072582(iVar4,param_1[0x1b] + uVar7);
                if (iVar3 == -0x2580) {
                  uVar5 = 0x2b;
                  goto LAB_ram_42070256;
                }
                if (-0x2580 < iVar3) break;
                if (iVar3 == -0x2880) {
                  uVar5 = 0x50;
                  goto LAB_ram_42070256;
                }
                if (iVar3 != -0x262e) goto LAB_ram_42070252;
              }
            } while (iVar3 == 0);
LAB_ram_42070252:
            uVar5 = 0x2a;
LAB_ram_42070256:
            FUN_ram_4206e0e0(param_1,2,uVar5);
          }
        }
        else {
          FUN_ram_4206e0e0(param_1,2,10);
          iVar3 = -0x7700;
        }
LAB_ram_42070148:
        FUN_ram_42071c72(iVar4);
        FUN_ram_420293a0(iVar4);
      }
    }
  }
  else {
LAB_ram_420701d2:
    iVar3 = 0;
    param_1[1] = param_1[1] + 1;
  }
  return iVar3;
}

