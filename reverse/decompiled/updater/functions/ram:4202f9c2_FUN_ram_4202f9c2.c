
void FUN_ram_4202f9c2(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x44) != 1) {
      FUN_ram_42024774(param_1 + 0xc);
      FUN_ram_42024774(param_1 + 0x14);
      FUN_ram_4202f9ba(param_1 + 0x1c);
      FUN_ram_42024774(param_1 + 0x34);
      FUN_ram_42024774(param_1 + 4);
    }
    uVar1 = 0;
    if (*(int *)(param_1 + 0x58) != 0) {
      while( true ) {
        if (*(uint *)(param_1 + 0x5c) <= uVar1) break;
        iVar2 = uVar1 * 0x18;
        uVar1 = uVar1 + 1;
        FUN_ram_4202f9ba(*(int *)(param_1 + 0x58) + iVar2);
      }
      FUN_ram_420293a0();
    }
    FUN_ram_420293a6(param_1,0x60);
    return;
  }
  return;
}

