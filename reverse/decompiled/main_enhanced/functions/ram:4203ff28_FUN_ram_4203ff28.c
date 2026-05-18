
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203ff28(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  ushort uVar2;
  int unaff_s1;
  int *piVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  iVar6 = *(int *)(unaff_s1 + -0x134);
  if ((param_3 & 0x80) == 0) {
    (**(code **)(iVar6 + 0x110))(0x8ae,&DAT_ram_3c0f6de8,param_3,0,0,*(code **)(iVar6 + 0x110));
    iVar6 = *(int *)(unaff_s1 + -0x134);
  }
  piVar3 = (int *)(**(code **)(iVar6 + 0x388))(*(undefined1 *)(param_2 + 1));
  if (piVar3 == (int *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(unaff_s1 + -0x134) + 0xa00);
    (*UNRECOVERED_JUMPTABLE)
              (0xf,1,(int)*(char *)(param_2 + 2) | (uint)*(byte *)(param_2 + 1) << 0x10,0x1000,
               UNRECOVERED_JUMPTABLE);
    goto LAB_ram_4204014a;
  }
  pbVar7 = (byte *)*param_1;
  (**(code **)(_DAT_ram_3fcdfed0 + 0x200))(piVar3,param_2,pbVar7);
  bVar5 = *pbVar7;
  uVar9 = (uint)bVar5;
  uVar10 = (uint)pbVar7[1];
  uVar8 = uVar9 & 3;
  uVar11 = uVar9 & 8;
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(unaff_s1 + -0x134) + 0xa00);
  (*UNRECOVERED_JUMPTABLE)
            (0xe,(uint)*(byte *)((int)piVar3 + 0x45) << 8 | uVar10 << 0x10 | uVar11 | uVar8 << 0x18,
             (uint)*(ushort *)(piVar3 + 2) << 0x10 | (uint)*(byte *)((int)piVar3 + 0xb) << 8 | uVar9
             ,UNRECOVERED_JUMPTABLE);
  if (((bVar5 & 3) == 0) || ((uVar10 == 0 && (uVar8 != 1)))) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(unaff_s1 + -0x134) + 0xa00);
    (*UNRECOVERED_JUMPTABLE)
              (0xf,2,(uint)*(ushort *)(piVar3 + 2) << 0x10 | (uint)*(byte *)((int)piVar3 + 0xb) << 8
                     | uVar8,0x1000,UNRECOVERED_JUMPTABLE);
LAB_ram_42040110:
    UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfec4 + 100);
    uVar4 = (**(code **)(_DAT_ram_3fcdfec4 + 0x90))((uint)*(ushort *)(piVar3 + 0x22) * 10);
    (*UNRECOVERED_JUMPTABLE)(piVar3 + 0x3d,uVar4);
  }
  else {
    bVar5 = *(byte *)(piVar3 + 0x46);
    if (bVar5 < 6) {
      if (bVar5 < 4) {
LAB_ram_42040178:
        if (((bVar5 == 2) && (*piVar3 << 0xb < 0)) && (uVar10 != 0)) {
          (**(code **)(*(int *)(unaff_s1 + -0x134) + 0x348))(piVar3);
        }
      }
      else if (*(char *)((int)piVar3 + 0xb) == '\x02') goto LAB_ram_420401f2;
LAB_ram_4203fff2:
      cVar1 = *(char *)(param_2 + 2);
      *(char *)((int)piVar3 + 0xd) = cVar1;
      uVar2 = *(ushort *)(param_2 + 6);
      if ((uVar2 & 0x10) == 0) {
        *(char *)((int)piVar3 + 0x45) = (char)uVar11;
        if (uVar8 == 1) {
          if (uVar10 == 0) goto LAB_ram_42040110;
          iVar6 = *(int *)(unaff_s1 + -0x134);
          if ((uVar2 & 0x20) != 0) goto LAB_ram_420401aa;
        }
        else {
          iVar6 = *(int *)(unaff_s1 + -0x134);
          if ((uVar2 & 0x20) != 0) {
LAB_ram_420401aa:
            (**(code **)(iVar6 + 0xa00))
                      (0xf,5,(uint)*(ushort *)(piVar3 + 2) | (int)cVar1 << 0x18 |
                             (uint)*(byte *)((int)piVar3 + 0xb) << 0x10,*(code **)(iVar6 + 0xa00));
            goto LAB_ram_420401c8;
          }
          if (uVar8 == 3) {
            (**(code **)(iVar6 + 0x48c))(piVar3,param_1);
            goto LAB_ram_420400a6;
          }
        }
        uVar9 = (**(code **)(iVar6 + 0xa80))(param_1);
        if (uVar9 < 2) {
          UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(unaff_s1 + -0x134) + 0x110);
          uVar4 = (**(code **)(*(int *)(unaff_s1 + -0x134) + 0xa80))(param_1);
          (*UNRECOVERED_JUMPTABLE)(0x932,&DAT_ram_3c0f6de8,uVar4,(short)piVar3[2]);
        }
        (**(code **)(*(int *)(unaff_s1 + -0x134) + 0x920))(param_1,2);
        iVar6 = *param_1;
        (**(code **)(*(int *)(unaff_s1 + -0x134) + 0x82c))
                  (iVar6,uVar8 << 0xc | (uint)*(ushort *)(piVar3 + 2));
        (**(code **)(*(int *)(unaff_s1 + -0x134) + 0x82c))(iVar6 + 2,uVar10);
        (**(code **)(*(int *)(unaff_s1 + -0x134) + 0x48))(param_1);
LAB_ram_420400a6:
        UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfec4 + 100);
        uVar4 = (**(code **)(_DAT_ram_3fcdfec4 + 0x90))((uint)*(ushort *)(piVar3 + 0x22) * 10);
                    /* WARNING: Could not recover jumptable at 0x420400e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(piVar3 + 0x3d,uVar4);
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(unaff_s1 + -0x134) + 0xa00);
      (*UNRECOVERED_JUMPTABLE)
                (0xf,(uint)*(byte *)((int)piVar3 + 0x45) << 0x10 | uVar9 << 8 | uVar11 << 0x18 | 4,
                 (uint)*(ushort *)(piVar3 + 2) | (int)cVar1 << 0x18 |
                 (uint)*(byte *)((int)piVar3 + 0xb) << 0x10,UNRECOVERED_JUMPTABLE);
      goto LAB_ram_42040110;
    }
    if (1 < (byte)(*(char *)((int)piVar3 + 0xb) - 1U)) goto LAB_ram_4203fff2;
LAB_ram_420401f2:
    iVar6 = (**(code **)(*(int *)(unaff_s1 + -0x134) + 0x414))(param_1);
    if (iVar6 != 0) {
      bVar5 = *(byte *)(piVar3 + 0x46);
      goto LAB_ram_42040178;
    }
    (**(code **)(*(int *)(unaff_s1 + -0x134) + 0xa00))
              (0xf,(uint)*(byte *)*param_1 << 0x10 | (uint)((byte *)*param_1)[1] << 8 | 3,
               (uint)*(byte *)(piVar3 + 0x46) |
               (uint)*(ushort *)(piVar3 + 2) << 0x10 | (uint)*(byte *)((int)piVar3 + 0xb) << 8);
LAB_ram_420401c8:
    (**(code **)(_DAT_ram_3fcdfec4 + 0x68))(piVar3 + 0x3d);
    (**(code **)(_DAT_ram_3fcdfed0 + 0x244))(piVar3,0x3d);
  }
  if (*(short *)(param_2 + 6) < 0) {
    (**(code **)(_DAT_ram_3fcdfed0 + 0x1d0))(piVar3,1);
  }
LAB_ram_4204014a:
                    /* WARNING: Could not recover jumptable at 0x42040170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(unaff_s1 + -0x134) + 0x904))(param_1);
  return;
}

