
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420740a0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(_DAT_ram_3fcc4178 + 0x5c))(0x13);
  if (iVar1 == 0) {
    FUN_ram_4207a038(1,0x200,1,&DAT_ram_3c0fe440);
  }
  else {
    FUN_ram_4039c11e(param_1,iVar1,DAT_ram_3fcc2708);
    param_1 = param_1 + (uint)DAT_ram_3fcc2708;
  }
  return param_1;
}

