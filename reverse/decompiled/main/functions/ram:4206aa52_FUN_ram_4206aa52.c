
undefined4 FUN_ram_4206aa52(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  
  if (((1 < param_4) || (*param_1 == 0)) ||
     ((uVar2 = *(uint *)(*param_1 + 4), (uVar2 >> 0x18 & 3) < 2 && ((uVar2 >> 2 & 0x3c0) != param_3)
      ))) {
    return 0xffff9f00;
  }
  iVar3 = *(int *)(&DAT_ram_3c0f9944 + (uVar2 >> 0x18 & 0x7c));
  param_1[1] = param_3;
  param_1[2] = param_4;
  if (param_4 != 1) {
    if (((uVar2 & 0xf000) != 0x3000) && ((uVar2 & 0xe000) != 0x4000)) {
      UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x20);
      goto LAB_ram_4206aaae;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x1c);
LAB_ram_4206aaae:
                    /* WARNING: Could not recover jumptable at 0x4206aaae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1[0xf]);
  return uVar1;
}

