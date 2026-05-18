
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42050fee(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 3) {
    uVar1 = _DAT_ram_3c0793d4;
    if (param_2 != (undefined4 *)0x0) {
      uVar1 = *param_2;
    }
    *(undefined4 *)(&DAT_ram_3fcb57ec + param_1 * 4) = uVar1;
  }
  return;
}

