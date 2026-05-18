
void FUN_ram_4201777a(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined1 auStack_20 [24];
  
  uVar1 = 100;
  if ((int)param_2 < 0x65) {
    uVar1 = param_2 & (int)~param_2 >> 0x1f;
  }
  FUN_ram_420176c4();
  FUN_ram_42017516(0x14,0x6c,0xa0,0x16,0);
  if (99 < (int)(uVar1 * 0x9a)) {
    FUN_ram_4201750a(0x17,0x6f,(int)(uVar1 * 0x9a) / 100,0x10,0);
  }
  (*(code *)&SUB_ram_400106ac)(auStack_20,0x10,0x3c0711d8,uVar1);
  FUN_ram_42017672(0x8e,auStack_20,0);
  FUN_ram_4201774e();
  return;
}

