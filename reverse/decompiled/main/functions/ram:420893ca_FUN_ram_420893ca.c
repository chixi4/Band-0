
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420893ca(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = _DAT_ram_3fcc4014;
  if (_DAT_ram_3fcc4014 == 0) {
    uVar2 = 0x3007;
  }
  else {
    uVar2 = 0;
    if ((*(byte *)(_DAT_ram_3fcc4014 + 0x129) & 2) == 0) {
      uVar5 = (uint)DAT_ram_3fcc4198;
      if (_DAT_ram_3fcc4178 != (undefined4 *)0x0) {
        _DAT_ram_3fcc412c = &DAT_ram_3fcc4128;
        _DAT_ram_3fcc4128 = 0;
        (*(code *)*_DAT_ram_3fcc4178)(0);
      }
      FUN_ram_4209689a();
      FUN_ram_4207a038(1,1,3,&DAT_ram_3c100220);
      iVar3 = FUN_ram_420893ba();
      if (iVar3 != 0) {
        uVar4 = thunk_FUN_ram_42092342();
        *(short *)(iVar1 + 0x212) = (short)(uVar4 / 1000000);
      }
      FUN_ram_420925f0(0,0,param_1,0,(int)uVar5 >> 4 & 1,DAT_ram_3fcc4194);
      FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd9c0,*(undefined1 *)(_DAT_ram_3fcc4014 + 0x128),0);
      *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 0;
      *(byte *)(iVar1 + 0x129) = *(byte *)(iVar1 + 0x129) | 2;
      FUN_ram_4208344a(2,0,0);
      uVar2 = 0;
    }
  }
  return uVar2;
}

