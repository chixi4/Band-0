
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202f18a(undefined4 param_1)

{
  int iVar1;
  
  while (iVar1 = FUN_ram_42036d3a(), iVar1 != 0xffff) {
    FUN_ram_4202efe4(iVar1,param_1);
  }
  if (*(char *)(_DAT_ram_3fcb6ba0 + 0x110) == '\x01') {
    FUN_ram_4202e20e(param_1);
    return;
  }
  return;
}

