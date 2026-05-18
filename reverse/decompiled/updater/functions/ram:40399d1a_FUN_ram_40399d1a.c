
int FUN_ram_40399d1a(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20) == 0) {
    iVar1 = FUN_ram_4039047a(param_1 * param_2);
    if (iVar1 != 0) {
      (*(code *)&SUB_ram_40010488)(iVar1,0,param_1 * param_2);
    }
  }
  return iVar1;
}

