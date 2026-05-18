
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42062312(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_ram_403917e0(0x3fcc53a4);
  if ((_DAT_ram_3fcc53a8 == 0) && (iVar2 = FUN_ram_403905a0(1,0x24,0x804), iVar2 != 0)) {
    FUN_ram_40394a58();
    _DAT_ram_600c0010 = _DAT_ram_600c0010 | 0x800;
    _DAT_ram_600c0018 = _DAT_ram_600c0018 & 0xfffff7ff;
    FUN_ram_40394a68();
    FUN_ram_42096c06(iVar2,0);
    *(undefined4 *)(iVar2 + 8) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x14) = 3;
    uVar1 = 1;
    _DAT_ram_3fcc53a8 = iVar2;
  }
  else {
    uVar1 = 0;
  }
  FUN_ram_403917f8(0x3fcc53a4);
  return uVar1;
}

