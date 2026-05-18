
void FUN_ram_4209bd96(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x200);
    while (puVar1 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar1;
      FUN_ram_4209bc64();
    }
    FUN_ram_420992a6(&LAB_ram_4208bd58,param_1,0);
    thunk_FUN_ram_40390634(param_1);
    return;
  }
  return;
}

