
void FUN_ram_42073554(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != -1) {
      FUN_ram_4206c49a();
      *(undefined4 *)(param_1 + 0x10) = 0;
      FUN_ram_4206d7da(param_1 + 0x14,400);
      *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    }
    return;
  }
  return;
}

