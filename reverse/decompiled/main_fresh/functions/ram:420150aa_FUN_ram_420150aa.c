
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420150aa(int param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  if (DAT_ram_3fcc4f66 == '\0') {
    return;
  }
  if (param_1 != 0) {
    FUN_ram_42015016();
    iVar1 = FUN_ram_403975e0(_DAT_ram_3fcc4f5c,10);
    if (iVar1 == 1) {
      _DAT_ram_3fcc4f4c = param_3;
      _DAT_ram_3fcc4f50 = param_2;
      _DAT_ram_3fcc4f54 = param_1;
      _DAT_ram_3fcc4f58 = iVar1;
      *(undefined2 *)(gp + -0x7b4) = param_4;
      FUN_ram_40398e0e(0x42005328,0x3c0a86cc,0x600,0,5,&DAT_ram_3fcc4f60,0x7fffffff);
      FUN_ram_40397156(_DAT_ram_3fcc4f5c,0,0,0);
      return;
    }
  }
  return;
}

