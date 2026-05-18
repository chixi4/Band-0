
int FUN_ram_42012c66(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x16;
  }
  if (param_1[1] == 2) {
    iVar1 = FUN_ram_40395490(*param_1);
    iVar2 = FUN_ram_403968bc();
    if (iVar1 == iVar2) {
      return 0x2d;
    }
  }
  if (param_1[1] == 1) {
    iVar1 = FUN_ram_40395a18();
  }
  else {
    iVar1 = FUN_ram_403958fa(*param_1,param_2);
  }
  return (uint)(iVar1 != 1) << 4;
}

