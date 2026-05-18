
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420237fa(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (DAT_ram_3fcc1a5c != '\0') goto LAB_ram_42023840;
  iVar1 = FUN_ram_42021a4c();
  if (iVar1 == 4) {
LAB_ram_42023874:
    if (DAT_ram_3fcc1a5c != '\0') goto LAB_ram_42023840;
    FUN_ram_42023376(2);
    iVar1 = FUN_ram_4202339a();
    if (DAT_ram_3fcc1a5c != '\0') goto LAB_ram_42023840;
    if (iVar1 == 0) {
      iVar1 = FUN_ram_42010096();
      if ((iVar1 == 0) || (pcVar3 = (char *)(iVar1 + 0x10), *(char *)(iVar1 + 0x10) == '\0')) {
        pcVar3 = "nds that keep draining you.";
      }
      FUN_ram_4039c61e(0x3fcc1a70,pcVar3,0x1f);
      DAT_ram_3fcc1a8f = 0;
      FUN_ram_4039c61e(0x3fcc1a90,&DAT_ram_3fcc1acc,0x1f);
      _DAT_ram_3fcc1ab4 = _DAT_ram_3fcc1bac;
      DAT_ram_3fcc1aaf = 0;
      iVar1 = FUN_ram_4039c438(0x3fcc1a70,0x3fcc1a90);
      DAT_ram_3fcc1ab0 = '\x01';
      if (iVar1 == 0) {
        DAT_ram_3fcc1ab0 = DAT_ram_3fcc1bb0;
      }
      DAT_ram_3fcc1ab8 = 1;
      if (_DAT_ram_3fcc1abc != (code *)0x0) {
        (*_DAT_ram_3fcc1abc)(2,0x3fcc1a70,_DAT_ram_3fcc1ac0);
      }
      uVar2 = 3;
      if (DAT_ram_3fcc1ab0 == '\0') goto LAB_ram_4202383c;
      if ((DAT_ram_3fcc1a5c != '\0') || (iVar1 = FUN_ram_42023682(3), DAT_ram_3fcc1a5c != '\0'))
      goto LAB_ram_42023840;
      if (iVar1 == 0) {
        iVar1 = -1;
      }
    }
LAB_ram_4202382a:
    _DAT_ram_3fcc1a60 = iVar1;
    uVar2 = 7;
  }
  else {
    iVar1 = FUN_ram_4202183c();
    if (iVar1 != 0) {
      _DAT_ram_3fcc1a60 = -1;
      iVar1 = _DAT_ram_3fcc1a60;
      goto LAB_ram_4202382a;
    }
    iVar1 = FUN_ram_42022260();
    if (iVar1 != 0) {
      FUN_ram_42023376(1);
      iVar1 = FUN_ram_420222d8(12000);
      if (DAT_ram_3fcc1a5c != '\0') goto LAB_ram_42023840;
      if (iVar1 == 0) goto LAB_ram_42023874;
      goto LAB_ram_4202382a;
    }
    _DAT_ram_3fcc1a60 = 0x105;
    uVar2 = 8;
  }
LAB_ram_4202383c:
  FUN_ram_42023376(uVar2);
LAB_ram_42023840:
  _DAT_ram_3fcc1ac4 = 0;
  FUN_ram_40397f1c(0);
  return;
}

