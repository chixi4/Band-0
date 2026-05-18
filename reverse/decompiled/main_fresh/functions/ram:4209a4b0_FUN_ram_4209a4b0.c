
void FUN_ram_4209a4b0(undefined4 param_1,int param_2,uint param_3)

{
  if (param_2 != 0) {
    FUN_ram_4209a118();
    if ((((param_3 & 8) != 0) && (*(int *)(param_2 + 0x30) == 1)) && ((param_3 & 0x100) == 0)) {
      *(undefined4 *)(param_2 + 0x20c) = 1;
    }
    FUN_ram_420992a6(0x4208997e,*(undefined4 *)(param_2 + 0x210),0);
    FUN_ram_4209915a(1,0,0x4208997e,*(undefined4 *)(param_2 + 0x210),0);
    return;
  }
  return;
}

