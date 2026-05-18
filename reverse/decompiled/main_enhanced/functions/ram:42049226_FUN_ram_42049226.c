
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42049226(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if (*(char *)((int)param_1 + 0x2a) == '\0') {
    if ((uint)param_1[4] < param_2) {
      uVar2 = 0x102;
    }
    else if (param_1[4] - param_2 < param_4) {
      uVar2 = 0x104;
    }
    else {
      iVar1 = *param_1;
      if (*(char *)((int)param_1 + 0x29) == '\0') {
        uVar2 = FUN_ram_403a0342(iVar1,param_3,param_2 + param_1[3]);
        return uVar2;
      }
      uVar2 = 0x106;
      if (iVar1 == _DAT_ram_3fcc51f0) {
        uVar2 = FUN_ram_403a04ba(iVar1,param_2 + param_1[3]);
        return uVar2;
      }
    }
  }
  else {
    uVar2 = 0x10d;
  }
  return uVar2;
}

