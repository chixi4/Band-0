
undefined1 * FUN_ram_4203698e(undefined1 param_1,undefined1 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_ram_4202d4ec();
  *param_4 = iVar1;
  if (iVar1 != 0) {
    iVar1 = (*(code *)&SUB_ram_40011a00)(iVar1,param_3 + 4U & 0xffff);
    if (iVar1 != 0) {
      puVar2 = *(undefined1 **)*param_4;
      puVar2[2] = (char)param_3;
      *puVar2 = param_1;
      puVar2[1] = param_2;
      puVar2[3] = (char)((uint)param_3 >> 8);
      return puVar2 + 4;
    }
    (*(code *)&SUB_ram_40011a08)((undefined4 *)*param_4);
    *param_4 = 0;
  }
  return (undefined1 *)0x0;
}

