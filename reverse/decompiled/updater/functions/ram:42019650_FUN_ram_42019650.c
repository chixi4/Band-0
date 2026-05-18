
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42019650(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((uint)param_1[4] < param_2) {
    iVar1 = 0x102;
  }
  else if (param_1[4] - param_2 < param_4) {
    iVar1 = 0x104;
  }
  else {
    if (*(char *)((int)param_1 + 0x29) == '\0') {
      iVar1 = FUN_ram_4039dd78(*param_1,param_3,param_1[3] + param_2);
      return iVar1;
    }
    iVar1 = 0x106;
    if (_DAT_ram_3fcb66cc == *param_1) {
      iVar1 = FUN_ram_420195e2();
      if (iVar1 == 0) {
        FUN_ram_40399daa(param_3,uStack_18,param_4);
        FUN_ram_4201a616(uStack_14);
      }
    }
  }
  return iVar1;
}

