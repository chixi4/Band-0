
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420451c8(void)

{
  int iVar1;
  int iStack_24;
  
  if (*(char *)(_DAT_ram_3fcdfebc + 8) == '\0') {
    FUN_ram_4039c11e(_DAT_ram_3fcdfebc + 0x94,&DAT_ram_3c0f707c,0x10);
    FUN_ram_4039c11e(_DAT_ram_3fcdfebc + 0xa4,"% \" \" \" \" \" \" ",0x10);
    iVar1 = _DAT_ram_3fcdfebc;
    *(undefined **)(_DAT_ram_3fcdfebc + 0xe) = &sedeleg;
    *(undefined2 *)(iVar1 + 0x10) = 1;
    *(undefined1 *)(iVar1 + 9) = 0x28;
    _DAT_ram_60045ffc = 1;
    _DAT_ram_60045200 = 0x93;
    _DAT_ram_60045304 = _DAT_ram_60045304 & 0xffe20000;
    _DAT_ram_60045308 = 0xffffffff;
    _DAT_ram_60045510 = 3;
    _DAT_ram_60045514 = 0x108;
    _DAT_ram_60045518 = 0x20300ff;
    (**(code **)(_DAT_ram_3fcdfed0 + 0x5c4))(DAT_ram_3fcdfe58 + -1);
    _DAT_ram_600458a0 = _DAT_ram_3fcdfebc;
    _DAT_ram_6004552c = 0;
    _DAT_ram_60045530 = 1;
    _DAT_ram_60045534 = 0x103;
    _DAT_ram_60045538 = 0x65b;
    _DAT_ram_60045844 = 0x3fc00000;
    *(undefined4 *)(_DAT_ram_3fcdfebc + 0x70) = 1;
    *(undefined4 *)(_DAT_ram_600458a0 + 0x74) = 1;
    *(undefined4 *)(_DAT_ram_600458a0 + 0x6c) = 1;
    _DAT_ram_600458a4 = 0x2020202;
    _DAT_ram_600458a8 = 0x2020202;
    _DAT_ram_600458a0 = _DAT_ram_600458a0 + 0x6c;
    _DAT_ram_600458ac = 2;
    _DAT_ram_6004585c = 8;
    _DAT_ram_60045654 = _DAT_ram_60045654 & 0xffff80ff | 0x8100;
    (**(code **)(_DAT_ram_3fcdfed0 + 0x424))();
    _DAT_ram_6004b004 = 0x8000000;
    _DAT_ram_6004c000 = (uint)&iStack_24 >> 0x14;
    _DAT_ram_6004b804 = 1;
    _DAT_ram_6004b80c = 1;
    _DAT_ram_6004b83c = 3;
    _DAT_ram_6004b838 = 0;
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    _DAT_ram_6004b840 = *(byte *)(iVar1 + 0x60) - 1 | 0x20000;
    iStack_24 = (**(code **)(_DAT_ram_3fcdfec8 + 4))
                          (4,0,*(undefined4 *)(_DAT_ram_3fcdfed0 + 0x404),0,_DAT_ram_3fcdfebc + 4,
                           *(code **)(_DAT_ram_3fcdfec8 + 4));
    if (iStack_24 != 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0x589,L" \"$(0($\"!",iStack_24,0);
    }
    *(undefined1 *)(_DAT_ram_3fcdfebc + 8) = 1;
  }
  return 0;
}

