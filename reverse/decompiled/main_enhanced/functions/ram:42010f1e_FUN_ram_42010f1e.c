
int FUN_ram_42010f1e(undefined4 param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (((int)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20) == 0) &&
     (iVar1 = FUN_ram_403905da(param_1,param_2 * param_3,param_4), iVar1 != 0)) {
    (*(code *)&SUB_ram_40010488)(iVar1,0,param_2 * param_3);
  }
  return iVar1;
}

