
int FUN_ram_4039085a(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (((int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20) == 0) &&
     (iVar1 = FUN_ram_40390746(param_1 * param_2,param_3), iVar1 != 0)) {
    (*(code *)&SUB_ram_40010488)(iVar1,0,param_1 * param_2);
  }
  return iVar1;
}

