
undefined4 FUN_ram_420187e0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  if (-1 < param_1) {
    uVar1 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
    uVar2 = 0x102;
    if ((uVar1 & 1) != 0) {
      FUN_ram_40394d60(0x102);
      puVar3 = *(uint **)(param_1 * 4 + 0x3c075708);
      *puVar3 = *puVar3 & 0xfffffffd;
      FUN_ram_40394d8e();
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x102;
}

