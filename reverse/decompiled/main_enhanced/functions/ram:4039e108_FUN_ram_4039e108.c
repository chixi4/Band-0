
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4039e108(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4039e0e8();
  bVar1 = true;
  if (iVar2 != 0) {
    bVar1 = (int)(uint)*(byte *)(param_1 + 0x1d6) < *(short *)(param_1 + 0x186) + -1;
  }
  if ((((*(char *)(param_1 + 0x168) == '\0') || (*(char *)(param_1 + 0x1d4) != '\0')) ||
      (*(char *)(param_1 + 0xe) == '\0')) ||
     (((uint)*(byte *)(param_1 + 0x1d6) == *(byte *)(param_1 + 0x1d7) - 1 ||
      ((*(code **)(_DAT_ram_3fcb84cc + 0xc) != (code *)0x0 &&
       (iVar2 = (**(code **)(_DAT_ram_3fcb84cc + 0xc))(), iVar2 != 0)))))) {
    bVar1 = false;
  }
  return bVar1;
}

