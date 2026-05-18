
undefined4 FUN_ram_4205ed86(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4205ca0a(0);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4205eda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1 + 8))(param_1);
    return uVar2;
  }
  FUN_ram_4205c742(&DAT_ram_3fcc5370,0);
  FUN_ram_42051efa(0x4204eadc,param_1,&DAT_ram_3fcc5374);
  FUN_ram_4205c6fa(&DAT_ram_3fcc5370);
  return *(undefined4 *)(param_1 + 4);
}

