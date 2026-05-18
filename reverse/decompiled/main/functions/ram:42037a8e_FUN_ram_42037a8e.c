
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42037a8e(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  
  _DAT_ram_60026014 = _DAT_ram_60026014 | 0xe000800;
  _DAT_ram_6004b08c = 1;
  _DAT_ram_6004ba6c = 1;
  iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x8ac))(5,0);
  if (iVar4 == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x8c0))();
    pcVar5 = *(code **)(_DAT_ram_3fcdfec8 + 0x2c);
    iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    uVar2 = *(undefined2 *)(iVar4 + 0x46);
    iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    uVar1 = *(undefined1 *)(iVar4 + 0x48);
    iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    iVar4 = (*pcVar5)(0x42027750,0x3c0acdd8,uVar2,0,uVar1,&DAT_ram_3fcb6a04,
                      *(undefined1 *)(iVar4 + 0x49));
    if (iVar4 == -1) {
      uVar3 = 0xfffffffe;
      (**(code **)(_DAT_ram_3fcdfecc + 0x8b0))(5);
    }
    else {
      (**(code **)(_DAT_ram_3fcdfecc + 200))(4);
      iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
      uVar3 = 0;
      if (*(char *)(iVar4 + 0x4b) != '\0') {
        FUN_ram_42037a0e(1);
      }
    }
  }
  else {
    uVar3 = 0xffffffff;
    if (_DAT_ram_3fcdfe00 < 1) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x8b0))(5);
    }
    else {
      (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c27fc);
      (**(code **)(_DAT_ram_3fcdfecc + 0x8b0))(5);
    }
  }
  return uVar3;
}

