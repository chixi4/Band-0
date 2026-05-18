
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420b60c8(int param_1,int param_2)

{
  int iVar1;
  undefined4 auStack_14 [3];
  
  auStack_14[0] = _DAT_ram_3fcc5228;
  if (param_1 != 0) {
    if (param_2 == 0) {
      FUN_ram_4039b010();
    }
    else {
      iVar1 = FUN_ram_4039b04c();
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = FUN_ram_4204b388(param_1,auStack_14);
    if (iVar1 == 0) {
      FUN_ram_4204b1e8(param_1,auStack_14);
      FUN_ram_4204b474(param_1,auStack_14[0]);
    }
    FUN_ram_4039b086();
  }
  return auStack_14[0];
}

