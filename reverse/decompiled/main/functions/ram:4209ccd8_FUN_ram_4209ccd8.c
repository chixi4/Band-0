
void FUN_ram_4209ccd8(int *param_1)

{
  int *piVar1;
  uint local_20;
  uint uStack_1c;
  
  FUN_ram_4206031c(&local_20);
  while (piVar1 = (int *)*param_1, piVar1 != (int *)0x0) {
    if ((uStack_1c < (uint)piVar1[0x17]) ||
       ((piVar1[0x17] == uStack_1c && (local_20 < (uint)piVar1[0x16])))) break;
    *param_1 = *piVar1;
    FUN_ram_4209cc64(param_1,piVar1,2);
  }
  FUN_ram_4209cc88(param_1);
  return;
}

