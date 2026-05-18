
void FUN_ram_42017d62(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
  if ((uVar1 & 1) != 0) {
    FUN_ram_40394d60();
    puVar2 = *(uint **)(param_1 * 4 + 0x3c075708);
    *puVar2 = *puVar2 & 0xfffffffb;
    FUN_ram_40394d8e();
    return;
  }
  return;
}

