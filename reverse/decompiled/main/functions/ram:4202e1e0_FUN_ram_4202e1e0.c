
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202e1e0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(_DAT_ram_3fcb6ba0 + 0x130); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (*(code *)*puVar1)(param_1,puVar1[1]);
  }
  return;
}

