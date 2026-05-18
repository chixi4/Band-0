
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205350c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 extraout_a3;
  undefined4 extraout_a3_00;
  undefined4 extraout_a4;
  undefined4 extraout_a4_00;
  undefined4 *extraout_a5;
  undefined4 *puVar1;
  undefined4 unaff_s2;
  undefined4 *puVar2;
  
  puVar1 = _DAT_ram_3fcc52dc;
  if (param_1 != 0) {
    while (puVar1 != (undefined4 *)0x0) {
LAB_ram_4205352a:
      puVar2 = (undefined4 *)puVar1[1];
      (*(code *)*puVar1)(param_1,param_2,param_3,param_4,param_5,(code *)*puVar1);
      puVar1 = puVar2;
      param_4 = extraout_a3_00;
      param_5 = extraout_a4_00;
    }
    return;
  }
  FUN_ram_4039bf1e();
  param_1 = unaff_s0;
  param_2 = unaff_s1;
  puVar1 = extraout_a5;
  param_3 = unaff_s2;
  param_4 = extraout_a3;
  param_5 = extraout_a4;
  goto LAB_ram_4205352a;
}

