
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4201f108(undefined1 param_1,undefined1 param_2)

{
  int iVar1;
  
  if (DAT_ram_3fcc5114 == '\0') {
    return 0x103;
  }
  if (_DAT_ram_3fcc5138 == 0) {
    return 0x103;
  }
  if (DAT_ram_3fcc5130 != '\0') {
    return 0xffffffff;
  }
  iVar1 = FUN_ram_403975e0(_DAT_ram_3fcc5124,10);
  if (iVar1 == 1) {
    if ((_DAT_ram_3fcc5134 == 0) &&
       (_DAT_ram_3fcc5134 = FUN_ram_40390474(5000,4), _DAT_ram_3fcc5134 == 0)) {
      FUN_ram_40397156(_DAT_ram_3fcc5124,0,0,0);
    }
    else {
      FUN_ram_4039c11e(_DAT_ram_3fcc5134,_DAT_ram_3fcc5138,5000);
      DAT_ram_3fcc511d = 1;
      DAT_ram_3fcc5130 = 1;
      DAT_ram_3fcc511e = param_2;
      DAT_ram_3fcc511f = param_1;
      FUN_ram_403975e0(_DAT_ram_3fcc5128,0);
      iVar1 = FUN_ram_40398e0e(0x4200ecc8,"on before the noise.",0x800,0,3,&DAT_ram_3fcc512c,
                               0x7fffffff);
      FUN_ram_40397156(_DAT_ram_3fcc5124,0,0,0);
      if (iVar1 == 1) {
        return 0;
      }
      DAT_ram_3fcc5130 = '\0';
      DAT_ram_3fcc511d = 0;
    }
    return 0x101;
  }
  return 0x107;
}

