
void FUN_ram_42078e7e(int param_1,undefined4 param_2)

{
  byte bVar1;
  char *pcVar2;
  
  bVar1 = *(byte *)(param_1 + 0x32);
  if (bVar1 == 3) {
    if (*(char *)(param_1 + 0x28a) == '\0') {
      pcVar2 = " an easy pace.";
    }
    else {
      pcVar2 = "tiful at an easy pace.";
    }
  }
  else if (bVar1 < 4) {
    if (bVar1 == 1) {
      if (*(char *)(param_1 + 0x28a) == '\0') {
        pcVar2 = "sult forward.";
      }
      else {
        pcVar2 = &DAT_ram_3c0c4170;
      }
    }
    else {
      if (bVar1 != 2) {
        return;
      }
      if (*(char *)(param_1 + 0x28a) == '\0') {
        pcVar2 = "beautiful at an easy pace.";
      }
      else {
        pcVar2 = "Make it beautiful at an easy pace.";
      }
    }
  }
  else {
    if (bVar1 != 4) {
      return;
    }
    pcVar2 = &DAT_ram_3c0c415c;
  }
  FUN_ram_4039c54e(param_2,pcVar2);
  return;
}

