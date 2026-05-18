
undefined4 FUN_ram_4205c786(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_ram_420530ba(4);
  *param_1 = (int)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_ram_40397076(param_2,4,0);
    *puVar1 = uVar2;
    if (*(int *)*param_1 != 0) {
      return 0;
    }
    thunk_FUN_ram_40390634();
  }
  return 0xffffffff;
}

