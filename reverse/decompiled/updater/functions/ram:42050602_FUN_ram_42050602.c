
undefined4 FUN_ram_42050602(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_ram_42051500(7);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    *puVar1 = 3;
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    FUN_ram_4205985a(0x3fcb6790,puVar1);
    uVar2 = 0;
  }
  return uVar2;
}

