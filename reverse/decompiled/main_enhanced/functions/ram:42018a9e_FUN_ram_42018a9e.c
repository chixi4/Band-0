
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42018a9e(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (_DAT_ram_3fcc5008 == 1) {
    uVar2 = 0x103;
  }
  else {
    if (_DAT_ram_3fcc5000 == 0) {
      _DAT_ram_3fcc5000 = FUN_ram_40397864();
      if (_DAT_ram_3fcc5000 == 0) {
        return 0x101;
      }
    }
    else {
      FUN_ram_40397976();
    }
    if (param_2 == 0) {
      param_2 = 10000;
    }
    _DAT_ram_3fcc4ff8 = param_2;
    _DAT_ram_3fcc5004 = param_1;
    FUN_ram_420189ea(1);
    FUN_ram_420af816(0x3c0a8644,0x3c0a863c,1);
    FUN_ram_420b098c();
    iVar1 = FUN_ram_4204fd18();
    if (iVar1 != 0) {
      FUN_ram_4204fcea();
    }
    FUN_ram_4204fcce(0);
    FUN_ram_4204fcf8(0,0x3c0a8f5c);
    FUN_ram_4204fcf8(1,0x3c0a8f6c);
    FUN_ram_4204fcf8(2,0x3c0a8f7c);
    FUN_ram_4204fca8(0x42008a76);
    FUN_ram_4204fcdc();
    FUN_ram_40398e0e(0x42008a08,0x3c0a8f8c,0x400,0,4,&DAT_ram_3fcc4ffc,0x7fffffff);
    uVar2 = 0;
  }
  return uVar2;
}

