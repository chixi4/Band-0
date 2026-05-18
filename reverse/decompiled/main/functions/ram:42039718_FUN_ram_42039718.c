
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42039718(void)

{
  undefined4 extraout_a1;
  undefined4 uVar1;
  undefined4 extraout_a2;
  undefined4 uVar2;
  undefined4 extraout_a2_00;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = 0;
  (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  uVar1 = extraout_a1;
  uVar2 = extraout_a2;
  do {
    iVar3 = iVar5 * 4;
    iVar5 = iVar5 + 1;
    iVar3 = *(int *)(iVar3 + *(int *)(_DAT_ram_3fcdff68 + 8));
    (**(code **)(_DAT_ram_3fcdfecc + 0x5e4))
              (iVar3,uVar1,uVar2,*(code **)(_DAT_ram_3fcdfecc + 0x5e4));
    if (*(int *)(iVar3 + 0x3c) != 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x904))(*(int *)(iVar3 + 0x3c));
      *(undefined4 *)(iVar3 + 0x3c) = 0;
    }
    iVar4 = _DAT_ram_3fcdfecc;
    if (*(int *)(iVar3 + 0x44) != 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x904))(*(int *)(iVar3 + 0x44));
      iVar4 = _DAT_ram_3fcdfecc;
      *(undefined4 *)(iVar3 + 0x44) = 0;
    }
    (**(code **)(iVar4 + 0x5ec))(iVar3);
    if (*(int *)(iVar3 + 0xe8) != 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x904))(*(int *)(iVar3 + 0xe8));
      *(undefined4 *)(iVar3 + 0xe8) = 0;
    }
    (**(code **)(_DAT_ram_3fcdfecc + 0x5d4))(iVar3);
    uVar6 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar2 = extraout_a2_00;
  } while (iVar5 <= (int)(uint)*(ushort *)((int)uVar6 + 0x42));
  return;
}

