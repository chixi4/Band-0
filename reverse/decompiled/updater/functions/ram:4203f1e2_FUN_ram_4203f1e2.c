
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203f1e2(int param_1,char param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 1) {
    *(char *)(param_1 + 0xa7) = *(char *)(param_1 + 0xa7) + param_2;
  }
  else if (param_3 == 0) {
    *(char *)(param_1 + 0xa7) = param_2;
  }
  if (*(char *)(param_1 + 0xa7) < '\0') {
    *(undefined1 *)(param_1 + 0xa7) = 0;
  }
  cVar1 = '\n';
  if (_DAT_ram_3fcb4ee8 == param_1) {
    cVar1 = '\x0f';
  }
  if (cVar1 < *(char *)(param_1 + 0xa7)) {
    *(char *)(param_1 + 0xa7) = cVar1;
    return;
  }
  if ((*(char *)(param_1 + 0xa7) == '\0') && (_DAT_ram_3fcb4ee8 != param_1)) {
    FUN_ram_4203eaa0();
    return;
  }
  return;
}

