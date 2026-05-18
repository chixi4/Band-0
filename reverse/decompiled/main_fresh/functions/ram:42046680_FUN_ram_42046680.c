
uint FUN_ram_42046680(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 7;
  uVar2 = 0;
  do {
    uVar1 = uVar3 & 0x1f;
    uVar3 = uVar3 - 1;
    uVar2 = (param_1 * (param_2 >> uVar1 & 1U) ^ -(uVar2 >> 7) & 0x1d ^ uVar2 << 1) & 0xff;
  } while (uVar3 != 0xffffffff);
  return uVar2;
}

