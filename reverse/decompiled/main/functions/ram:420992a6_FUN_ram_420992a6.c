
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420992a6(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  puVar1 = _DAT_ram_3fcc4890;
  puVar3 = (undefined4 *)*_DAT_ram_3fcc4890;
  while (puVar1 != (undefined4 *)&DAT_ram_3fcc4890) {
    if (((puVar1[8] == param_1) && ((puVar1[6] == param_2 || (param_2 == -1)))) &&
       ((puVar1[7] == param_3 || (param_3 == -1)))) {
      FUN_ram_42099046();
      iVar2 = iVar2 + 1;
    }
    puVar1 = puVar3;
    puVar3 = (undefined4 *)*puVar3;
  }
  return iVar2;
}

