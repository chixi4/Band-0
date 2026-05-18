
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204ab92(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  char *pcStack_18;
  undefined1 uStack_14;
  
  uStack_20 = 0;
  uStack_1c = 1;
  pcStack_18 = "hen needs.";
  uStack_14 = 1;
  uStack_24 = param_2;
  iVar1 = FUN_ram_4204bbc4(&uStack_24,0x3fcc5208);
  if (iVar1 == 0) {
    _DAT_ram_3fcc520c = *param_1;
    *param_3 = 0x3fcc5208;
  }
  return;
}

