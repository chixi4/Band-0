
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_420760c6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_42090504();
  if (iVar1 != 0) {
    if (_DAT_ram_3fcc4014 == 0) {
      FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fbb7c);
      return false;
    }
    iVar1 = *(int *)(_DAT_ram_3fcc4014 + 0xe4);
    if ((((iVar1 != 0) && (*(char *)(iVar1 + 0x334) != '\0')) &&
        ((*(uint *)(_DAT_ram_3fcc4014 + 0xa4) & 0x10) != 0)) &&
       ((*(char *)(iVar1 + 0x24) == '\0' && (iVar1 = FUN_ram_420757ca(param_1), iVar1 != 0))))
    goto LAB_ram_42076138;
  }
  iVar1 = FUN_ram_42075fa0(param_1,param_2,param_3);
  if (iVar1 == 0) {
    return false;
  }
LAB_ram_42076138:
  **(uint **)(iVar1 + 0x24) = **(uint **)(iVar1 + 0x24) | 0x20;
  iVar1 = (*(code *)&SUB_ram_40011c48)(iVar1,1);
  return iVar1 == 0;
}

