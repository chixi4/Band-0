
undefined4 FUN_ram_42065fee(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    puVar2 = (undefined4 *)*param_1;
    iVar1 = (*(code *)puVar2[7])(puVar2[4],*puVar2,param_2,param_3,0,puVar2,(code *)puVar2[7]);
    if (iVar1 < 0) break;
    param_2 = param_2 + iVar1;
    param_3 = param_3 - iVar1;
  }
  return 0xffffffff;
}

