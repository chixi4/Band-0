
undefined4 FUN_ram_42018204(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (-1 < param_1) {
    uVar2 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
    uVar3 = 0x102;
    if ((uVar2 & 1) != 0) {
      puVar1 = (uint *)((param_1 + 0x18002401) * 4);
      uVar3 = 0;
      *puVar1 = *puVar1 | 0x200;
    }
    return uVar3;
  }
  return 0x102;
}

