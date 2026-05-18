
undefined4 FUN_ram_420445a0(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  
  if (param_2 == 7) {
    if (param_3 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(gp + -0x174);
LAB_ram_420445f2:
      if (param_1 == 0) {
        return 1;
      }
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 1;
      }
      goto LAB_ram_420445f6;
    }
  }
  else if (param_2 < 8) {
    if (param_2 == 3) {
      if (param_3 < 3) {
        iVar2 = gp + -0x184;
        goto LAB_ram_420445e6;
      }
    }
    else if ((param_2 == 4) && (param_3 < 0x22)) {
      iVar2 = gp + -0xe8;
LAB_ram_420445e6:
      UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + param_3 * 4);
      goto LAB_ram_420445f2;
    }
  }
  else if (param_2 == 8) {
    if (param_3 < 2) {
      iVar2 = gp + -0x58;
      goto LAB_ram_420445e6;
    }
  }
  else if ((param_2 == 0x7f) && (param_3 == 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(gp + -0x4c);
    goto LAB_ram_420445f2;
  }
  if (param_1 == 0) {
    return 1;
  }
  UNRECOVERED_JUMPTABLE = (code *)0x42034524;
LAB_ram_420445f6:
                    /* WARNING: Could not recover jumptable at 0x420445f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}

