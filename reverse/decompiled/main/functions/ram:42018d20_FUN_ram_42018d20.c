
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_42018d20(int param_1)

{
  bool bVar1;
  int iVar2;
  int aiStack_14 [3];
  
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if (_DAT_ram_3fcb97c0 != 0) {
      iVar2 = FUN_ram_4039691e(0);
      if (iVar2 == 0) {
        iVar2 = FUN_ram_40397156(_DAT_ram_3fcb97c0,param_1,0,0);
      }
      else {
        aiStack_14[0] = 0;
        iVar2 = FUN_ram_40397350(_DAT_ram_3fcb97c0,param_1,aiStack_14,0);
        if (aiStack_14[0] != 0) {
          FUN_ram_403969ca();
        }
      }
      bVar1 = iVar2 == 1;
    }
  }
  return bVar1;
}

