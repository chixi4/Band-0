
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203d192(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  int in_a5;
  code *pcVar10;
  int iVar11;
  byte *pbVar12;
  int unaff_s3;
  byte *pbVar13;
  byte *pbVar14;
  int unaff_s11;
  undefined4 uStack00000008;
  
  iVar11 = *(int *)(param_1 + 0x94) - (uint)*(byte *)(in_a5 + 4);
  *(int *)(unaff_s3 + 0xfc) = iVar11;
  iVar4 = _DAT_ram_3fcdfed0;
  iVar3 = unaff_s3 + 0xf8;
  if (*(char *)(unaff_s3 + 0xb) == '\x02') {
    iVar11 = (**(code **)(_DAT_ram_3fcdfed0 + 0x584))(*(undefined4 *)(unaff_s3 + 0xac));
    *(undefined1 *)(unaff_s3 + 0xfa) = 0;
    iVar4 = _DAT_ram_3fcdfed0;
    iVar11 = (*(int *)(unaff_s3 + 0xfc) + -1) - iVar11;
    *(int *)(unaff_s3 + 0xfc) = iVar11;
  }
  else {
    *(undefined1 *)(unaff_s3 + 0xfa) = *(undefined1 *)(unaff_s3 + 0x99);
  }
  pcVar10 = *(code **)(iVar4 + 0x56c);
  *(undefined4 *)(unaff_s3 + 0x100) = *(undefined4 *)(unaff_s3 + 0x78);
  iVar4 = (*pcVar10)();
  if (iVar11 - iVar4 < 0) {
    uVar5 = *(undefined4 *)(unaff_s3 + 0xfc);
    pcVar10 = *(code **)(_DAT_ram_3fcdfecc + 0xa00);
    uVar6 = (**(code **)(_DAT_ram_3fcdfed0 + 0x56c))();
    (*pcVar10)(0x702a,uVar5,uVar6);
    uStack00000008 = 0xffffffff;
  }
  else {
    uVar5 = (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
    iVar4 = (**(code **)(_DAT_ram_3fcdfed0 + 0x398))(iVar3);
    if (iVar4 == 0) {
      pbVar12 = (byte *)0x0;
      pbVar14 = (byte *)0x0;
      (**(code **)(_DAT_ram_3fcdfed0 + 0x57c))(**(undefined4 **)(unaff_s11 + -0x90));
      iVar4 = *(int *)(unaff_s11 + -0x90);
      pbVar13 = *(byte **)(iVar4 + 8);
      if (pbVar13 == (byte *)0x0) {
        piVar8 = *(int **)(iVar4 + 0xc);
        *(undefined4 *)(unaff_s3 + 0x10c) = 0;
        *(int **)(unaff_s3 + 0x110) = piVar8;
        *piVar8 = iVar3;
        *(int *)(iVar4 + 0xc) = unaff_s3 + 0x10c;
        *(undefined1 *)(unaff_s3 + 0xf9) = 1;
      }
      else {
        do {
          iVar4 = (**(code **)(_DAT_ram_3fcdfed0 + 0x38c))(iVar3,pbVar13);
          if (iVar4 != 0) {
            bVar1 = *pbVar13;
            if (bVar1 == 3) {
              iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x398))
                                (*(undefined4 *)(unaff_s3 + 0x104),*(undefined4 *)(pbVar13 + 0xc));
              if (iVar4 != 0) {
                bVar1 = *pbVar13;
                goto joined_r0x4203d382;
              }
            }
            else {
joined_r0x4203d382:
              if ((bVar1 != 7) ||
                 (iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0xb68))
                                    (*(undefined4 *)(unaff_s3 + 0x104),
                                     *(undefined4 *)(pbVar13 + 0xc)), iVar4 != 0)) {
                pbVar12 = pbVar13;
                if (pbVar14 == (byte *)0x0) {
                  pbVar14 = pbVar13;
                }
                goto LAB_ram_4203d246;
              }
            }
            uStack00000008 = 0xffffffff;
            iVar4 = *(int *)(*(int *)(unaff_s11 + -0x90) + 8);
            goto joined_r0x4203d3aa;
          }
          if (*(int *)(unaff_s3 + 0x100) - *(int *)(pbVar13 + 4) < 1) {
            piVar8 = *(int **)(pbVar13 + 0x18);
            *(byte **)(unaff_s3 + 0x10c) = pbVar13;
            *(int **)(unaff_s3 + 0x110) = piVar8;
            *piVar8 = iVar3;
            *(int *)(pbVar13 + 0x18) = unaff_s3 + 0x10c;
            goto LAB_ram_4203d264;
          }
LAB_ram_4203d246:
          pbVar13 = *(byte **)(pbVar13 + 0x14);
        } while (pbVar13 != (byte *)0x0);
        piVar8 = *(int **)(unaff_s11 + -0x90);
        *(undefined4 *)(unaff_s3 + 0x10c) = 0;
        piVar7 = (int *)piVar8[3];
        *(int **)(unaff_s3 + 0x110) = piVar7;
        *piVar7 = iVar3;
        piVar8[3] = unaff_s3 + 0x10c;
LAB_ram_4203d264:
        *(undefined1 *)(unaff_s3 + 0xf9) = 1;
        do {
          if (pbVar14 == (byte *)0x0) break;
          pbVar13 = *(byte **)(pbVar14 + 0x14);
          (**(code **)(_DAT_ram_3fcdfecc + 0xa00))
                    (0x702c,*pbVar14,*(undefined4 *)(pbVar14 + 4),piVar8,
                     *(code **)(_DAT_ram_3fcdfecc + 0xa00));
          bVar1 = *pbVar14;
          if (bVar1 == 4) {
            (**(code **)(_DAT_ram_3fcdfecc + 0x2b4))(*(undefined4 *)(pbVar14 + 0xc));
LAB_ram_4203d29e:
            piVar8 = *(int **)(pbVar14 + 0x14);
            puVar9 = *(undefined4 **)(pbVar14 + 0x18);
            if (piVar8 == (int *)0x0) goto LAB_ram_4203d306;
LAB_ram_4203d2a8:
            piVar8[6] = (int)puVar9;
            **(undefined4 **)(pbVar14 + 0x18) = piVar8;
            pbVar14[1] = 0;
          }
          else {
            if (bVar1 < 5) {
              if (bVar1 == 1) {
                (**(code **)(_DAT_ram_3fcdfed0 + 0x5dc))(*(undefined4 *)(pbVar14 + 0xc));
              }
              else {
                if (bVar1 != 3) goto LAB_ram_4203d438;
                (**(code **)(_DAT_ram_3fcdfecc + 0x90))(*(int *)(pbVar14 + 0xc) + 0xbc);
              }
              goto LAB_ram_4203d29e;
            }
            if (bVar1 == 6) {
              (**(code **)(_DAT_ram_3fcdfed0 + 8))(*(undefined4 *)(pbVar14 + 0xc));
              goto LAB_ram_4203d29e;
            }
            if (bVar1 != 7) {
LAB_ram_4203d438:
              (**(code **)(_DAT_ram_3fcdfecc + 0x110))
                        (0x115,&DAT_ram_3c0f6cbc,0,0,*(code **)(_DAT_ram_3fcdfecc + 0x110));
              goto LAB_ram_4203d29e;
            }
            (**(code **)(_DAT_ram_3fcdfed0 + 0x2b4))(*(undefined4 *)(pbVar14 + 0xc));
            piVar8 = *(int **)(pbVar14 + 0x14);
            puVar9 = *(undefined4 **)(pbVar14 + 0x18);
            if (piVar8 != (int *)0x0) goto LAB_ram_4203d2a8;
LAB_ram_4203d306:
            *(undefined4 **)(*(int *)(unaff_s11 + -0x90) + 0xc) = puVar9;
            *puVar9 = piVar8;
            pbVar14[1] = 0;
          }
          bVar2 = pbVar12 != pbVar14;
          pbVar14 = pbVar13;
        } while (bVar2);
      }
      iVar4 = *(int *)(*(int *)(unaff_s11 + -0x90) + 8);
      uStack00000008 = 0;
joined_r0x4203d3aa:
      if (iVar3 == iVar4) {
        (**(code **)(_DAT_ram_3fcdfed0 + 0x554))(iVar4);
        (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))(uVar5);
      }
      else {
        (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))(uVar5);
      }
      if (iVar4 == 0) {
        (**(code **)(_DAT_ram_3fcdfecc + 0x110))(300,&DAT_ram_3c0f6cbc,0,0);
      }
      (**(code **)(_DAT_ram_3fcdfed0 + 0x578))
                (**(undefined4 **)(unaff_s11 + -0x90),*(undefined4 *)(iVar4 + 4));
    }
    else {
      uStack00000008 = 0xffffffff;
      (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))(uVar5);
      (**(code **)(_DAT_ram_3fcdfecc + 0xa00))
                (0x702b,*(undefined4 *)(unaff_s3 + 0xfc),*(undefined1 *)(unaff_s3 + 0xb));
    }
  }
  return uStack00000008;
}

