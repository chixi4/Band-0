
int FUN_ram_42012a14(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x16;
  }
  if (param_1[1] == 2) {
    iVar1 = FUN_ram_403970d6(*param_1);
    iVar2 = FUN_ram_403989ea();
    if (iVar1 == iVar2) {
      return 0x2d;
    }
  }
  if (param_1[1] == 1) {
    iVar1 = FUN_ram_4039771c();
  }
  else {
    iVar1 = FUN_ram_403975e0(*param_1,param_2);
  }
  return (uint)(iVar1 != 1) << 4;
}

