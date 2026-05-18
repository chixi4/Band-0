
undefined4 * FUN_ram_40394c8a(uint param_1,undefined4 param_2,undefined4 param_3)

{
  param_1 = param_1 & 0xfffffff0;
  FUN_ram_40399daa(param_1,0x3c07ab3c,0);
  (*(code *)&SUB_ram_40010488)(param_1,0,0);
  (*(code *)&SUB_ram_40010488)(param_1 - 0x9c,0,0x90);
  *(uint *)(param_1 - 0x90) = param_1;
  *(undefined4 *)(param_1 - 0xa0) = param_2;
  *(undefined4 *)(param_1 - 0x78) = param_3;
  *(undefined4 *)(param_1 - 0x94) = gp;
  return (undefined4 *)(param_1 - 0xa0);
}

