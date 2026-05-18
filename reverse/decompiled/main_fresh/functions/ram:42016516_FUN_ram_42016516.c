
undefined1 FUN_ram_42016516(void)

{
  int iVar1;
  undefined1 uStack_15;
  undefined4 auStack_14 [4];
  
  if (DAT_ram_3fcc4f98 == '\0') {
    return 0xb;
  }
  iVar1 = FUN_ram_4204beee(0x3c0a86f0,0,auStack_14);
  if (iVar1 == 0) {
    uStack_15 = 0xb;
    FUN_ram_4204c1dc(auStack_14[0],0x3c0a8790,&uStack_15);
    FUN_ram_4204c3d0(auStack_14[0]);
  }
  else {
    uStack_15 = 0xb;
  }
  return uStack_15;
}

