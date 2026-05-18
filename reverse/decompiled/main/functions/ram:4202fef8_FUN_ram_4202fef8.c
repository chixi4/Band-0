
undefined1 * FUN_ram_4202fef8(undefined1 param_1,short param_2,int *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_ram_4202d4ec();
  *param_3 = iVar1;
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)(*(code *)&SUB_ram_40011a00)(iVar1,param_2 + 1);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = param_1;
      return puVar2 + 1;
    }
    (*(code *)&SUB_ram_40011a08)(*param_3);
    *param_3 = 0;
  }
  return (undefined1 *)0x0;
}

