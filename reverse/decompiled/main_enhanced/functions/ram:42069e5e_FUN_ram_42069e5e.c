
void FUN_ram_42069e5e(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  (*(code *)&SUB_ram_40010488)(param_1,0,(param_3 + param_5) * 4);
  for (iVar1 = 0; iVar1 != param_5; iVar1 = iVar1 + 1) {
    FUN_ram_42069cbe(iVar1 * 4 + param_1,param_3 + 1,param_2,param_3,
                     *(undefined4 *)(param_4 + iVar1 * 4));
  }
  return;
}

