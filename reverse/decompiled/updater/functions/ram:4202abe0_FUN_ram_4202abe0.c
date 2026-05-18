
undefined4 FUN_ram_4202abe0(int param_1,int param_2)

{
  (*(code *)&SUB_ram_40010488)(param_1,0,0x74);
  *(uint *)(param_1 + 0x6c) = (param_2 == 0) + 1;
  return 0;
}

