
void FUN_ram_420a85ae(int *param_1)

{
  code *pcVar1;
  
  if (param_1 != (int *)0x0) {
    if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x28), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1[1]);
    }
    FUN_ram_4206d7da(param_1,8);
    return;
  }
  return;
}

