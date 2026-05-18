
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390d1e(void)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = _DAT_ram_60008040;
  FUN_ram_40394d60();
  for (puVar2 = _DAT_ram_3fcb0de0; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[4]) {
    if ((*puVar2 & uVar1) != 0) {
      FUN_ram_40394d8e();
      (*(code *)puVar2[1])(puVar2[2]);
      FUN_ram_40394d60();
    }
  }
  FUN_ram_40394d8e();
  _DAT_ram_60008044 = uVar1;
  return;
}

