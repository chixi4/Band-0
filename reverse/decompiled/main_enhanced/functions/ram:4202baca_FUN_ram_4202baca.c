
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202baca(undefined4 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(*(code *)&SUB_ram_40011a44)(_DAT_ram_3fcb6b8c + 0xb);
  if ((puVar1 != (undefined1 *)0x0) && (*(int *)*_DAT_ram_3fcb6b8c != 0)) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    FUN_ram_403a67ea(puVar1,0x4201b756);
    FUN_ram_403a67de(*_DAT_ram_3fcb6b8c,puVar1);
    return;
  }
  thunk_EXT_FUN_ram_40010ae8(param_1);
  return;
}

