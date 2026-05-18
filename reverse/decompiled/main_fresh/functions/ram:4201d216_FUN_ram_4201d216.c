
void FUN_ram_4201d216(uint param_1,undefined4 param_2)

{
  char *pcVar1;
  
  if (0xfffff < (int)param_1) {
    (*(code *)&SUB_ram_400106ac)
              (param_2,0x10,"ight for a moment\'s win.",(int)param_1 >> 0x14,
               (param_1 & 0xfffff) * 100 >> 0x14);
    return;
  }
  if ((int)param_1 < 0x400) {
    pcVar1 = "win.";
  }
  else {
    param_1 = (int)param_1 >> 10;
    pcVar1 = "oment\'s win.";
  }
  (*(code *)&SUB_ram_400106ac)(param_2,0x10,pcVar1,param_1);
  return;
}

