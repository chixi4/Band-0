
void FUN_ram_4209ef00(int param_1)

{
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  (*(code *)&SUB_ram_40010488)(param_1 + 0x44,0,0x68);
  (*(code *)&SUB_ram_40010488)(param_1 + 0xac,0,0x68);
  (*(code *)&SUB_ram_40010488)(param_1 + 0x174,0,0x24);
  (*(code *)&SUB_ram_40010488)(param_1 + 0x198,0,0x24);
  return;
}

