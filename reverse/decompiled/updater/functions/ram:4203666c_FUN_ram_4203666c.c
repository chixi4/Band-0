
void FUN_ram_4203666c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar1 = 0;
    do {
      uVar2 = uVar1 & 0xff;
      FUN_ram_4203541e(param_1);
      uVar1 = uVar1 + 1;
      FUN_ram_42035c86(param_1,uVar2);
    } while (uVar1 != 8);
    *(undefined2 *)(param_1 + 0x15c) = 0;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffbf;
    return;
  }
  return;
}

