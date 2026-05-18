
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201d01c(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (param_1 == 2) {
    _DAT_ram_3fcc50e4 = 4;
    pcVar2 = "Look farther today; do not fight for a moment\'s win.";
    uVar1 = 0x3c0a8b48;
  }
  else {
    if (param_1 != 3) {
      if (param_1 == 1) {
        _DAT_ram_3fcc50e4 = 3;
        FUN_ram_4201cd30(&DAT_ram_3c0c10f0,"o much self.");
        return;
      }
      return;
    }
    _DAT_ram_3fcc50e4 = 5;
    pcVar2 = "ay; do not fight for a moment\'s win.";
    uVar1 = 0x3c0a8b7c;
  }
  FUN_ram_4201cd30(uVar1,pcVar2);
  *(undefined1 *)(gp + -0x77a) = 1;
  *(undefined1 *)(gp + -0x77b) = 1;
  FUN_ram_42018dcc();
  return;
}

