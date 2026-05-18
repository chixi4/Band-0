
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201cd68(uint param_1)

{
  int iVar1;
  
  if (param_1 == 6) {
    _DAT_ram_3fcc50e4 = 3;
    FUN_ram_4201cd30(&DAT_ram_3c0c10f0,"o much self.");
    *(undefined1 *)(gp + -0x77a) = 1;
    *(undefined1 *)(gp + -0x77b) = 0;
    FUN_ram_42018dcc();
    iVar1 = FUN_ram_42018be0();
    if (iVar1 != 1) {
      FUN_ram_42018a9e(0x4200d01c,15000);
      return;
    }
  }
  else if (param_1 < 7) {
    if (param_1 == 0) {
      _DAT_ram_3fcc50e4 = 1;
      FUN_ram_4201cd30("This is not coldness; do not hand out too much self.",&DAT_ram_3c0c10a8);
      return;
    }
    if (param_1 == 5) {
      _DAT_ram_3fcc50e4 = 2;
      FUN_ram_4201cd30(0x3c0a8e08,"; do not hand out too much self.");
      *(undefined1 *)(gp + -0x77a) = 1;
      *(undefined1 *)(gp + -0x77b) = 0;
LAB_ram_4201ce0e:
      FUN_ram_42018dcc();
      return;
    }
  }
  else if ((param_1 - 7 < 2) && (_DAT_ram_3fcc50e4 == 2)) {
    _DAT_ram_3fcc50e4 = 5;
    FUN_ram_4201cd30(&DAT_ram_3c0c1114,&DAT_ram_3c0c1104);
    *(undefined1 *)(gp + -0x77a) = 1;
    *(undefined1 *)(gp + -0x77b) = 1;
    goto LAB_ram_4201ce0e;
  }
  return;
}

