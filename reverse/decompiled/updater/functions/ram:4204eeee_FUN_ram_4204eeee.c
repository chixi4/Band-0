
void FUN_ram_4204eeee(int param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  
  puVar2 = &DAT_ram_3fcb576c;
  for (uVar1 = 0x3c; (int)uVar1 < param_1; uVar1 = uVar1 + 1) {
    if ((int)uVar1 < 0x40) {
      if ((1 << (uVar1 & 0x1f) & *(uint *)(param_2 + 4)) != 0) {
        FUN_ram_4204ecbc(puVar2);
      }
    }
    puVar2 = puVar2 + 0x14;
  }
  return;
}

