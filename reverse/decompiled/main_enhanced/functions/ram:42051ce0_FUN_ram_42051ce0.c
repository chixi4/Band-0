
undefined4 FUN_ram_42051ce0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 == 2) {
    uVar1 = FUN_ram_4205be7a(param_2,param_3);
    return uVar1;
  }
  puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
  *puVar2 = 0x6a;
  return 0xffffffff;
}

