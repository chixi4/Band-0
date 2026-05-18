
void FUN_ram_40398bdc(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 & 7) == 0) {
    return;
  }
  iVar1 = FUN_ram_4201b2ca();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x40398c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(gp + -0x7cc))(param_3,param_4);
    return;
  }
  return;
}

