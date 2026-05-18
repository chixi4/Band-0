
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203fb26(uint param_1,byte *param_2,byte *param_3,undefined4 param_4,undefined4 param_5
                     )

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 *puVar10;
  int *piVar11;
  byte *pbVar12;
  uint *puVar13;
  char cStack_3e;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 auStack_34 [3];
  
  puVar10 = *(undefined4 **)(param_3 + 0x10);
  uStack_38 = 0;
  auStack_34[0] = 0xffffffff;
  pbVar12 = (byte *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    pbVar12 = (byte *)*puVar10;
  }
  iVar4 = *(int *)(param_3 + 0x18);
  piVar11 = *(int **)(_DAT_ram_3fcdff64 + 0x10);
  if (iVar4 == 0) {
    if (piVar11 == (int *)0x0) goto LAB_ram_4203fcc6;
    (**(code **)(_DAT_ram_3fcdfed0 + 0x1ac))
              (piVar11,param_3,param_2,param_4,param_5,*(code **)(_DAT_ram_3fcdfed0 + 0x1ac));
    uVar2 = *(ushort *)(param_3 + 6);
    if ((uVar2 & 0x80) == 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x6011,0);
      goto LAB_ram_4203fc12;
    }
LAB_ram_4203fba2:
    if ((uVar2 & 0x100) == 0) {
      if (*piVar11 << 0xf < 0) {
        if (pbVar12 != (byte *)0x0) {
          param_1 = *pbVar12 & 0xf;
          param_2 = pbVar12;
        }
        iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x280))
                          (param_1,param_2,param_3,&uStack_3c,&cStack_3e,&uStack_38,&uStack_3d,
                           auStack_34);
        if (iVar5 == 0) {
          bVar1 = *(byte *)((int)piVar11 + 0xb1);
          iVar5 = _DAT_ram_3fcdff6c + 6;
          if ((bVar1 & 1) == 0) {
            iVar5 = _DAT_ram_3fcdff6c;
          }
          puVar13 = *(uint **)(param_3 + 0x14);
          if ((((bVar1 & 2) == 0) || (puVar13 == (uint *)0x0)) || ((*puVar13 & 3) == 0)) {
            *(undefined1 *)(piVar11 + 0x2c) = 1;
            FUN_ram_4039c11e(*(int *)(_DAT_ram_3fcdfee0 + 0xc) + 0xc,iVar5,6);
            iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0xb4))(uStack_3c,cStack_3e);
            puVar6 = puVar13;
            if (iVar5 != 0) goto joined_r0x4203fec0;
          }
          else {
            uVar8 = (**(code **)(_DAT_ram_3fcdfecc + 0x1c4))
                              (puVar13,1,1,bVar1 & 1,_DAT_ram_3fcdff6c,
                               *(code **)(_DAT_ram_3fcdfecc + 0x1c4));
            FUN_ram_4039c11e(*(int *)(_DAT_ram_3fcdfee0 + 0xc) + 0xc,uVar8,6);
            puVar6 = (uint *)(**(code **)(_DAT_ram_3fcdfecc + 0xb4))(uStack_3c,cStack_3e);
joined_r0x4203fec0:
            if ((puVar6 != (uint *)0x0) &&
               (iVar7 = (**(code **)(_DAT_ram_3fcdfecc + 0x1b4))(), iVar5 = _DAT_ram_3fcdfecc,
               iVar7 != 0)) {
              cStack_3e = ((byte)*(undefined2 *)((int)puVar13 + 2) & 1) + 2;
              *(char *)((int)piVar11 + 0xb2) = cStack_3e;
              uVar8 = (**(code **)(iVar5 + 0x1c4))(puVar13,0,0);
              FUN_ram_4039c11e((int)piVar11 + 0xb3,uVar8,6);
              (**(code **)(_DAT_ram_3fcdfecc + 0x324))(uStack_3c);
              (**(code **)(_DAT_ram_3fcdfecc + 0x218))(puVar13,param_2 + 2);
              if (((*(byte *)(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0xf) & 0x10) == 0) &&
                 (iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0xb4))(uStack_38,uStack_3d), iVar5 != 0))
              {
                (**(code **)(_DAT_ram_3fcdfecc + 0x214))(puVar13,uStack_38);
              }
              goto LAB_ram_4203fde4;
            }
          }
          iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x338))();
          if (iVar5 != 0) {
            *(char *)((int)piVar11 + 0xb2) = cStack_3e;
            FUN_ram_4039c11e((int)piVar11 + 0xb3,uStack_3c,6);
          }
LAB_ram_4203fde4:
          (**(code **)(_DAT_ram_3fcdfecc + 0x330))(1);
          puVar3 = _DAT_ram_3fcdfea8;
          *(undefined4 *)(_DAT_ram_3fcdff64 + 0x10) = 0;
          if ((puVar3 != (undefined4 *)0x0) && (pcVar9 = (code *)*puVar3, pcVar9 != (code *)0x0)) {
            uVar8 = 1;
            if (*(char *)(piVar11[0x67] + 0x58) != '\0') {
              uVar8 = 3;
            }
            (*pcVar9)(0,uVar8,0);
          }
          if (*param_3 < 0x25) {
            (**(code **)(_DAT_ram_3fcdfecc + 0x3b8))(piVar11,1);
          }
          else {
            iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
            if (*(char *)(iVar5 + 99) == '\0') {
              (**(code **)(_DAT_ram_3fcdfecc + 0x3b8))(piVar11,0);
            }
            else {
              (**(code **)(_DAT_ram_3fcdfecc + 0x3b8))(piVar11,*param_2 >> 5 & 1);
            }
          }
          (**(code **)(_DAT_ram_3fcdfecc + 0x390))(piVar11,(int)(char)param_3[4]);
          if (iVar4 != 0) {
            (**(code **)(_DAT_ram_3fcdfecc + 0x288))(*(undefined4 *)(param_3 + 0x18));
            param_3[0x18] = 0;
            param_3[0x19] = 0;
            param_3[0x1a] = 0;
            param_3[0x1b] = 0;
          }
          if (puVar10 != (undefined4 *)0x0) {
            (**(code **)(_DAT_ram_3fcdfecc + 0x904))(puVar10);
          }
          (**(code **)(_DAT_ram_3fcdfecc + 0x364))(piVar11,param_3,param_2);
          return;
        }
        (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x6013,param_1);
      }
    }
    else {
      (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x6012,0);
    }
    if (iVar4 == 0) goto LAB_ram_4203fc12;
  }
  else {
    *(byte *)(iVar4 + 2) = *(byte *)(iVar4 + 2) | *(byte *)(iVar4 + 1);
    if (piVar11 == (int *)0x0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x288))(iVar4);
      param_3[0x18] = 0;
      param_3[0x19] = 0;
      param_3[0x1a] = 0;
      param_3[0x1b] = 0;
LAB_ram_4203fcc6:
      if (puVar10 != (undefined4 *)0x0) {
        (**(code **)(_DAT_ram_3fcdfecc + 0x904))(puVar10);
      }
      (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x6010,0);
      return;
    }
    (**(code **)(_DAT_ram_3fcdfed0 + 0x1ac))
              (piVar11,param_3,param_2,param_4,*(byte *)(iVar4 + 1),
               *(code **)(_DAT_ram_3fcdfed0 + 0x1ac));
    uVar2 = *(ushort *)(param_3 + 6);
    if ((uVar2 & 0x80) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
      if ((*(byte *)(iVar4 + 2) & 0x20) == 0) goto LAB_ram_4203fba2;
    }
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x6011,uVar8);
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0x288))(*(undefined4 *)(param_3 + 0x18));
  param_3[0x18] = 0;
  param_3[0x19] = 0;
  param_3[0x1a] = 0;
  param_3[0x1b] = 0;
LAB_ram_4203fc12:
  if (puVar10 != (undefined4 *)0x0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x904))(puVar10);
  }
  return;
}

