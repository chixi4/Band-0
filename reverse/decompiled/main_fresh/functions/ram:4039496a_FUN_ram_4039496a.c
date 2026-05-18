
undefined4 FUN_ram_4039496a(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0x102;
  }
  else {
    uVar2 = 0x103;
    if ((*(byte *)(param_1 + 9) & 1) == 0) {
      piVar3 = (int *)*param_1;
      iVar1 = *piVar3;
      FUN_ram_4039691e(0x103);
      FUN_ram_40396966();
      FUN_ram_4039932c(iVar1 + 8,piVar3[1],param_1[4],param_2);
      FUN_ram_4039691e();
      FUN_ram_40396994();
      uVar2 = 0;
    }
  }
  return uVar2;
}

