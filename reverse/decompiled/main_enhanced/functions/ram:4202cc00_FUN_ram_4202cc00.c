
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202cc00(void)

{
  undefined4 *puVar1;
  
  if (_DAT_ram_3fcb6b98 != (undefined4 *)0x0) {
    puVar1 = _DAT_ram_3fcb6b98;
    if (_DAT_ram_3fcb6b98[2] != 0) {
      FUN_ram_403a5e1e();
      puVar1 = _DAT_ram_3fcb6b98;
      _DAT_ram_3fcb6b98[2] = 0;
    }
    (*(code *)&SUB_ram_40010488)(puVar1 + 3,0,0x1c);
    *puVar1 = 0;
    puVar1[1] = puVar1;
    if (puVar1[10] != 0) {
      FUN_ram_403a5e1e();
      puVar1 = _DAT_ram_3fcb6b98;
      _DAT_ram_3fcb6b98[10] = 0;
    }
    if (puVar1[0xb] != 0) {
      FUN_ram_403a5e1e();
      puVar1 = _DAT_ram_3fcb6b98;
      _DAT_ram_3fcb6b98[0xb] = 0;
    }
    FUN_ram_403a5e1e(puVar1);
    _DAT_ram_3fcb6b98 = (undefined4 *)0x0;
  }
  return;
}

