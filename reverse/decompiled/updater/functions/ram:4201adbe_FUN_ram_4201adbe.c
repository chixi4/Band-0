
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201adbe(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  uStack_20 = 0;
  uStack_1c = 1;
  uStack_18 = 0x3c07138c;
  uStack_14 = 1;
  uStack_24 = param_2;
  iVar1 = FUN_ram_4201bd50(&uStack_24,0x3fcb66e4);
  if (iVar1 == 0) {
    _DAT_ram_3fcb66e8 = *param_1;
    *param_3 = 0x3fcb66e4;
  }
  return;
}

