
void FUN_ram_4209c6a6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,uint param_6)

{
  char *pcStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [36];
  
  FUN_ram_4039c11e(auStack_4c,&DAT_ram_3c0fad54,0xc);
  pcStack_58 = " replying to others.";
  uStack_54 = param_3;
  uStack_50 = param_4;
  if ((param_6 & 0xc18580) == 0) {
    FUN_ram_4205fd6a(param_1,param_2,3,&pcStack_58,auStack_4c,auStack_40);
  }
  else {
    FUN_ram_4205fd2c();
  }
  FUN_ram_4039c11e(param_5,auStack_40,0x10);
  return;
}

