
undefined4 FUN_ram_4201883c(uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (-1 < (int)param_1) {
    uVar2 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
    uVar3 = 0x102;
    if ((uVar2 & 1) != 0) {
      puVar1 = (uint *)(((param_1 & 0xff) + 0x18002401) * 4);
      *puVar1 = (param_2 & 7) << 0xc | *puVar1 & 0xffff8fff;
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0x102;
}

