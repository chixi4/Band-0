
undefined4 FUN_ram_4201492c(uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 < 0x10) {
    puVar1 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar2 = 0x58;
  }
  else {
    puVar1 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar2 = 9;
  }
  *puVar1 = uVar2;
  return 0xffffffff;
}

