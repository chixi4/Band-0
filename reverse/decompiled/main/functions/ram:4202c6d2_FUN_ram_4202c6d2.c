
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202c6d2(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_420305a2();
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 8) = 4;
    *(undefined2 *)(iVar1 + 6) = 4;
    *(undefined2 *)(iVar1 + 10) = _DAT_ram_3fcb6b94;
    *(undefined1 **)(iVar1 + 0x10) = &LAB_ram_4201c748;
  }
  return;
}

