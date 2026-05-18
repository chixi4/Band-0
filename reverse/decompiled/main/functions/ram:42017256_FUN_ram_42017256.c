
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42017256(void)

{
  if (DAT_ram_3fcc4fae != '\0') {
    DAT_ram_3fcc4fad = 0;
    FUN_ram_4202ee74();
    if (_DAT_ram_3fcc4fb4 == 2) {
      if (*(short *)(gp + -0x7a4) != -1) {
        FUN_ram_4202ef4e(*(short *)(gp + -0x7a4),0x13);
        *(undefined2 *)(gp + -0x7a4) = 0xffff;
      }
    }
    FUN_ram_42016ca2(3);
    return 0;
  }
  return 0;
}

