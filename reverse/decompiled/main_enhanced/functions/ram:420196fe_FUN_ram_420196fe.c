
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420196fe(void)

{
  int iVar1;
  int in_a3;
  int in_a4;
  int in_a5;
  
  iVar1 = _DAT_ram_3fcc5038;
  if (in_a5 != in_a3) {
    return;
  }
  if (_DAT_ram_3fcc5038 == in_a4) {
    _DAT_ram_3fcc5038 = 0;
    *(char *)(gp + -0x79e) = (char)iVar1;
    FUN_ram_42018dcc();
    return;
  }
  return;
}

