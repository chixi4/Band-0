
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42017154(void)

{
  int iVar1;
  
  if (DAT_ram_3fcc4fae != '\0') {
    DAT_ram_3fcc4fad = 0;
    FUN_ram_4202ee74();
    if ((_DAT_ram_3fcc4fb4 == 2) && (*(short *)(gp + -0x7a4) != -1)) {
      FUN_ram_4202ef4e(*(short *)(gp + -0x7a4),0x13);
      FUN_ram_40398498(10);
    }
    if (_DAT_ram_3fcc4fb8 != 0) {
      FUN_ram_42023ae4();
      _DAT_ram_3fcc4fb8 = 0;
    }
    iVar1 = FUN_ram_42034d72();
    if ((iVar1 == 0) && (_DAT_ram_3fcc4fa4 != 0)) {
      FUN_ram_403975e0(_DAT_ram_3fcc4fa4,200);
    }
    FUN_ram_40398498(5);
    FUN_ram_42034d2c();
    FUN_ram_4202519c();
    FUN_ram_420250ac();
    if (_DAT_ram_3fcc4fa4 != 0) {
      FUN_ram_4039782c();
      _DAT_ram_3fcc4fa4 = 0;
    }
    *(undefined2 *)(gp + -0x7a4) = 0xffff;
    DAT_ram_3fcc4fae = '\0';
    DAT_ram_3fcc4fa0 = 0;
    FUN_ram_42016ca2(0);
  }
  return 0;
}

