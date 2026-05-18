
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40392522(void)

{
  int *piVar1;
  
  FUN_ram_403925a8(*_DAT_ram_3fcc5200);
  for (piVar1 = (int *)_DAT_ram_3fcc5200[1]; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    *(undefined1 *)(piVar1 + 3) = 0;
  }
  return;
}

