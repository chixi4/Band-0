
undefined4
FUN_ram_42098220(undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
                undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  
  if (param_3 < 2) {
    if (param_2 == (undefined4 *)0x0) {
      uVar1 = 0xd004c008;
    }
    else {
      uVar1 = *param_2;
    }
    *(undefined4 *)(param_6 + param_3 * 4 + 0xc) = uVar1;
    return 0;
  }
  return 0xfffffffa;
}

