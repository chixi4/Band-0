
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203ec9e(void)

{
  int iVar1;
  code *pcVar2;
  
  FUN_ram_4039c11e(*(undefined4 *)(_DAT_ram_3fcdff6c + 0x20),*(undefined4 *)(_DAT_ram_3fcb6a20 + 4),
                   0x70);
  (**(code **)(_DAT_ram_3fcdfecc + 0x620))(0);
  (**(code **)(_DAT_ram_3fcdfecc + 0x1c))(0);
  (**(code **)(_DAT_ram_3fcdfecc + 0xa0c))(1);
  (**(code **)(_DAT_ram_3fcdfecc + 0x298))(0);
  pcVar2 = *(code **)(_DAT_ram_3fcdfecc + 0x114);
  *(undefined4 *)(_DAT_ram_3fcdff6c + 0x30) = 0;
  _DAT_ram_3fcdfe52 = 0;
  iVar1 = (*pcVar2)();
  if (*(char *)(iVar1 + 0x4b) != '\0') {
    (*(code *)&SUB_ram_40012660)(1,1,1);
    (**(code **)(_DAT_ram_3fcdfecc + 0xa0c))(0);
    (**(code **)(_DAT_ram_3fcdfecc + 200))(0xff);
    (**(code **)(_DAT_ram_3fcdfecc + 0xab4))(0xffffffff);
    DAT_ram_3fcdfe66 = 1;
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    pcVar2 = *(code **)(_DAT_ram_3fcdfecc + 0x114);
    *(short *)(iVar1 + 0x24) = *(short *)(iVar1 + 0x24) + -5;
    iVar1 = (*pcVar2)();
    *(undefined1 *)(iVar1 + 0x62) = 1;
  }
  if (_DAT_ram_3fcdfee0 != 0) {
    (*(code *)&SUB_ram_40010488)(_DAT_ram_3fcb6a14 + 8,0,5);
    iVar1 = _DAT_ram_3fcb6a14;
    *(undefined1 *)(_DAT_ram_3fcb6a14 + 0xc) = 0xe0;
    (*(code *)&SUB_ram_40010488)(iVar1 + 0xd,0,5);
    *(undefined1 *)(_DAT_ram_3fcb6a14 + 0x11) = 0xe0;
  }
  return;
}

