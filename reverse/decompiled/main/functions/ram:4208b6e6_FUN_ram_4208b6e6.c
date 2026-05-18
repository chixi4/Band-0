
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208b6e6(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_ram_3fcc4014;
  *(int *)(_DAT_ram_3fcc4014 + 0xe4) = param_1;
  FUN_ram_4039c11e(iVar1 + 0x9c,param_1 + 4,6);
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd9f0,param_3,param_2);
  if (param_3 == 0) {
    param_2 = param_2 << 5;
    uVar2 = 3;
  }
  else {
    param_2 = 0xb0;
    uVar2 = 2;
  }
  FUN_ram_42089514(&DAT_ram_3fcc4004,uVar2,param_2);
  return;
}

