
undefined4 FUN_ram_40393862(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar2 = (int *)*param_1;
    iVar1 = *piVar2;
    FUN_ram_40394d2c();
    FUN_ram_40394d60();
    FUN_ram_4039713a(iVar1 + 8,piVar2[1],param_1[4]);
    FUN_ram_40394d2c();
    FUN_ram_40394d8e();
    return 0;
  }
  return 0x102;
}

