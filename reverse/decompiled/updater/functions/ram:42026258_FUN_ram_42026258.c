
void FUN_ram_42026258(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 == param_2) {
    return;
  }
  for (; param_3 != iVar2; iVar2 = iVar2 + 1) {
    uVar1 = *param_1;
    *param_1 = ~param_4 & uVar1 | *param_2 & param_4;
    *param_2 = ~param_4 & *param_2 | param_4 & uVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

