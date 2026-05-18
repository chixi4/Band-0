
undefined4 FUN_ram_42017fba(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  
  if (param_1 < 0) {
    return 0x102;
  }
  uVar1 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0x102;
  }
  else {
    iVar2 = FUN_ram_4201889c(param_1);
    if (iVar2 != 0) {
      FUN_ram_40399b58();
      return 0x102;
    }
    FUN_ram_40394d60();
    puVar4 = *(uint **)(param_1 * 4 + 0x3c075708);
    *puVar4 = *puVar4 | 0x80;
    FUN_ram_40394d8e();
    uVar3 = 0;
  }
  return uVar3;
}

