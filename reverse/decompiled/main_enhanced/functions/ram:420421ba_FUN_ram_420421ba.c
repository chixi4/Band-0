
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420421ba(uint *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 extraout_a3;
  
  iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x80c))(param_2 + 2);
  uVar3 = *(ushort *)((int)param_1 + 0x5e);
  if (((*(char *)((int)param_1 + 0xb) != '\x01') &&
      (iVar6 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))(), (*(byte *)(iVar6 + 0x65) & 4) == 0)) &&
     (0x7ffe < (iVar5 - (uint)uVar3 & 0xffff))) {
    if ((char)param_1[0x14] == '\t') {
      (**(code **)(_DAT_ram_3fcdfec4 + 0x68))(param_1 + 0x3c);
    }
    cVar2 = param_2[1];
    uVar7 = (**(code **)(_DAT_ram_3fcdfecc + 0x42c))(*param_2);
    uVar8 = (**(code **)(_DAT_ram_3fcdfecc + 0x42c))(cVar2);
    if ((((uVar7 | uVar8) & 0xff) == 0) ||
       (((param_1[10] >> 4 & 3) == uVar8 && ((param_1[10] >> 6 & 3) == uVar7)))) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x440))(param_1);
    }
    else {
      (**(code **)(_DAT_ram_3fcdfecc + 0xa00))
                (0x7034,*(ushort *)((int)param_1 + 0x5e) | 0x30000,iVar5,extraout_a3,0x30000,
                 *(code **)(_DAT_ram_3fcdfecc + 0xa00));
      param_1[10] = param_1[10] & 0xfffff0ff | (uVar8 & 3) << 8 | (uVar7 & 3) << 10;
      iVar6 = _DAT_ram_3fcdfecc;
      *(short *)(param_1 + 0xb) = (short)iVar5;
      (**(code **)(iVar6 + 3000))(param_1);
    }
    return 0xff;
  }
  if (*(char *)((int)param_1 + 0xb) == '\x01') {
    return 7;
  }
  if ((char)param_1[0x14] == '\t') {
    (**(code **)(_DAT_ram_3fcdfec4 + 0x68))(param_1 + 0x3c);
  }
  cVar2 = *param_2;
  cVar1 = param_2[1];
  sVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x80c))(param_2 + 2);
  if (cVar2 != '\0' || cVar1 != '\0') {
    uVar7 = (**(code **)(_DAT_ram_3fcdfecc + 0x42c))(cVar2);
    uVar8 = (**(code **)(_DAT_ram_3fcdfecc + 0x42c))(cVar1);
    if ((((uVar7 | uVar8) & 0xff) != 0) &&
       ((uVar8 != (param_1[10] >> 4 & 3) || (uVar7 != (param_1[10] >> 6 & 3))))) {
      if (0x7ffe < (ushort)(sVar4 - *(short *)((int)param_1 + 0x5e))) {
        (**(code **)(_DAT_ram_3fcdfed0 + 0x244))(param_1,0x28);
        return 0xff;
      }
      param_1[10] = (uVar7 & 3) << 10 | (uVar8 & 3) << 8 | param_1[10] & 0xfffff0ff;
      *(short *)(param_1 + 0xb) = sVar4;
      *param_1 = *param_1 | 0x800000;
      return 0xff;
    }
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0x440))(param_1);
  return 0xff;
}

