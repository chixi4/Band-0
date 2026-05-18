
uint FUN_ram_42019694(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 ^ param_1 >> 0x10) * 0x7feb352d;
  uVar1 = (uVar1 >> 0xf ^ uVar1) * -0x7b935975;
  return uVar1 >> 0x10 ^ uVar1;
}

