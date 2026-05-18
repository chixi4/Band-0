
undefined4
FUN_ram_42089316(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack0000000c;
  
  if (param_6 == param_4) {
    uStack0000000c = param_1;
    iVar1 = FUN_ram_42088d8e(*(undefined1 *)(param_5 + 0x18));
    param_2 = uStack0000000c;
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (param_6 != 0xa0) {
    return 0;
  }
  uStack0000000c = param_2;
  iVar1 = FUN_ram_4207fc22(0);
  if (iVar1 != 0xffff) {
    if ((byte)(DAT_ram_3fcc41c6 - 0xdU) < 2) {
      uVar2 = FUN_ram_4208ca58(0);
      return uVar2;
    }
    if (DAT_ram_3fcc41c6 == '\t') {
      uVar2 = FUN_ram_4208c8d0(0,uStack0000000c);
      return uVar2;
    }
  }
  return 0;
}

