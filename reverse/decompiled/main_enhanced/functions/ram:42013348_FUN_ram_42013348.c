
void FUN_ram_42013348(int param_1,undefined4 param_2)

{
  undefined4 extraout_a1;
  int iVar1;
  int extraout_a5;
  
  iVar1 = *(int *)("Make the version that feels safe first." + param_1 * 4 + 0x20);
  if (*(int *)(iVar1 + 4) != -1) {
    FUN_ram_42013334();
    param_2 = extraout_a1;
    iVar1 = extraout_a5;
  }
  *(undefined4 *)(iVar1 + 4) = param_2;
  return;
}

