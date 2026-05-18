
undefined4 FUN_ram_42018466(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (-1 < param_1) {
    uVar1 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
    uVar2 = 0x102;
    if ((uVar1 & 1) != 0) {
      if ((param_2 & 1) == 0) {
        FUN_ram_42017ea6(param_1);
      }
      else {
        FUN_ram_42018204();
      }
      if ((param_2 & 2) == 0) {
        FUN_ram_42018250(param_1);
      }
      else {
        FUN_ram_420182da();
      }
      if ((param_2 & 4) == 0) {
        FUN_ram_4201836a(param_1);
      }
      else {
        FUN_ram_420183b4();
      }
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x102;
}

