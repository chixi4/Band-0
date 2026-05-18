
undefined4 FUN_ram_4208cfae(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  
  if (param_2 == 7) {
    if (param_3 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(gp + 0x94);
LAB_ram_4208d000:
      if (param_1 == 0) {
        return 1;
      }
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 1;
      }
      goto LAB_ram_4208d004;
    }
  }
  else if (param_2 < 8) {
    if (param_2 == 3) {
      if (param_3 < 3) {
        iVar2 = gp + 0x84;
        goto LAB_ram_4208cff4;
      }
    }
    else if ((param_2 == 4) && (param_3 < 0x22)) {
      iVar2 = gp + 0x120;
LAB_ram_4208cff4:
      UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + param_3 * 4);
      goto LAB_ram_4208d000;
    }
  }
  else if (param_2 == 8) {
    if (param_3 < 2) {
      iVar2 = gp + 0x1b0;
      goto LAB_ram_4208cff4;
    }
  }
  else if ((param_2 == 0x7f) && (param_3 == 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(gp + 0x1bc);
    goto LAB_ram_4208d000;
  }
  if (param_1 == 0) {
    return 1;
  }
  UNRECOVERED_JUMPTABLE = (code *)0x4207cf32;
LAB_ram_4208d004:
                    /* WARNING: Could not recover jumptable at 0x4208d004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}

