
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420375a8(int param_1)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  
  pcVar2 = *(char **)(_DAT_ram_3fcdfeb8 + 0xc);
  if (*pcVar2 == '\0') {
    iVar1 = 0x16;
    if (param_1 == 5) {
      pcVar2[2] = '\x01';
      pcVar2[1] = '\a';
      iVar1 = _DAT_ram_3fcdfecc;
      *(undefined1 **)(pcVar2 + 0x10) = &DAT_ram_6004e000;
      iVar1 = (**(code **)(iVar1 + 0x114))(0x16);
      if ((*(int *)(iVar1 + 0x18) == 0x8000) && (*(int *)(iVar1 + 0x1c) == 0)) {
        _DAT_ram_6004e04c = 0;
      }
      else {
        _DAT_ram_6004e04c = 4;
      }
      _DAT_ram_6004e004 = 1;
      _DAT_ram_6004e008 = 1;
      _DAT_ram_6004e014 = 0xffffffff;
      _DAT_ram_6004e034 = 0xffffffff;
      _DAT_ram_6004e000 = 1;
      _DAT_ram_6004e010 = 2;
      pcVar3 = *(code **)(_DAT_ram_3fcdfecc + 0x89c);
      *_DAT_ram_3fcdfeb8 = 1;
      iVar1 = (*pcVar3)();
      iVar1 = -(uint)(iVar1 != 0);
    }
    return iVar1;
  }
  return 0x16;
}

