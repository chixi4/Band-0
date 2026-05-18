
void FUN_ram_4206fac8(int param_1)

{
  undefined4 uVar1;
  
  FUN_ram_4206f150();
  FUN_ram_420293a0(*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_ram_4206e7ba();
    FUN_ram_420293a0(*(undefined4 *)(param_1 + 0x44));
  }
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return;
}

