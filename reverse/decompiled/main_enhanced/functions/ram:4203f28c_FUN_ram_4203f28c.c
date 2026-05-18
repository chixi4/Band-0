
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203f28c(uint *param_1)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  code *pcVar9;
  ushort uVar10;
  uint uVar11;
  
  (**(code **)(_DAT_ram_3fcdfecc + 0x358))();
  if (*(char *)((int)param_1 + 0x51) == '\0') {
LAB_ram_4203f2da:
    uVar8 = *param_1;
    if ((uVar8 & 0x40) != 0) goto LAB_ram_4203f40a;
LAB_ram_4203f2e4:
    sVar7 = (short)param_1[0x18];
    if ((uVar8 & 0x800890) != 0x10) goto LAB_ram_4203f2f8;
LAB_ram_4203f42c:
    if ((uVar8 & 1) == 0) goto LAB_ram_4203f2f8;
    uVar10 = *(short *)((int)param_1 + 0x86) + 1;
    uVar11 = (uint)uVar10;
    *(ushort *)(param_1 + 0x18) = sVar7 + uVar10;
    iVar1 = uVar11 * (uint)(ushort)param_1[0x21] * 0x4e2;
    if (uVar11 != 1) {
      iVar5 = (**(code **)(_DAT_ram_3fcdfed0 + 0x584))(iVar1);
      pcVar9 = *(code **)(_DAT_ram_3fcdfed0 + 0x580);
      param_1[0x25] = param_1[0x25] + iVar5;
      iVar5 = (*pcVar9)();
      uVar8 = *param_1;
      uVar4 = (iVar1 - iVar5) + (uint)*(byte *)((int)param_1 + 0x99);
      *(char *)((int)param_1 + 0x99) = (char)uVar4;
      goto LAB_ram_4203f320;
    }
  }
  else {
    uVar8 = *param_1;
    if ((uVar8 & 0x40) == 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x7009);
      (**(code **)(_DAT_ram_3fcdfecc + 0x4bc))(param_1);
      goto LAB_ram_4203f2da;
    }
LAB_ram_4203f40a:
    if (*(char *)((int)param_1 + 0xb) != '\x02') goto LAB_ram_4203f2e4;
    *(undefined2 *)((int)param_1 + 0x86) = 0;
    sVar7 = (short)param_1[0x18];
    if ((uVar8 & 0x800890) == 0x10) goto LAB_ram_4203f42c;
LAB_ram_4203f2f8:
    *(short *)(param_1 + 0x18) = sVar7 + 1;
  }
  uVar4 = (uint)*(byte *)((int)param_1 + 0x99) + (uint)*(byte *)((int)param_1 + 0x9a);
  param_1[0x25] = param_1[0x25] + param_1[0x27];
  *(char *)((int)param_1 + 0x99) = (char)uVar4;
  uVar11 = 1;
LAB_ram_4203f320:
  if ((uint)*(ushort *)(_DAT_ram_3fcdff6c + 0x24) <= (uVar4 & 0xff)) {
    *(char *)((int)param_1 + 0x99) = (char)uVar4 - (char)*(ushort *)(_DAT_ram_3fcdff6c + 0x24);
    param_1[0x25] = param_1[0x25] + 1;
  }
  if (((uVar8 & 0x80) != 0) && ((short)param_1[0x18] == (short)param_1[0x60])) {
    if (((param_1[0x17] & 0x40) != 0) ||
       ((((short)param_1[0x21] != *(short *)((int)param_1 + 0x17a) ||
         (*(short *)((int)param_1 + 0x86) != (short)param_1[0x5f])) ||
        ((short)param_1[0x22] != *(short *)((int)param_1 + 0x17e))))) {
      *param_1 = *param_1 | 0x100;
    }
    iVar1 = _DAT_ram_3fcdfecc;
    *(byte *)((int)param_1 + 0x4f) = *(byte *)((int)param_1 + 0x176);
    pcVar9 = *(code **)(iVar1 + 0x354);
    *(short *)((int)param_1 + 0x86) = (short)param_1[0x5f];
    *(short *)((int)param_1 + 0x8e) = (short)param_1[0x5e];
    *(short *)(param_1 + 0x21) = *(short *)((int)param_1 + 0x17a);
    param_1[0x2a] = (uint)*(byte *)((int)param_1 + 0x176) * 0x4e2;
    (*pcVar9)(param_1);
    if ((ushort)param_1[0x5e] != 0) {
      iVar5 = (uint)(ushort)param_1[0x5e] * 0x4e2;
      iVar1 = (**(code **)(_DAT_ram_3fcdfed0 + 0x584))(iVar5);
      pcVar9 = *(code **)(_DAT_ram_3fcdfed0 + 0x580);
      param_1[0x25] = param_1[0x25] + iVar1;
      iVar6 = (*pcVar9)();
      iVar1 = _DAT_ram_3fcdff6c;
      uVar8 = (iVar5 - iVar6) + (uint)*(byte *)((int)param_1 + 0x99);
      cVar3 = (char)uVar8;
      *(char *)((int)param_1 + 0x99) = cVar3;
      if ((uint)*(ushort *)(iVar1 + 0x24) <= (uVar8 & 0xff)) {
        *(char *)((int)param_1 + 0x99) = cVar3 - (char)*(ushort *)(iVar1 + 0x24);
        param_1[0x25] = param_1[0x25] + 1;
      }
    }
    uVar8 = *param_1 & 0xffffff7f;
    *param_1 = uVar8;
  }
  if (((int)(uVar8 << 0x14) < 0) &&
     ((int)(((uint)*(ushort *)((int)param_1 + 0x3a) - (uint)(ushort)param_1[0x18]) * 0x10000) >>
      0x10 < 1)) {
    uVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x4d4))(param_1 + 0xd);
    *(undefined1 *)((int)param_1 + 0x41) = uVar2;
    FUN_ram_4039c11e((int)param_1 + 0x2f,param_1 + 0xd,5);
    *param_1 = *param_1 & 0xfffff7ff;
    (**(code **)(_DAT_ram_3fcdfecc + 0x450))(param_1,1);
    uVar8 = *param_1;
  }
  iVar1 = _DAT_ram_3fcdfecc;
  if (((int)(uVar8 << 8) < 0) && ((short)param_1[0x18] == (short)param_1[0xb])) {
    uVar8 = param_1[10];
    if ((uVar8 & 0x300) != 0) {
      uVar4 = uVar8 >> 8 & 3;
      param_1[10] = uVar8 & 0xffffffcf | uVar4 << 4;
      uVar8 = (**(code **)(iVar1 + 0xa10))(uVar4,uVar8 >> 0x18 & 3);
      uVar8 = param_1[10] & 0xfffffffc | uVar8 & 3;
      param_1[10] = uVar8;
    }
    iVar1 = _DAT_ram_3fcdfecc;
    if ((uVar8 & 0xc00) != 0) {
      uVar8 = param_1[10] >> 10 & 3;
      param_1[10] = param_1[10] & 0xffffff3f | uVar8 << 6;
      uVar8 = (**(code **)(iVar1 + 0xa10))(uVar8,0);
      param_1[10] = param_1[10] & 0xfffffff3 | (uVar8 & 3) << 2;
    }
    pcVar9 = *(code **)(_DAT_ram_3fcdfecc + 0x440);
    *(ushort *)((int)param_1 + 2) = *(ushort *)((int)param_1 + 2) & 0xfd7f | 0x200;
    (*pcVar9)(param_1);
    if ((*(byte *)(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0xf) & 2) == 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x3e0))(param_1);
      iVar1 = _DAT_ram_3fcdfecc;
      if ((((param_1[10] & 0x30) == 0x30) || ((param_1[10] & 0xc0) == 0xc0)) &&
         ((*(byte *)((int)param_1 + 0x55) & 8) == 0)) {
        *(byte *)((int)param_1 + 0x55) = *(byte *)((int)param_1 + 0x55) | 8;
        pcVar9 = *(code **)(iVar1 + 0x890);
        *(undefined2 *)(param_1 + 6) = 0x4290;
        (*pcVar9)(0,param_1 + 6);
        (**(code **)(_DAT_ram_3fcdfecc + 0x424))(param_1);
      }
    }
  }
  uVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x34c))(param_1,uVar11);
  *(undefined1 *)((int)param_1 + 0x3f) = uVar2;
  if ((*param_1 & 0x40) == 0) {
    uVar8 = param_1[0x25];
  }
  else {
    uVar8 = param_1[0x25];
    if ((int)(param_1[0x1f] - uVar8) < 1) {
      (**(code **)(_DAT_ram_3fcdfecc + 0xa00))
                (0x700a,param_1[0x1f],uVar8,0x1000,*(code **)(_DAT_ram_3fcdfecc + 0xa00));
      return 0xffffffff;
    }
  }
  iVar1 = (uint)*(ushort *)(_DAT_ram_3fcdff6c + 0x26) * (uint)DAT_ram_3fcdfe66;
  if (*(char *)((int)param_1 + 0xb) == '\x02') {
    uVar8 = (**(code **)(_DAT_ram_3fcdfecc + 0x4d8))
                      (uVar8,param_1[0x28],(char)param_1[0x13],*(undefined1 *)((int)param_1 + 0x4d),
                       *(code **)(_DAT_ram_3fcdfecc + 0x4d8));
    if ((uint)(ushort)param_1[0x21] * 0x271 - 0x96 <= uVar8) {
      (**(code **)(_DAT_ram_3fcdfecc + 0xa00))(0x7007,uVar8);
      return 0xffffffff;
    }
    iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    pcVar9 = *(code **)(_DAT_ram_3fcdfed0 + 0x584);
    uVar8 = *(byte *)(iVar5 + 0x26) + uVar8;
    param_1[0x2b] = uVar8;
    iVar5 = (*pcVar9)(param_1[0x29] + uVar8);
    uVar8 = param_1[0x25];
    iVar1 = iVar1 + iVar5;
  }
  param_1[0x1e] = (iVar1 + uVar8) - (uint)*(byte *)(_DAT_ram_3fcdff70 + 4);
  return 0;
}

