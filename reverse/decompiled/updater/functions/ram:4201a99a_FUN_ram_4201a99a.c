
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201a99a(void)

{
  int *piVar1;
  
  FUN_ram_4201ae0a(*_DAT_ram_3fcb66dc);
  for (piVar1 = (int *)_DAT_ram_3fcb66dc[1]; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    *(undefined1 *)(piVar1 + 3) = 0;
  }
  return;
}

