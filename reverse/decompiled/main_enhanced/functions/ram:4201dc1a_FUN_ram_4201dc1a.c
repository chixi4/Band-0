
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201dc1a(void)

{
  int iVar1;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a4 [36];
  undefined1 auStack_80 [108];
  
  iVar1 = FUN_ram_4202183c();
  if (iVar1 == 0) {
    FUN_ram_42021a56(0x4200cd68,0);
    DAT_ram_3fcc50e0 = 1;
    FUN_ram_4201cd30(&DAT_ram_3c0c1450,&DAT_ram_3c0c143c);
    uStack_b0 = 0x3c0a8ce4;
    uStack_ac = 0x3c0a8cec;
    uStack_b4 = 0;
    uStack_a8 = 0x10406;
    iVar1 = FUN_ram_42021daa(&uStack_b4);
    if (iVar1 != 0) goto LAB_ram_4201dd42;
    (*(code *)&SUB_ram_40010488)(auStack_a4,0,0x21);
    FUN_ram_42021f44(auStack_a4,0x21);
    (*(code *)&SUB_ram_400106ac)(auStack_80,0x60,0x3c0a8d20,auStack_a4,0x3c0a8cec);
    iVar1 = FUN_ram_420210fa(auStack_80,1,0x3fcc50d8);
    if (iVar1 != 0) {
      _DAT_ram_3fcc50e4 = 1;
      FUN_ram_4201f046();
      iVar1 = FUN_ram_4201ee6a();
      if (iVar1 != 0) {
        FUN_ram_4201da44();
        FUN_ram_4201eee8();
        FUN_ram_4201f096();
      }
      iVar1 = FUN_ram_4202320c();
      if (iVar1 == 0) {
        FUN_ram_420232d6();
        FUN_ram_42021b72();
      }
      goto LAB_ram_4201dd26;
    }
    _DAT_ram_3fcc50e4 = 5;
    FUN_ram_4201cd30("rete date today.","al onto one concrete date today.");
    *(undefined1 *)(gp + -0x77a) = 1;
    *(undefined1 *)(gp + -0x77b) = 1;
  }
  else {
LAB_ram_4201dd42:
    _DAT_ram_3fcc50e4 = 5;
    FUN_ram_4201cd30(&DAT_ram_3c0c1498,&DAT_ram_3c0c148c);
    *(undefined1 *)(gp + -0x77a) = 1;
    *(undefined1 *)(gp + -0x77b) = 1;
  }
  FUN_ram_42018dcc();
LAB_ram_4201dd26:
  _DAT_ram_3fcc50d4 = 0;
  FUN_ram_40397f1c(0);
  return;
}

