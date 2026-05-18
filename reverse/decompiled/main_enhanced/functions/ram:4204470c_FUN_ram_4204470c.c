
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204470c(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_a3;
  undefined4 in_a4;
  undefined4 uVar3;
  code *pcVar4;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))
                    (&DAT_ram_3fcdfedc,0x1c,1,in_a3,in_a4,*(code **)(_DAT_ram_3fcdfecc + 0x97c));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdfedc + 0x18,8,1);
    if (iVar1 == 0) {
      iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
      iVar1 = _DAT_ram_3fcdfedc;
      if (*(char *)(iVar2 + 0xb) != '\0') {
        pcVar4 = *(code **)(_DAT_ram_3fcdfecc + 0x97c);
        iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
        iVar2 = (*pcVar4)(iVar1 + 0x10,0x88,*(undefined1 *)(iVar2 + 0xb));
        iVar1 = _DAT_ram_3fcdfedc;
        if (*(int *)(_DAT_ram_3fcdfedc + 0x10) != 0) {
          pcVar4 = *(code **)(_DAT_ram_3fcdfecc + 0x980);
          iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
          iVar2 = (*pcVar4)(iVar1 + 0x14,iVar1 + 0x10,0x88,*(undefined1 *)(iVar2 + 0xb));
        }
        if (iVar2 != 0) {
          return 0xfffffffd;
        }
      }
      iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
      iVar1 = _DAT_ram_3fcdfedc;
      uVar3 = 0;
      if (*(char *)(iVar2 + 10) != '\0') {
        pcVar4 = *(code **)(_DAT_ram_3fcdfecc + 0x97c);
        iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
        iVar2 = (*pcVar4)(iVar1 + 4,8,*(undefined1 *)(iVar2 + 10));
        iVar1 = _DAT_ram_3fcdfedc;
        if (*(int *)(_DAT_ram_3fcdfedc + 4) != 0) {
          pcVar4 = *(code **)(_DAT_ram_3fcdfecc + 0x980);
          iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
          iVar2 = (*pcVar4)(iVar1 + 8,iVar1 + 4,8,*(undefined1 *)(iVar2 + 10));
        }
        if (iVar2 != 0) {
          uVar3 = 0xfffffffc;
        }
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

