
void FUN_ram_42016cec(void)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  
  iVar1 = 5;
  do {
    iVar2 = FUN_ram_4202bab0();
    if (iVar2 != 0) break;
    iVar1 = iVar1 + -1;
    FUN_ram_40398498(0x14);
  } while (iVar1 != 0);
  iVar1 = FUN_ram_4202bab0();
  if (iVar1 != 0) {
    uStack_1c = 0x300202;
    uStack_16 = 0;
    uStack_14 = 0;
    uStack_18 = 0x50;
    iVar1 = FUN_ram_4202eb54(&DAT_ram_3fcb960c);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_ram_4202e86c(0,0,0x7fffffff,&uStack_1c,0x42006d5e,0), iVar1 == 0)) {
      FUN_ram_42016ca2(1);
    }
  }
  return;
}

