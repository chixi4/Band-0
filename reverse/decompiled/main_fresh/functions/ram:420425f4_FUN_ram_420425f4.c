
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420425f4(int param_1,undefined1 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  iVar3 = _DAT_ram_3fcdfecc;
  if ((*(byte *)(iVar2 + 0x65) & 1) == 0) {
    if (*(char *)(param_1 + 0xb) == '\x01') {
      return 7;
    }
    *(undefined1 *)(param_1 + 0x176) = *param_2;
    uVar1 = (**(code **)(iVar3 + 0x80c))(param_2 + 1);
    iVar3 = _DAT_ram_3fcdfecc;
    *(undefined2 *)(param_1 + 0x178) = uVar1;
    uVar1 = (**(code **)(iVar3 + 0x80c))(param_2 + 3);
    iVar3 = _DAT_ram_3fcdfecc;
    *(undefined2 *)(param_1 + 0x17a) = uVar1;
    uVar1 = (**(code **)(iVar3 + 0x80c))(param_2 + 5);
    iVar3 = _DAT_ram_3fcdfecc;
    *(undefined2 *)(param_1 + 0x17c) = uVar1;
    uVar1 = (**(code **)(iVar3 + 0x80c))(param_2 + 7);
    iVar3 = _DAT_ram_3fcdfecc;
    *(undefined2 *)(param_1 + 0x17e) = uVar1;
    iVar3 = (**(code **)(iVar3 + 0x80c))(param_2 + 9);
    uVar4 = (uint)*(ushort *)(param_1 + 0x5e);
    *(short *)(param_1 + 0x180) = (short)iVar3;
    uVar5 = iVar3 - uVar4 & 0xffff;
    if (0x7ffe < uVar5) {
      (**(code **)(_DAT_ram_3fcdfecc + 0xa00))
                (0x7034,uVar4 | 0x10000,iVar3,uVar4,uVar5,*(code **)(_DAT_ram_3fcdfecc + 0xa00));
      uVar6 = 0xff;
      (**(code **)(_DAT_ram_3fcdfecc + 0xbb4))(param_1);
      goto LAB_ram_420426dc;
    }
  }
  uVar6 = FUN_ram_420424fe(param_1,param_2);
LAB_ram_420426dc:
  (**(code **)(_DAT_ram_3fcdfecc + 0xbac))(param_1);
  return uVar6;
}

