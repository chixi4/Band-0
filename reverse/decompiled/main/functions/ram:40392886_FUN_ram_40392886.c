
undefined4 FUN_ram_40392886(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_2 != -1) {
    return 0x102;
  }
  uVar3 = param_1[1];
  FUN_ram_403975e0(*param_1,0);
  iVar1 = param_1[1];
  FUN_ram_4039691e();
  FUN_ram_40396966();
  uVar2 = FUN_ram_4039c3c6(iVar1,param_1[2] & 0x3ff00000,5);
  FUN_ram_4039691e();
  FUN_ram_40396994();
  if ((uVar2 & 0x3fffffff) == 0) {
    *(undefined4 **)(iVar1 + 4) = param_1;
    if ((int)(uVar2 << 1) < 0) {
      (**(code **)(iVar1 + 0x28))(*(undefined4 *)(iVar1 + 0x2c));
    }
  }
  else {
    iVar1 = FUN_ram_403975e0(*param_1,0xffffffff);
    if (iVar1 == 0) {
      return 0x107;
    }
  }
  FUN_ram_403927bc(uVar3);
  return 0;
}

