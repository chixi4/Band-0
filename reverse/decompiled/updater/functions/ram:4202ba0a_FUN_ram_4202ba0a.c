
void FUN_ram_4202ba0a(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iStack_14;
  
  iVar1 = FUN_ram_4202b91a(param_1,param_2,&iStack_14,2);
  if (iVar1 == 0) {
    FUN_ram_42024c0c(param_3,*param_1,iStack_14);
    *param_1 = *param_1 + iStack_14;
  }
  return;
}

