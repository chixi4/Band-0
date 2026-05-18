
undefined4 * FUN_ram_4203064a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_14 [2];
  undefined1 auStack_12 [6];
  
  (*(code *)&SUB_ram_40011aac)(auStack_14,param_3);
  (*(code *)&SUB_ram_40011aac)(auStack_12,param_2);
  puVar1 = (undefined4 *)(*(code *)&SUB_ram_40011a2c)(param_1,4);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_ram_4039c11e(*puVar1,auStack_14,4);
  }
  return puVar1;
}

