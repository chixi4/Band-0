
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420450a2(uint param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3fcdfb20;
  if (2 < param_1) {
    return;
  }
  if (param_4 == 1) {
    if (param_2 == 0) {
      return;
    }
    if (0x20 < param_3) {
      return;
    }
    iVar2 = param_1 * 0x24 + 0x54;
    *(uint *)(_DAT_ram_3fcdfb20 + param_1 * 0x24 + 0x50) = param_3;
    (*(code *)&SUB_ram_40010488)(iVar1 + iVar2,0,0x20);
    FUN_ram_40399daa(_DAT_ram_3fcdfb20 + iVar2,param_2,param_3);
  }
  *(char *)(_DAT_ram_3fcdfb20 + param_1 + 0x98) = (char)param_4;
  return;
}

