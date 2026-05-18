
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_42093cfa
               (int param_1,undefined1 param_2,uint param_3,uint param_4,undefined2 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3ff4fbbc;
  iVar2 = param_1 * 0x28 + _DAT_ram_3ff4fbbc;
  *(undefined1 *)(iVar2 + 5) = param_2;
  *(char *)(iVar2 + 9) = (char)param_3;
  *(char *)(iVar2 + 10) = (char)param_4;
  if (param_4 < *(byte *)(iVar2 + 8)) {
    *(char *)(iVar2 + 8) = (char)param_4;
  }
  else if (*(byte *)(iVar2 + 8) < param_3) {
    *(char *)(iVar2 + 8) = (char)param_3;
  }
  *(undefined2 *)(iVar1 + param_1 * 0x28 + 0x18) = param_5;
  return;
}

