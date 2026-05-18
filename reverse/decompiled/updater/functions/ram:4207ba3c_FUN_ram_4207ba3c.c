
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207ba3c(int param_1,int param_2)

{
  int iVar1;
  undefined4 auStack_14 [3];
  
  auStack_14[0] = _DAT_ram_3fcb66f0;
  if (param_1 != 0) {
    if (param_2 == 0) {
      FUN_ram_40398c56();
    }
    else {
      iVar1 = FUN_ram_40398c92();
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = FUN_ram_4201b4ec(param_1,auStack_14);
    if (iVar1 == 0) {
      FUN_ram_4201b378(param_1,auStack_14);
      FUN_ram_4201b580(param_1,auStack_14[0]);
    }
    FUN_ram_40398ccc();
  }
  return auStack_14[0];
}

