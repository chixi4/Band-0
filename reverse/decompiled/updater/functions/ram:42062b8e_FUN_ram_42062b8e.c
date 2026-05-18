
void FUN_ram_42062b8e(int *param_1)

{
  int *piVar1;
  uint local_20;
  uint uStack_1c;
  
  FUN_ram_420221d2(&local_20);
  while (piVar1 = (int *)*param_1, piVar1 != (int *)0x0) {
    if ((uStack_1c < (uint)piVar1[0x17]) ||
       ((piVar1[0x17] == uStack_1c && (local_20 < (uint)piVar1[0x16])))) break;
    *param_1 = *piVar1;
    FUN_ram_42062b1a(param_1,piVar1,2);
  }
  FUN_ram_42062b3e(param_1);
  return;
}

