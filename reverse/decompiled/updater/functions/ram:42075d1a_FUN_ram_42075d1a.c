
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42075d1a(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_42075c48();
  param_2 = param_2 + 1;
  iVar2 = (_DAT_ram_6004415c >> 6) / param_2;
  *param_3 = iVar2;
  iVar1 = (_DAT_ram_60044160 >> 6) / param_2;
  param_3[1] = iVar1;
  iVar1 = (_DAT_ram_60044164 / param_2) * 8 - (iVar2 * iVar2 + iVar1 * iVar1);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar1 = (*(code *)&SUB_ram_400123bc)(iVar1,0);
  param_3[2] = iVar1 + 8 >> 4;
  (*(code *)&LAB_ram_40012500)();
  return;
}

