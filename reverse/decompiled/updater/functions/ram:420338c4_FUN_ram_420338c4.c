
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420338c4(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(char *)(_DAT_ram_3fcdfb1c + 0x4c) != '\0') {
    if (*(byte *)(_DAT_ram_3fcdfb1c + 0x4d) < param_1) {
      return 3;
    }
    FUN_ram_4203385e(3);
  }
  iVar1 = _DAT_ram_3fcdfb1c;
  *(undefined1 *)(_DAT_ram_3fcdfb1c + 0x4c) = 1;
  *(char *)(iVar1 + 0x4d) = (char)param_1;
  *(undefined4 *)(iVar1 + 0x1c) = param_2;
  *(undefined4 *)(iVar1 + 0x20) = param_3;
  return 0;
}

