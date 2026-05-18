
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42039854(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_a3;
  undefined4 in_a4;
  code *pcVar4;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))
                    (&DAT_ram_3fcdff68,0x20,1,in_a3,in_a4,*(code **)(_DAT_ram_3fcdfecc + 0x97c));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdff68 + 0x10,0xc,1);
    if (iVar1 == 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
      iVar1 = _DAT_ram_3fcdff68;
      pcVar4 = *(code **)(_DAT_ram_3fcdfecc + 0x97c);
      iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
      iVar2 = (*pcVar4)(iVar1 + 4,0x19c,*(short *)(iVar2 + 0x42) + 1);
      iVar1 = _DAT_ram_3fcdff68;
      if (*(int *)(_DAT_ram_3fcdff68 + 4) != 0) {
        pcVar4 = *(code **)(_DAT_ram_3fcdfecc + 0x980);
        iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
        iVar2 = (*pcVar4)(iVar1 + 8,iVar1 + 4,0x19c,*(short *)(iVar2 + 0x42) + 1);
      }
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = 0xfffffffd;
      }
    }
    else {
      uVar3 = 0xfffffffe;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

