
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039100a(undefined4 *param_1)

{
  int iVar1;
  int aiStack_14 [3];
  
  iVar1 = FUN_ram_403968c6();
  if (iVar1 != 1) {
    if (_DAT_ram_600c2148 < 2) {
      FUN_ram_40395514(*param_1,0,0,0);
      return;
    }
    aiStack_14[0] = 0;
    FUN_ram_40395780(*param_1,aiStack_14);
    if (aiStack_14[0] != 0) {
      FUN_ram_40394dba();
    }
  }
  return;
}

