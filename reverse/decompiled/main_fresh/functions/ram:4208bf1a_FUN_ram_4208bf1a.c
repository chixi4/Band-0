
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4208bf1a(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _DAT_ram_3fcc4018;
  iVar1 = _DAT_ram_3fcc4014;
  if (_DAT_ram_3fcc4014 != 0) {
    *(undefined4 *)(_DAT_ram_3fcc4014 + 300) = 0;
    iVar3 = FUN_ram_42079058(iVar1,1,DAT_ram_3fcc4264);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 300) = 0;
    iVar3 = FUN_ram_42079058(iVar2,1,DAT_ram_3fcc4262);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  _DAT_ram_3fcc4024 = 100;
  FUN_ram_4208c5f4(&DAT_ram_3fcc4004);
  FUN_ram_4208b650(&DAT_ram_3fcc4004);
  if ((iVar1 != 0) && (DAT_ram_3fcc4264 == '\x03')) {
    FUN_ram_4207bade(iVar1);
  }
  if ((iVar2 != 0) && (DAT_ram_3fcc4262 == '\x03')) {
    FUN_ram_4207bade(iVar2);
  }
  FUN_ram_4208be18();
  FUN_ram_4208d51a(&DAT_ram_3fcc4004);
  FUN_ram_42088d5e();
  FUN_ram_420610da();
  _DAT_ram_3fcc4268 = 0;
  _DAT_ram_3fcc426c = 0;
  FUN_ram_4208bed2();
  FUN_ram_4208beac();
  FUN_ram_4207b454();
  return 0;
}

