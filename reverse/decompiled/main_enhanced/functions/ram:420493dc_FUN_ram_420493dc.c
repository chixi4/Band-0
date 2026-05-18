
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420493dc(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if ((uint)param_1[4] < param_2) {
    iVar1 = 0x102;
  }
  else if (param_1[4] - param_2 < param_4) {
    iVar1 = 0x104;
  }
  else {
    if (*(char *)((int)param_1 + 0x29) == '\0') {
      iVar1 = FUN_ram_403a018e(*param_1,param_3,param_1[3] + param_2);
      return iVar1;
    }
    iVar1 = 0x106;
    if (*param_1 == _DAT_ram_3fcc51f0) {
      iVar1 = FUN_ram_42049360();
      if (iVar1 == 0) {
        FUN_ram_4039c11e(param_3,uStack_18,param_4);
        FUN_ram_4204a3e0(uStack_14);
      }
    }
  }
  return iVar1;
}

