
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_ram_4202e0c4(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *apuStack_14 [4];
  
  puVar1 = (undefined4 *)FUN_ram_4202dfe4(param_1,apuStack_14);
  if (puVar1 != (undefined4 *)0x0) {
    if (apuStack_14[0] == (undefined4 *)0x0) {
      *(undefined4 *)(_DAT_ram_3fcb6ba0 + 0x154) = **(undefined4 **)(_DAT_ram_3fcb6ba0 + 0x154);
    }
    else {
      *apuStack_14[0] = *puVar1;
    }
    FUN_ram_4202bac4();
  }
  return puVar1;
}

