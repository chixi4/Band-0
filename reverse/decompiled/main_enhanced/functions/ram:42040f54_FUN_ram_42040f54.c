
void FUN_ram_42040f54(undefined4 param_1,int param_2)

{
  int iVar1;
  code *in_a5;
  
  iVar1 = (*in_a5)();
  if (param_2 != 0x7f) {
    *(byte *)(iVar1 + 0x200) = *(byte *)(iVar1 + 0x200) | 1;
  }
  FUN_ram_42040ee0(param_1,param_2);
  return;
}

