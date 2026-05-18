
void FUN_ram_42047af6(int param_1)

{
  uint uVar1;
  
  uVar1 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
  if ((uVar1 & 1) != 0) {
    FUN_ram_40396966();
    **(uint **)(&DAT_ram_3c0f7310 + param_1 * 4) = **(uint **)(&DAT_ram_3c0f7310 + param_1 * 4) | 4;
    FUN_ram_40396994();
    return;
  }
  return;
}

