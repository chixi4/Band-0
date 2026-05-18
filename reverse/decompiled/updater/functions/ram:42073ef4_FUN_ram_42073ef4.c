
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42073ef4(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_ram_3fcb640c = (*(code *)&SUB_ram_400121c0)();
  iVar2 = (*(code *)&SUB_ram_400121c8)();
  iVar1 = _DAT_ram_3fcb640c;
  if (iVar2 == 1) {
    *(undefined4 *)(_DAT_ram_3fcb640c + 0x68) = 0x40002338;
    *(undefined4 *)(iVar1 + 0x6c) = 0x4000233c;
    *(undefined4 *)(iVar1 + 0x114) = 0x400023ec;
    *(undefined4 *)(iVar1 + 300) = 0x40002404;
    *(undefined4 *)(iVar1 + 0xb4) = 0x40002388;
    *(undefined4 *)(iVar1 + 0x90) = 0x40002360;
    *(undefined4 *)(iVar1 + 0x88) = 0x40002358;
    *(undefined4 *)(iVar1 + 0x80) = 0x40002350;
    *(undefined4 *)(iVar1 + 0xa8) = 0x4000237c;
    *(undefined4 *)(iVar1 + 0x1d8) = 0x400025dc;
    *(undefined4 *)(iVar1 + 0x9c) = 0x4000236c;
    *(undefined4 *)(iVar1 + 0x5c) = 0x40002300;
    *(undefined4 *)(iVar1 + 0x10c) = 0x400023e4;
    *(undefined4 *)(iVar1 + 0x1a8) = 0x4000256c;
    *(undefined4 *)(iVar1 + 0x1cc) = 0x400025d0;
    *(undefined4 *)(iVar1 + 0xf4) = 0x400023cc;
    *(undefined4 *)(iVar1 + 0x108) = 0x403834bc;
  }
  (*(code *)&SUB_ram_400121bc)(&DAT_ram_3fcb0a0c);
  iVar1 = _DAT_ram_3fcb640c;
  *(undefined4 *)(_DAT_ram_3fcb640c + 0x4c) = 0x40383726;
  *(undefined4 *)(iVar1 + 0x2c) = 0x403836c2;
  *(undefined4 *)(iVar1 + 0x154) = 0x420651fa;
  *(undefined4 *)(iVar1 + 0x1a4) = 0x42065282;
  *(undefined4 *)(iVar1 + 0x18) = 0x42065166;
  *(undefined4 *)(iVar1 + 100) = 0x42064988;
  *(undefined4 *)(iVar1 + 0x60) = 0x40383216;
  *(undefined4 *)(iVar1 + 0x1d4) = 0x420659c8;
  *(undefined4 *)(iVar1 + 0x1b8) = 0x42066cfc;
  return;
}

