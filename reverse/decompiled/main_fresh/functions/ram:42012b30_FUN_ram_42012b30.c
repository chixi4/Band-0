
int FUN_ram_42012b30(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x16;
  }
  iVar1 = FUN_ram_42012af0();
  if (iVar1 == 0) {
    iVar1 = FUN_ram_42012a14(*param_1,0xffffffff);
    return iVar1;
  }
  return iVar1;
}

