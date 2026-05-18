
void thunk_FUN_ram_4204c508(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((param_1 + 4) * 4 + 0x3fcb0920);
  uVar1 = 0;
  do {
    if ((1 << (uVar1 & 0x1f) & ~param_2 & uVar2) != 0) {
      (*(code *)&SUB_ram_40011e74)(uVar1);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0xc);
  return;
}

