
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4202392c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (_DAT_ram_3fcc1ac8 == 0) {
    _DAT_ram_3fcc1ac8 = FUN_ram_4039731c(1);
  }
  uVar2 = 0x103;
  if (_DAT_ram_3fcc1ac4 == 0) {
    FUN_ram_4202364e();
    _DAT_ram_3fcc1a68 = 0;
    DAT_ram_3fcc1a5c = 0;
    _DAT_ram_3fcc1a64 = 0;
    _DAT_ram_3fcc1a6c = 0xffffffff;
    _DAT_ram_3fcc1a60 = 0;
    (*(code *)&SUB_ram_40010488)(0x3fcc1a70,0,0x48);
    DAT_ram_3fcc1ab8 = 0;
    DAT_ram_3fcc1acc = 0;
    DAT_ram_3fcc1aec = 0;
    _DAT_ram_3fcc1bac = 0;
    DAT_ram_3fcc1bb0 = 0;
    _DAT_ram_3fcc1abc = param_1;
    _DAT_ram_3fcc1ac0 = param_2;
    FUN_ram_42023666();
    FUN_ram_42023376(0);
    iVar1 = FUN_ram_40398e0e(0x420137fa,&DAT_ram_3c0c2428,0x1800,0,5,&DAT_ram_3fcc1ac4,0x7fffffff);
    uVar2 = 0;
    if (iVar1 != 1) {
      _DAT_ram_3fcc1ac4 = 0;
      uVar2 = 0x101;
    }
  }
  return uVar2;
}

