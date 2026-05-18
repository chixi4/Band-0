
uint FUN_ram_420337b4(uint param_1,uint param_2,uint param_3)

{
  return (param_2 & 3) << 0xc | param_1 & 0xfff | (param_3 & 3) << 0xe;
}

