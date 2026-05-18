
void FUN_ram_42076798(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)*(byte *)(*(int *)(gp + -0xb4) + 0x3f6);
  iVar2 = FUN_ram_42080830();
  if (iVar2 < (int)uVar1) {
    uVar1 = FUN_ram_42080830();
  }
  for (iVar2 = 0; iVar2 < (int)uVar1; iVar2 = iVar2 + 1) {
    thunk_EXT_FUN_ram_40011e74(iVar2 + 8);
  }
  return;
}

