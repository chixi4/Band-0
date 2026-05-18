
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42098fc6(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3fcc53d0;
  if ((_DAT_ram_3fcc53d0 == 0) || (iVar3 = FUN_ram_4209be7a(_DAT_ram_3fcc53d0,param_1), iVar3 == 0))
  {
    uVar2 = 0;
  }
  else {
    FUN_ram_4209bec8(iVar1,iVar3);
    uVar2 = 1;
  }
  return uVar2;
}

