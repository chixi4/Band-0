
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42012bb0(void)

{
  undefined4 *puVar1;
  
  _DAT_ram_3fcdffd8 = 0x3fcaf930;
  _DAT_ram_3fcb0ce0 = 0;
  _DAT_ram_3fcb0ce4 = 0;
  _DAT_ram_3fcb0ce8 = 0;
  _DAT_ram_3fcdffd4 = 0x3fcb0cec;
  _DAT_ram_3fcb0d14 = 0x42002b5c;
  _DAT_ram_3fcb0d04 = 1;
  puVar1 = (undefined4 *)thunk_FUN_ram_4039047a(4);
  *(undefined4 **)(gp + -0x784) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_ram_40399b58();
  }
  *puVar1 = 0;
  FUN_ram_42012604();
  return;
}

