
void FUN_ram_4202cf34(int param_1,int param_2)

{
  undefined2 uVar1;
  
  FUN_ram_4039c11e(param_1,param_2,7);
  uVar1 = *(undefined2 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 8) = uVar1;
  return;
}

