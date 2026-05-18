
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420ac558(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_ram_3fcc4c78 = (*(code *)&SUB_ram_400121c0)();
  iVar2 = (*(code *)&SUB_ram_400121c8)();
  iVar1 = _DAT_ram_3fcc4c78;
  if (iVar2 == 1) {
    *(undefined4 *)(_DAT_ram_3fcc4c78 + 0x68) = 0x40002338;
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
    *(undefined4 *)(iVar1 + 0x108) = 0x403842ea;
  }
  (*(code *)&SUB_ram_400121bc)(&DAT_ram_3fcb7e68);
  iVar1 = _DAT_ram_3fcc4c78;
  *(undefined4 *)(_DAT_ram_3fcc4c78 + 0x4c) = 0x40384554;
  *(undefined4 *)(iVar1 + 0x2c) = 0x403844f0;
  *(undefined4 *)(iVar1 + 0x154) = 0x4209d85e;
  *(undefined4 *)(iVar1 + 0x1a4) = 0x4209d8e6;
  *(undefined4 *)(iVar1 + 0x18) = 0x4209d7ca;
  *(undefined1 **)(iVar1 + 100) = &LAB_ram_4209cfec;
  *(undefined4 *)(iVar1 + 0x60) = 0x40384044;
  *(undefined4 *)(iVar1 + 0x1d4) = 0x4209e030;
  *(code **)(iVar1 + 0x1b8) = FUN_ram_4209f364;
  return;
}

