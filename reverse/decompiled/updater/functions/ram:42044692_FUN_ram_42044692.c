
undefined4 FUN_ram_42044692(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  
  if (param_1 == 0) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07dc8c,0x3c072eb4,0x1b5);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  bVar1 = *param_3;
  if (bVar1 == 7) {
    if (param_3[1] == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(gp + -0x178);
LAB_ram_42044716:
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 0;
      }
      goto LAB_ram_420446de;
    }
  }
  else if (bVar1 < 8) {
    if (bVar1 == 3) {
      if (param_3[1] < 3) {
        iVar3 = (uint)param_3[1] << 2;
        iVar4 = gp + -400;
LAB_ram_42044706:
        UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + iVar3);
        goto LAB_ram_42044716;
      }
    }
    else if (bVar1 == 4) {
      if (param_3[1] < 0x22) {
        iVar3 = (uint)param_3[1] << 2;
        iVar4 = gp + -0x170;
        goto LAB_ram_42044706;
      }
    }
  }
  else if (bVar1 == 8) {
    if (param_3[1] < 2) {
      iVar3 = (uint)param_3[1] << 2;
      iVar4 = gp + -0x60;
      goto LAB_ram_42044706;
    }
  }
  else if (bVar1 == 0x7f) {
    UNRECOVERED_JUMPTABLE = *(code **)(gp + -0x50);
    goto LAB_ram_42044716;
  }
  UNRECOVERED_JUMPTABLE = (code *)0x42034528;
LAB_ram_420446de:
                    /* WARNING: Could not recover jumptable at 0x420446de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)();
  return uVar2;
}

