
undefined1 * FUN_ram_4202d5d8(undefined1 param_1,short param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (param_3 != (undefined4 *)0x0) {
    iVar1 = (*(code *)&SUB_ram_40011a00)(param_3,param_2 + 1);
    if (iVar1 == 0) {
      (*(code *)&SUB_ram_40011a08)(param_3);
      puVar2 = (undefined1 *)0x0;
    }
    else {
      puVar2 = (undefined1 *)*param_3;
      *puVar2 = param_1;
      puVar2 = puVar2 + 1;
    }
    return puVar2;
  }
  return (undefined1 *)0x0;
}

