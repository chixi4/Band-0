
undefined4 FUN_ram_42018696(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  if (-1 < param_1) {
    uVar1 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
    uVar2 = 0x102;
    if ((uVar1 & 1) != 0) {
      puVar3 = *(uint **)(param_1 * 4 + 0x3c075708);
      if ((param_2 & 1) == 0) {
        uVar1 = *puVar3 & 0xffffffef;
      }
      else {
        uVar1 = *puVar3 | 0x10;
      }
      *puVar3 = uVar1;
      if ((param_2 & 2) == 0) {
        uVar1 = *puVar3 & 0xfffffffe;
      }
      else {
        uVar1 = *puVar3 | 1;
      }
      *puVar3 = uVar1;
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x102;
}

