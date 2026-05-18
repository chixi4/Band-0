
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204e170(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (((_DAT_ram_6003e01c & 0xe0) == 0x60) && ((_DAT_ram_6003e01c & 0x100) == 0)) {
    (*(code *)&SUB_ram_40010488)(param_1,0);
    (*(code *)&SUB_ram_40010488)(param_2,0,param_3);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_ram_40399daa(param_1,0x6003e120,param_3);
    FUN_ram_40399daa(param_2,0x6003e140,param_3);
    uVar1 = 0;
  }
  return uVar1;
}

