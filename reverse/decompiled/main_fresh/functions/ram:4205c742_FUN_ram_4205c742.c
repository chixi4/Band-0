
undefined4 FUN_ram_4205c742(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  if (param_2 != 0) goto LAB_ram_4205c762;
  iVar2 = FUN_ram_403975e0(uVar1,0xffffffff);
  do {
    if (iVar2 == 1) {
      return 0;
    }
    uVar3 = FUN_ram_4039bf1e();
    param_2 = (int)((ulonglong)uVar3 >> 0x20);
    uVar1 = (undefined4)uVar3;
LAB_ram_4205c762:
    iVar2 = FUN_ram_403975e0(uVar1,(param_2 + 9U) / 10 + 1);
  } while (iVar2 != 0);
  return 0xffffffff;
}

