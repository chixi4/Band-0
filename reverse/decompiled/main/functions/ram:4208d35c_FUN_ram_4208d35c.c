
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208d35c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_420894a2();
  iVar2 = *(int *)(gp + -0xb4) + 0x93;
  FUN_ram_4039c11e(param_1 + 0x32c,iVar2,6);
  if (param_2 == 0) {
    if ((_DAT_ram_3fcc43d0 & 4) == 0) {
      FUN_ram_4039c11e(param_1 + 4,iVar1 + 0x24,6);
      return;
    }
    FUN_ram_4039c11e(param_1 + 4,iVar2);
    DAT_ram_3fcc41bd = 1;
  }
  return;
}

