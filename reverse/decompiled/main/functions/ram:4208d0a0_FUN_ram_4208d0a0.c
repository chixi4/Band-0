
undefined4 FUN_ram_4208d0a0(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  
  if (param_1 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0ff470,&DAT_ram_3c0c4a14,0x1b5);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  bVar1 = *param_3;
  if (bVar1 == 7) {
    if (param_3[1] == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(gp + 0x90);
LAB_ram_4208d124:
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 0;
      }
      goto LAB_ram_4208d0ec;
    }
  }
  else if (bVar1 < 8) {
    if (bVar1 == 3) {
      if (param_3[1] < 3) {
        iVar3 = (uint)param_3[1] << 2;
        iVar4 = gp + 0x78;
LAB_ram_4208d114:
        UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + iVar3);
        goto LAB_ram_4208d124;
      }
    }
    else if (bVar1 == 4) {
      if (param_3[1] < 0x22) {
        iVar3 = (uint)param_3[1] << 2;
        iVar4 = gp + 0x98;
        goto LAB_ram_4208d114;
      }
    }
  }
  else if (bVar1 == 8) {
    if (param_3[1] < 2) {
      iVar3 = (uint)param_3[1] << 2;
      iVar4 = gp + 0x1a8;
      goto LAB_ram_4208d114;
    }
  }
  else if (bVar1 == 0x7f) {
    UNRECOVERED_JUMPTABLE = *(code **)(gp + 0x1b8);
    goto LAB_ram_4208d124;
  }
  UNRECOVERED_JUMPTABLE = (code *)0x4207cf36;
LAB_ram_4208d0ec:
                    /* WARNING: Could not recover jumptable at 0x4208d0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)();
  return uVar2;
}

