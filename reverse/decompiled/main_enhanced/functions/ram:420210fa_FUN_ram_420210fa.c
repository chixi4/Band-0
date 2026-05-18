
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_ram_420210fa(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  if (param_1 == 0) {
    return '\0';
  }
  if ((param_3 != (int *)0x0) && (iVar1 = (*(code *)&SUB_ram_400104a8)(), iVar1 != 0)) {
    (*(code *)&SUB_ram_40010488)(param_3,0,8);
    local_30 = 0x4201103c;
    uStack_2c = 10;
    iStack_28 = 0;
    uStack_24 = 0;
    if ((param_2 == 2) || ((param_2 == 3 || (param_2 == 1)))) {
      iStack_28 = param_2;
    }
    _DAT_ram_3fcc514c = param_3;
    iVar1 = FUN_ram_420465be(&local_30,param_1);
    _DAT_ram_3fcc514c = (int *)0x0;
    if ((iVar1 == 0) && (*(char *)((int)param_3 + 6) != '\0')) {
      *(char *)(param_3 + 1) = (char)((int)(*(byte *)((int)param_3 + 5) - 0x11) / 4);
      return *(char *)((int)param_3 + 6);
    }
    if (*param_3 != 0) {
      thunk_FUN_ram_40390634();
      *param_3 = 0;
    }
    *(undefined1 *)((int)param_3 + 6) = 0;
  }
  return '\0';
}

