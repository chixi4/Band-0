
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42012962(void)

{
  undefined4 *puVar1;
  
  _DAT_ram_3fcdffd8 = gp + -0x6a0;
  _DAT_ram_3fcb813c = 0;
  _DAT_ram_3fcb8140 = 0;
  _DAT_ram_3fcb8144 = 0;
  _DAT_ram_3fcdffd4 = 0x3fcb8148;
  _DAT_ram_3fcb8170 = 0x4200290e;
  _DAT_ram_3fcb8160 = 1;
  puVar1 = (undefined4 *)thunk_FUN_ram_403904a6(4);
  *(undefined4 **)(gp + -0x720) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  *puVar1 = 0;
  FUN_ram_42012378();
  return;
}

