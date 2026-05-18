
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420147be(uint param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((param_1 < 0x10) && ((_DAT_ram_3fcc4f34 >> ((param_1 & 0xf) << 1) & 3) != 0)) {
    if (param_3 < 3) {
      return 0;
    }
    puVar1 = (undefined4 *)(*(code *)&SUB_ram_40010670)(0);
    uVar2 = 0x16;
  }
  else {
    puVar1 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar2 = 9;
  }
  *puVar1 = uVar2;
  return 0xffffffff;
}

