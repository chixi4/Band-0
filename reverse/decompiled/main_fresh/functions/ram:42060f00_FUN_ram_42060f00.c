
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42060f00(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4207f542();
  iVar1 = 0x3003;
  if (iVar2 == 0) {
    iVar1 = FUN_ram_42084c84(0,0);
    if (iVar1 == 0) {
      FUN_ram_42084c84(1,0);
    }
    FUN_ram_4209898e();
    iVar1 = FUN_ram_4208442e();
    if (iVar1 == 0) {
      if (_DAT_ram_3fcc5388 != 0) {
        FUN_ram_42048c0a();
        _DAT_ram_3fcc5388 = 0;
      }
      FUN_ram_4204f600();
      FUN_ram_420b50fe(0x42075132);
      FUN_ram_420b4a40(0x420a2a40);
      FUN_ram_420b4ca4();
      FUN_ram_4204f604();
      DAT_ram_3fcc538c = 0;
    }
  }
  return iVar1;
}

