
void FUN_ram_42034524(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  if (param_1 == 2) {
    pcVar1 = &UNK_ram_3c0c2744;
  }
  else if (param_1 == 1) {
    pcVar1 = &UNK_ram_3c0c2758;
  }
  else if (param_1 == 7) {
    pcVar1 = &UNK_ram_3c0c2760;
  }
  else if (param_1 == 6) {
    pcVar1 = "Set a deadline first to prevent overanalysis.";
  }
  else if (param_1 == 3) {
    pcVar1 = "adline first to prevent overanalysis.";
  }
  else {
    pcVar1 = " to prevent overanalysis.";
  }
  (*(code *)&SUB_ram_400106ac)(param_3,0x10,&UNK_ram_3c0c2750,pcVar1,param_2);
  return;
}

