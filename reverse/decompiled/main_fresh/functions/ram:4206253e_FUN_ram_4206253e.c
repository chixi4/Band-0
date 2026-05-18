
void FUN_ram_4206253e(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((param_1 * 6 + param_2) * 4 + 0x3fcc26e4);
  if (iVar1 != 0) {
    FUN_ram_403975e0(*(undefined4 *)(iVar1 + 0x18),0xffffffff);
    FUN_ram_40396966();
    FUN_ram_42062506(param_1,param_2,0);
    FUN_ram_40396994();
    return;
  }
  return;
}

