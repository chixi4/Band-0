
int FUN_ram_403a06ea(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((param_1[2] == 0) || (*(int *)param_1[2] == 0)) ||
     (iVar1 = (**(code **)param_1[2])(param_1[3],param_2), iVar1 == 0)) {
    (*(code *)**(undefined4 **)*param_1)(*param_1);
    iVar1 = 0;
  }
  return iVar1;
}

