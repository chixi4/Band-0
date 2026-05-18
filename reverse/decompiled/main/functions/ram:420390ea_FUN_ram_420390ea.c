
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420390ea(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  code *pcVar7;
  
  if (param_2 < 3) {
    return 0x12;
  }
  if (0xfc < (byte)param_1[2]) {
    return 0x12;
  }
  if ((uint)(byte)param_1[2] != param_2 - 3) {
    return 0x12;
  }
  iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x5cc))(*param_1);
  if (iVar4 == 0) {
    return 0x42;
  }
  if (-1 < (int)((uint)*(ushort *)(iVar4 + 10) << 0x14)) {
    return 0xc;
  }
  bVar6 = param_1[1];
  if (bVar6 != 2) {
    if (2 < bVar6) {
      if (bVar6 != 3) {
        if (bVar6 != 4) {
          return 0x12;
        }
        if (_DAT_ram_3fcdfe60 < 0xc) {
          return 0x12;
        }
        if ((*(byte *)(iVar4 + 0x108) & 1) == 0) {
          return 0x12;
        }
        if (param_1[2] != '\0') {
          return 0x12;
        }
        if (*(int *)(iVar4 + 0xe8) == 0) {
          return 0x12;
        }
        if (*(short *)(*(int *)(iVar4 + 0xe8) + 0x10) == 0) {
          return 0x12;
        }
        if ((*(int *)(iVar4 + 0xec) != 0) && (*(short *)(*(int *)(iVar4 + 0xec) + 0x10) == 0)) {
          return 0x12;
        }
        if ((*(byte *)(iVar4 + 0x108) & 0x10) != 0) {
          uVar3 = *(ushort *)(iVar4 + 0xda);
          do {
            uVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x7dc))();
          } while ((uVar3 & 0xfff) == (uVar2 & 0xfff));
          *(byte *)(iVar4 + 0x108) = *(byte *)(iVar4 + 0x108) | 0x20;
          *(ushort *)(iVar4 + 0x196) = uVar2 & 0xfff | *(ushort *)(iVar4 + 0xda) & 0xf000;
          return 0;
        }
        return 0;
      }
      uVar3 = (ushort)(byte)param_1[2];
      uVar1 = 1;
      bVar6 = 3;
      goto LAB_ram_42039206;
    }
    if (bVar6 != 0) {
      if (bVar6 != 1) {
        return 0x12;
      }
      bVar6 = *(byte *)(iVar4 + 0x108) & 1;
      if ((*(byte *)(iVar4 + 0x108) & 1) != 0) {
        return 0xc;
      }
      uVar3 = (ushort)(byte)param_1[2];
      if (uVar3 == 0) {
        return 0x12;
      }
      uVar1 = 1;
      goto LAB_ram_42039206;
    }
  }
  bVar6 = *(byte *)(iVar4 + 0x108) & 1;
  if ((*(byte *)(iVar4 + 0x108) & 1) != 0) {
    return 0xc;
  }
  if (((-1 < (int)((uint)*(ushort *)(iVar4 + 10) << 0x13)) || (*(int *)(iVar4 + 0xe8) == 0)) ||
     ((byte)param_1[2] == 0)) {
    return 0x12;
  }
  uVar1 = 0;
  uVar3 = (ushort)(byte)param_1[2] + *(short *)(*(int *)(iVar4 + 0xe8) + 0x10);
LAB_ram_42039206:
  iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x564))
                    (uVar3,*(undefined2 *)(iVar4 + 0xfc),*(undefined2 *)(iVar4 + 0xfa),
                     *(undefined1 *)(iVar4 + 0xe5),bVar6,*(code **)(_DAT_ram_3fcdfecc + 0x564));
  if (iVar5 == 0) {
    return 0x45;
  }
  if ((*(byte *)(iVar4 + 0x108) & 2) == 0) {
    pcVar7 = *(code **)(_DAT_ram_3fcdfecc + 0x604);
    iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    (*pcVar7)(iVar4 + 0xe8,uVar1,*(undefined2 *)(iVar5 + 0x44),param_1 + 3,param_1[2]);
    if (*(int *)(iVar4 + 0xe8) == 0) {
      return 7;
    }
  }
  else {
    (**(code **)(_DAT_ram_3fcdfecc + 0x544))(iVar4,0x4000);
    pcVar7 = *(code **)(_DAT_ram_3fcdfecc + 0x604);
    iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    (*pcVar7)(iVar4 + 0xec,1,*(undefined2 *)(iVar5 + 0x44),param_1 + 3,param_1[2]);
    if (*(int *)(iVar4 + 0xec) == 0) {
      return 7;
    }
    (**(code **)(_DAT_ram_3fcdfecc + 0x548))(iVar4,0x4000);
  }
  if ((byte)param_1[1] - 2 < 2) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x544))(iVar4,0x1000);
    return 0;
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0x548))(iVar4,0x1000);
  return 0;
}

