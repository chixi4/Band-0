
undefined4 FUN_ram_4206c4be(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    FUN_ram_42071c64();
    FUN_ram_42066db0(param_2[1]);
    iVar1 = FUN_ram_4207258c(*param_2,param_2[2],param_2[3]);
    if (iVar1 < 0) {
      FUN_ram_4206c2a6(*(undefined4 *)(param_1 + 0x790),2,-iVar1);
      return 0x8015;
    }
    if (param_2[4] != 0) {
      iVar1 = FUN_ram_42067d16(param_2[1],param_2[4],param_2[5],param_2[6],param_2[7],0x4201e722,
                               param_1 + 0x27c);
      if (iVar1 < 0) {
        FUN_ram_4206c2a6(*(undefined4 *)(param_1 + 0x790),2,-iVar1);
        return 0x8019;
      }
      iVar1 = FUN_ram_4206ee8c(param_1 + 0x3bc,*param_2,param_2[1]);
      if (-1 < iVar1) {
        return 0;
      }
      FUN_ram_4206c2a6(*(undefined4 *)(param_1 + 0x790),2,-iVar1);
      return 0x8016;
    }
  }
  return 0x102;
}

