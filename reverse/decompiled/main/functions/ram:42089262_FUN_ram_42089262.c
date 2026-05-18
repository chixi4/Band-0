
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42089262(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_ram_3fcc4014;
  if ((_DAT_ram_3fcc4014 != 0) && ((*(byte *)(_DAT_ram_3fcc4014 + 0x129) & 2) != 0)) {
    uVar2 = (uint)DAT_ram_3fcc4198;
    FUN_ram_420610de();
    FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd9d8,*(undefined1 *)(_DAT_ram_3fcc4014 + 0x128),0);
    *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 0;
    *(byte *)(iVar1 + 0x129) = *(byte *)(iVar1 + 0x129) & 0xfd;
    FUN_ram_42081d04(0);
    FUN_ram_420925f0(0,1,0,0,(int)uVar2 >> 4 & 1,DAT_ram_3fcc4194);
    FUN_ram_420968aa();
    FUN_ram_4208ecce();
    if (_DAT_ram_3fcc4178 != 0) {
      (**(code **)(_DAT_ram_3fcc4178 + 4))();
    }
    FUN_ram_4208344a(3,0,0);
  }
  return 0;
}

