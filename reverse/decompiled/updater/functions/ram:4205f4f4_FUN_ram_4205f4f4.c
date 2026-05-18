
uint FUN_ram_4205f4f4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  do {
    param_3 = param_3 + -1;
    uVar3 = (uint)*(byte *)(param_1 + param_3) - (uint)*(byte *)(param_2 + param_3);
    uVar2 = FUN_ram_4205f334(uVar3);
    uVar1 = (uVar3 ^ uVar1) & uVar2 ^ uVar3;
  } while (param_3 != 0);
  return uVar1;
}

