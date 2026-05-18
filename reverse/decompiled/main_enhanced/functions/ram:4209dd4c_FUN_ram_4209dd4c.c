
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4209dd4c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  char cStack_71;
  int iStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = _DAT_ram_3fcc4c38;
  if ((_DAT_ram_3fcc4ab8 != _DAT_ram_3fcc4c38) ||
     (iVar2 = FUN_ram_4039c0e0(0x3fcc4a98,0x3fcc4c18,_DAT_ram_3fcc4c38), iVar2 != 0)) {
    (*(code *)&SUB_ram_40010488)(auStack_40,0,0x20);
    puVar5 = (undefined1 *)0x3fcc4c18;
    uStack_6c = _DAT_ram_3fcc4c14;
    if (_DAT_ram_3fcc4b10 == 2) {
      FUN_ram_4039c11e(auStack_60,0x3fcc4c18,0x10);
      puVar5 = auStack_60;
      uStack_50 = _DAT_ram_3fcc4c28;
      uStack_4c = _DAT_ram_3fcc4c2c;
      uStack_48 = _DAT_ram_3fcc4c30;
      uStack_44 = _DAT_ram_3fcc4c34;
    }
    iVar3 = thunk_FUN_ram_4207fa46
                      (&cStack_71,&iStack_70,auStack_68,&uStack_6c,auStack_40,iVar1,0x10);
    iVar2 = _DAT_ram_3fcc4c38;
    iVar1 = _DAT_ram_3fcc4c08;
    if ((((iVar3 != 0) || (cStack_71 != '\0')) || (iStack_70 != _DAT_ram_3fcc4c08)) ||
       ((iVar3 = FUN_ram_4039c0e0(auStack_68,0x3fcc4b4e,6), iVar3 != 0 ||
        (iVar3 = FUN_ram_4039c0e0(puVar5,auStack_40,iVar2), iVar3 != 0)))) {
      puVar5 = (undefined1 *)0x3fcc4c18;
      if (_DAT_ram_3fcc4b10 == 2) {
        FUN_ram_4039c11e(auStack_40,0x3fcc4c18,0x10);
        puVar5 = auStack_40;
        uStack_30 = _DAT_ram_3fcc4c28;
        uStack_2c = _DAT_ram_3fcc4c2c;
        uStack_28 = _DAT_ram_3fcc4c30;
        uStack_24 = _DAT_ram_3fcc4c34;
      }
      if (_DAT_ram_3fcc4b0c == 1) {
        uVar6 = 0x1c;
        uVar4 = 1;
      }
      else {
        uVar6 = 0x14;
        uVar4 = _DAT_ram_3fcc4c0c;
      }
      FUN_ram_4209dcb2(0x3fcc4bbc,iVar1,0x3fcc4b4e,_DAT_ram_3fcc4c14,uVar4,0x3fcc4bd4,
                       _DAT_ram_3fcc4c10,puVar5,iVar2,uVar6);
      _DAT_ram_3fcc4ab8 = _DAT_ram_3fcc4c38;
      FUN_ram_4039c11e(0x3fcc4a98,0x3fcc4c18);
    }
  }
  return 0;
}

