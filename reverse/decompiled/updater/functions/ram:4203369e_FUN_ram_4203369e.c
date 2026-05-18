
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4203369e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_42047afc();
  if (iVar1 != 0) {
    if (_DAT_ram_3fcb4f84 == 0) {
      FUN_ram_42033fd8(1,8,4,0x3c07abb8);
      return false;
    }
    iVar1 = *(int *)(_DAT_ram_3fcb4f84 + 0xe4);
    if ((((iVar1 != 0) && (*(char *)(iVar1 + 0x334) != '\0')) &&
        ((*(uint *)(_DAT_ram_3fcb4f84 + 0xa4) & 0x10) != 0)) &&
       ((*(char *)(iVar1 + 0x24) == '\0' && (iVar1 = FUN_ram_42032fa2(param_1), iVar1 != 0))))
    goto LAB_ram_42033710;
  }
  iVar1 = FUN_ram_42033578(param_1,param_2,param_3);
  if (iVar1 == 0) {
    return false;
  }
LAB_ram_42033710:
  **(uint **)(iVar1 + 0x24) = **(uint **)(iVar1 + 0x24) | 0x20;
  iVar1 = (*(code *)&SUB_ram_40011c48)(iVar1,1);
  return iVar1 == 0;
}

