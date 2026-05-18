
undefined4 FUN_ram_42048226(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (-1 < param_1) {
    uVar1 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
    uVar2 = 0x102;
    if ((uVar1 & 1) != 0) {
      if ((param_2 & 1) == 0) {
        FUN_ram_42047bea(param_1);
      }
      else {
        FUN_ram_42047f48();
      }
      if ((param_2 & 2) == 0) {
        FUN_ram_42047f94(param_1);
      }
      else {
        FUN_ram_4204801e();
      }
      if ((param_2 & 4) == 0) {
        FUN_ram_420480ae(param_1);
      }
      else {
        FUN_ram_420480f8();
      }
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x102;
}

