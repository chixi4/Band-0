
undefined4 FUN_ram_42013bee(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4039a06c(param_1,0x3c0705f4);
  if (((iVar1 == 0) || (iVar1 = FUN_ram_4039a06c(param_1,0x3c0705f8), iVar1 == 0)) ||
     (iVar1 = FUN_ram_4039a06c(param_1,0x3c0705fc), iVar1 == 0)) {
    if (param_2 == 0) {
      return 0;
    }
    if (((param_2 & 6) != 0) && ((param_2 & 1) == 0)) {
      return 0;
    }
    puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar3 = 0xd;
  }
  else {
    puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar3 = 2;
  }
  *puVar2 = uVar3;
  return 0xffffffff;
}

