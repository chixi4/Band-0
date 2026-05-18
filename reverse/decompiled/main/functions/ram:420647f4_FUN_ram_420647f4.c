
undefined4 * FUN_ram_420647f4(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)0x0;
  if (param_1 != (int *)0x0) {
    if (param_2 == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)*param_1;
      while ((puVar1 != (undefined4 *)0x0 &&
             (iVar2 = (*(code *)&SUB_ram_40010504)(*puVar1,param_2), iVar2 != 0))) {
        puVar1 = (undefined4 *)puVar1[2];
      }
    }
  }
  return puVar1;
}

