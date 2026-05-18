
void FUN_ram_4202c5d6(uint param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  if (param_4 != (int *)0x0) {
    iVar1 = *param_4;
    if ((iVar1 != 0) && ((param_1 & 0x40) == 0)) {
      (*(code *)&SUB_ram_400119dc)(iVar1,*(undefined2 *)(iVar1 + 0x10));
      iVar1 = FUN_ram_42029a9c(param_2,param_3,*param_4,param_1,0,6);
      if (iVar1 == 0) {
        *param_4 = 0;
      }
    }
    return;
  }
  return;
}

