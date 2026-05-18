
undefined4 FUN_ram_40394922(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar2 = (int *)*param_1;
    iVar1 = *piVar2;
    FUN_ram_4039691e();
    FUN_ram_40396966();
    FUN_ram_40399328(iVar1 + 8,piVar2[1],param_1[4]);
    FUN_ram_4039691e();
    FUN_ram_40396994();
    return 0;
  }
  return 0x102;
}

