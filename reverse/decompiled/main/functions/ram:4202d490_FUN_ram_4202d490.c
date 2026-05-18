
int * FUN_ram_4202d490(uint param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)&SUB_ram_40011a88)(0,0x10);
  if (piVar1 != (int *)0x0) {
    if (param_1 <=
        ((int)piVar1 +
         ((*(ushort *)piVar1[2] + 0x10) - ((uint)*(ushort *)((int)piVar1 + 6) + *piVar1)) & 0xffff))
    {
      *piVar1 = *piVar1 + param_1;
      return piVar1;
    }
    (*(code *)&SUB_ram_40011a08)();
  }
  return (int *)0x0;
}

