
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_403a5a04(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
  uVar2 = FUN_ram_403a5956(param_1);
  (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))(uVar1);
  return uVar2;
}

