
void FUN_ram_4039af9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_ram_4204b4ea();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4039afc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(gp + -0x73c))(param_3,param_4);
    return;
  }
  return;
}

