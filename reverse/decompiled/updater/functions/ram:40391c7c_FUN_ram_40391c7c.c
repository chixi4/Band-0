
undefined4 FUN_ram_40391c7c(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_2 != -1) {
    return 0x102;
  }
  uVar3 = param_1[1];
  FUN_ram_403958fa(*param_1,0);
  iVar1 = param_1[1];
  FUN_ram_40394d2c();
  FUN_ram_40394d60();
  uVar2 = FUN_ram_40399ffa(iVar1,param_1[2] & 0x3ff00000,5);
  FUN_ram_40394d2c();
  FUN_ram_40394d8e();
  if ((uVar2 & 0x3fffffff) == 0) {
    *(undefined4 **)(iVar1 + 4) = param_1;
    if ((int)(uVar2 << 1) < 0) {
      (**(code **)(iVar1 + 0x28))(*(undefined4 *)(iVar1 + 0x2c));
    }
  }
  else {
    iVar1 = FUN_ram_403958fa(*param_1,0xffffffff);
    if (iVar1 == 0) {
      return 0x107;
    }
  }
  FUN_ram_40391bb2(uVar3);
  return 0;
}

