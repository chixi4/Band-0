
undefined4 FUN_ram_4205f8c0(int param_1,int param_2)

{
  if (param_1 == 0) {
    return 0x102;
  }
  if (param_2 != 0) {
    FUN_ram_4039c11e(param_2,*(undefined4 *)(param_1 + 0xc),0xc);
    return 0;
  }
  return 0x102;
}

