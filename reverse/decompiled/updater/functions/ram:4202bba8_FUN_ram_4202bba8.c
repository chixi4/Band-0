
void FUN_ram_4202bba8(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_4;
  uStack_14 = param_3;
  (*(code *)&SUB_ram_40010488)(param_3,0,0x10);
  FUN_ram_4202ba9c(param_1,param_2,0xff,param_4 & 0xff,0,0,0x4201b850,&uStack_18);
  return;
}

