
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42098a16(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  _DAT_ram_3fcc4884 = 0;
  _DAT_ram_3fcc4880 = 0x80a;
  iVar1 = FUN_ram_4207fc94(0x80a,0);
  if (iVar1 == 0) {
    *(code **)(param_1 + 0x54) = FUN_ram_420889aa;
    uVar2 = 0;
  }
  else {
    FUN_ram_420989f8();
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

