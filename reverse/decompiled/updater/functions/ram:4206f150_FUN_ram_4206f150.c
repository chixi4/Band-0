
void FUN_ram_4206f150(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    FUN_ram_42028e3e(iVar1 + 0x14c);
    FUN_ram_42028e3e(iVar1 + 0x158);
    FUN_ram_4202e842(iVar1 + 0x48);
    FUN_ram_420293a0(*(undefined4 *)(iVar1 + 0xf4));
    FUN_ram_4206e8bc(*(undefined4 *)(iVar1 + 0xfc));
    FUN_ram_420293a6(iVar1,0x230);
    return;
  }
  return;
}

