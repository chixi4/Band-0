
int FUN_ram_42012d82(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x16;
  }
  iVar1 = FUN_ram_42012d42();
  if (iVar1 == 0) {
    iVar1 = FUN_ram_42012c66(*param_1,0xffffffff);
    return iVar1;
  }
  return iVar1;
}

