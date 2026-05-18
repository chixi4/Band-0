
undefined4 FUN_ram_4204839a(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (-1 < (int)param_1) {
    uVar2 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
    uVar3 = 0x102;
    if ((uVar2 & 1) != 0) {
      FUN_ram_42047bea(param_1);
      FUN_ram_42047f94(param_1);
      FUN_ram_42047c92(param_1);
      FUN_ram_42047d6c(param_1);
      puVar1 = (uint *)(((param_1 & 0xff) + 0x18002401) * 4);
      *puVar1 = *puVar1 & 0xffff8fff | 0x1000;
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0x102;
}

