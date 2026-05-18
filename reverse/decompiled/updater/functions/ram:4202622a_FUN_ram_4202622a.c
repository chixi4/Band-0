
void FUN_ram_4202622a(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == param_2) {
    return;
  }
  for (; param_3 != iVar1; iVar1 = iVar1 + 1) {
    *param_1 = ~param_4 & *param_1 | param_2[iVar1] & param_4;
    param_1 = param_1 + 1;
  }
  return;
}

