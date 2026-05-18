
void FUN_ram_4209daa2(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_ram_4039c11e(param_1 + 0x22a,param_2,6);
    (*(code *)&SUB_ram_40010488)(param_1 + 0x160,0,8);
    *(undefined4 *)(param_1 + 0x15c) = 1;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    (*(code *)&SUB_ram_40010488)(param_1 + 0x44,0,0x68);
    *(undefined4 *)(param_1 + 0x118) = 0;
    (*(code *)&SUB_ram_40010488)(param_1 + 0xac,0,0x68);
    (*(code *)&SUB_ram_40010488)(param_1 + 0x174,0,0x24);
    (*(code *)&SUB_ram_40010488)(param_1 + 0x198,0,0x24);
    return;
  }
  return;
}

