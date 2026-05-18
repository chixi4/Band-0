
void FUN_ram_42030284(uint param_1,undefined4 param_2)

{
  undefined1 uStack_18;
  undefined1 auStack_17 [19];
  
  if (1 < param_1) {
    param_1 = param_1 & 1;
  }
  uStack_18 = (undefined1)param_1;
  FUN_ram_4039c11e(auStack_17,param_2,6);
  FUN_ram_420332b4(0x2028,&uStack_18,7,0,0);
  return;
}

