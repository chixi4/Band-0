
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420517cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = _DAT_ram_3fcb67b0;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[1];
    (*(code *)*puVar1)(param_1,param_2,param_3,param_4,param_5,(code *)*puVar1);
    puVar1 = puVar2;
    param_4 = extraout_a3;
    param_5 = extraout_a4;
  }
  return;
}

