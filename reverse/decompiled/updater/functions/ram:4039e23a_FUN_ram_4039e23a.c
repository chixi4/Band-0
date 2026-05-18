
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4039e23a(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  code *pcVar2;
  
  if ((param_3 == 0) && (iVar1 = (*(code *)*_DAT_ram_3fcb0e08)(param_1,param_4), iVar1 != 0)) {
    if (param_2 == 0) {
      param_2 = iVar1;
    }
    return param_2;
  }
  pcVar2 = *(code **)(*(int *)*param_1 + 0x44);
  if ((pcVar2 == (code *)0x0) || (iVar1 = (*pcVar2)((int *)*param_1,param_4,param_5), param_2 != 0))
  {
    iVar1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x4039e296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)_DAT_ram_3fcb0e08[1])(param_1,iVar1);
  return iVar1;
}

