
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42019134(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_14 [4];
  
  iVar1 = FUN_ram_4201f03c();
  if (iVar1 != 0) {
    FUN_ram_42018dcc();
    return;
  }
  if (*(char *)(gp + -0x7a1) == '\0') {
    return;
  }
  iVar1 = FUN_ram_4201ee6a();
  if (iVar1 == 0) {
    return;
  }
  if (_DAT_ram_3fcc5010 == 0) {
    iVar1 = FUN_ram_42021020("ot try to explain everything today.",0x84c,iVar1,auStack_14);
    if (iVar1 != 0) {
      FUN_ram_4201eeb2(0);
    }
  }
  else {
    if (_DAT_ram_3fcc5010 != 1) goto LAB_ram_42019170;
    iVar2 = FUN_ram_42021020("st.",0x5b4,iVar1,auStack_14);
    if (iVar2 != 0) {
      FUN_ram_4201eeb2(0);
    }
    FUN_ram_42018f22(iVar1,0x3c,0x3c0a8f98,DAT_ram_3fcc500c == '\0');
    FUN_ram_42018f22(iVar1,0x6c,0x3c0a8fa0,DAT_ram_3fcc500c == '\x01');
    if (*(char *)(gp + -0x7a2) == '\0') {
      FUN_ram_4201f108(0,199);
      goto LAB_ram_42019170;
    }
  }
  FUN_ram_4201ef22();
LAB_ram_42019170:
  *(undefined1 *)(gp + -0x7a1) = 0;
  return;
}

