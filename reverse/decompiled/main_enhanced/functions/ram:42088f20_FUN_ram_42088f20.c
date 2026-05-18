
uint FUN_ram_42088f20(uint param_1)

{
  byte abStack_14 [12];
  
  abStack_14[0] = 2;
  abStack_14[1] = 3;
  abStack_14[2] = 1;
  abStack_14[3] = 0;
  if (param_1 < 4) {
    param_1 = (uint)abStack_14[param_1];
  }
  else {
    FUN_ram_4207a038(1,0x20,1,&DAT_ram_3c0ff09c,param_1);
  }
  return param_1;
}

