
undefined4 FUN_ram_42050598(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_ram_42051500(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 2;
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    iVar2 = FUN_ram_42059878(0x3fcb6790,puVar1);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_ram_4205151c(8,puVar1);
  }
  return 0xffffffff;
}

