
int FUN_ram_42023ae4(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if ((param_1 != (undefined4 *)0x0) && (iVar1 = (*(code *)param_1[3])(*param_1), iVar1 == 0)) {
    thunk_FUN_ram_40390634(param_1);
  }
  return iVar1;
}

