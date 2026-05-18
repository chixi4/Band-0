
undefined4 FUN_ram_420776d6(undefined4 *param_1,int *param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_88 [4];
  uint uStack_84;
  int iStack_78;
  int iStack_40;
  
  if ((param_1 != (undefined4 *)0x0) && (param_1[10] == 0)) {
    FUN_ram_42077334();
  }
  if (((param_2[0x19] & 1U) == 0) && ((*(ushort *)(param_2 + 3) & 0x200) == 0)) {
    FUN_ram_403910e0(param_2[0x16]);
  }
  if ((*(ushort *)(param_2 + 3) & 0x108) == 0x108) {
    (*(code *)&SUB_ram_40010594)(param_1,param_2);
  }
  pcVar10 = (code *)param_2[0xb];
  uVar8 = 0x1d;
  if (pcVar10 == (code *)0x0) {
LAB_ram_42077868:
    *param_1 = uVar8;
    goto LAB_ram_42077826;
  }
  if (param_4 == 1) {
    (*(code *)&SUB_ram_40010594)(param_1,param_2);
    if ((int)((uint)*(ushort *)(param_2 + 3) << 0x13) < 0) {
      iVar3 = param_2[0x15];
    }
    else {
      iVar3 = (*pcVar10)(param_1,param_2[8],0,1);
      if (iVar3 == -1) goto LAB_ram_42077826;
    }
    if ((*(ushort *)(param_2 + 3) & 4) == 0) {
      if (((*(ushort *)(param_2 + 3) & 8) != 0) && (*param_2 != 0)) {
        iVar3 = iVar3 + (*param_2 - param_2[4]);
      }
    }
    else {
      iVar3 = iVar3 - param_2[1];
      if (param_2[0xd] != 0) {
        iVar3 = iVar3 - param_2[0x10];
      }
    }
    param_3 = param_3 + iVar3;
    param_4 = 0;
    bVar1 = true;
  }
  else {
    uVar8 = 0x16;
    if ((param_4 & 0xfffffffd) != 0) goto LAB_ram_42077868;
    bVar1 = false;
    iVar3 = 0;
  }
  if (param_2[4] == 0) {
    (*(code *)&SUB_ram_400105a0)(param_1,param_2);
  }
  if (((uint)(int)(short)param_2[3] >> 1 & 0x40d) == 0) {
    if (((int)(short)param_2[3] & 0x400U) == 0) {
      if ((((pcVar10 != (code *)0x42067696) || (*(short *)((int)param_2 + 0xe) < 0)) ||
          (iVar4 = FUN_ram_42015386(param_1,(int)*(short *)((int)param_2 + 0xe),auStack_88),
          iVar4 != 0)) || ((uStack_84 & 0xf000) != 0x8000)) {
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x800;
        goto LAB_ram_420777c6;
      }
      param_2[0x14] = iStack_40;
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x400;
    }
    uVar11 = param_3;
    if (param_4 != 0) {
      iVar4 = FUN_ram_42015386(param_1,(int)*(short *)((int)param_2 + 0xe),auStack_88);
      if (iVar4 != 0) goto LAB_ram_420777c6;
      uVar11 = iStack_78 + param_3;
    }
    if (!bVar1) {
      if ((int)((uint)*(ushort *)(param_2 + 3) << 0x13) < 0) {
        iVar3 = param_2[0x15];
      }
      else {
        iVar3 = (*pcVar10)(param_1,param_2[8],0,1);
        if (iVar3 == -1) goto LAB_ram_420777c6;
      }
      iVar3 = iVar3 - param_2[1];
      if (param_2[0xd] != 0) {
        iVar3 = iVar3 - param_2[0x10];
      }
    }
    piVar5 = (int *)param_2[0xd];
    iVar4 = param_2[4];
    iVar9 = param_2[1];
    if (piVar5 == (int *)0x0) {
      iVar6 = *param_2 - iVar4;
      iVar3 = iVar3 - iVar6;
    }
    else {
      iVar6 = param_2[0xf] - iVar4;
      iVar3 = (iVar9 + iVar3) - iVar6;
      iVar9 = param_2[0x10];
    }
    if (((int)uVar11 < iVar3) || ((uint)(iVar3 + iVar9 + iVar6) <= uVar11)) {
      uVar2 = -param_2[0x14] & uVar11;
      iVar3 = (*pcVar10)(param_1,param_2[8],uVar2,0);
      if (iVar3 != -1) {
        param_2[1] = 0;
        *param_2 = param_2[4];
        if ((int *)param_2[0xd] != (int *)0x0) {
          if ((int *)param_2[0xd] != param_2 + 0x11) {
            FUN_ram_40399d4e(param_1);
          }
          param_2[0xd] = 0;
        }
        uVar12 = uVar11 - uVar2;
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xffdf;
        if (uVar11 == uVar2) goto LAB_ram_420779b0;
        iVar3 = FUN_ram_420774fc(param_1,param_2);
        if ((iVar3 == 0) && (uVar12 <= (uint)param_2[1])) {
          param_2[1] = param_2[1] - uVar12;
          *param_2 = *param_2 + uVar12;
          goto LAB_ram_420779b0;
        }
      }
      goto LAB_ram_420777c6;
    }
    *param_2 = iVar4 + (uVar11 - iVar3);
    param_2[1] = (iVar9 + iVar6) - (uVar11 - iVar3);
    if (piVar5 != (int *)0x0) {
      if (piVar5 != param_2 + 0x11) {
        FUN_ram_40399d4e(param_1);
      }
      param_2[0xd] = 0;
    }
    uVar7 = *(ushort *)(param_2 + 3) & 0xffdf;
  }
  else {
LAB_ram_420777c6:
    iVar3 = (*(code *)&SUB_ram_40010594)(param_1,param_2);
    if ((iVar3 != 0) || (iVar3 = (*pcVar10)(param_1,param_2[8],param_3,param_4), iVar3 == -1)) {
LAB_ram_42077826:
      if (((param_2[0x19] & 1U) == 0) && ((*(ushort *)(param_2 + 3) & 0x200) == 0)) {
        FUN_ram_40391168(param_2[0x16]);
      }
      return 0xffffffff;
    }
    if ((int *)param_2[0xd] != (int *)0x0) {
      if ((int *)param_2[0xd] != param_2 + 0x11) {
        FUN_ram_40399d4e(param_1);
      }
      param_2[0xd] = 0;
    }
    *param_2 = param_2[4];
    param_2[1] = 0;
    uVar7 = *(ushort *)(param_2 + 3) & 0xf7df;
  }
  *(ushort *)(param_2 + 3) = uVar7;
LAB_ram_420779b0:
  (*(code *)&SUB_ram_40010488)(param_2 + 0x17,0,8);
  if (((param_2[0x19] & 1U) == 0) && ((*(ushort *)(param_2 + 3) & 0x200) == 0)) {
    FUN_ram_40391168(param_2[0x16]);
  }
  return 0;
}

