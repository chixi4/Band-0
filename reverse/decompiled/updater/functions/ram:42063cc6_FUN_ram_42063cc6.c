
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42063cc6(void)

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
  
  iVar1 = _DAT_ram_3fcb6310;
  if ((_DAT_ram_3fcb6190 != _DAT_ram_3fcb6310) ||
     (iVar2 = FUN_ram_40399d6c(0x3fcb6170,0x3fcb62f0,_DAT_ram_3fcb6310), iVar2 != 0)) {
    (*(code *)&SUB_ram_40010488)(auStack_40,0,0x20);
    puVar5 = (undefined1 *)0x3fcb62f0;
    uStack_6c = _DAT_ram_3fcb62ec;
    if (_DAT_ram_3fcb61e8 == 2) {
      FUN_ram_40399daa(auStack_60,0x3fcb62f0,0x10);
      puVar5 = auStack_60;
      uStack_50 = _DAT_ram_3fcb6300;
      uStack_4c = _DAT_ram_3fcb6304;
      uStack_48 = _DAT_ram_3fcb6308;
      uStack_44 = _DAT_ram_3fcb630c;
    }
    iVar3 = thunk_FUN_ram_4203961a
                      (&cStack_71,&iStack_70,auStack_68,&uStack_6c,auStack_40,iVar1,0x10);
    iVar2 = _DAT_ram_3fcb6310;
    iVar1 = _DAT_ram_3fcb62e0;
    if ((((iVar3 != 0) || (cStack_71 != '\0')) || (iStack_70 != _DAT_ram_3fcb62e0)) ||
       ((iVar3 = FUN_ram_40399d6c(auStack_68,0x3fcb6226,6), iVar3 != 0 ||
        (iVar3 = FUN_ram_40399d6c(puVar5,auStack_40,iVar2), iVar3 != 0)))) {
      puVar5 = (undefined1 *)0x3fcb62f0;
      if (_DAT_ram_3fcb61e8 == 2) {
        FUN_ram_40399daa(auStack_40,0x3fcb62f0,0x10);
        puVar5 = auStack_40;
        uStack_30 = _DAT_ram_3fcb6300;
        uStack_2c = _DAT_ram_3fcb6304;
        uStack_28 = _DAT_ram_3fcb6308;
        uStack_24 = _DAT_ram_3fcb630c;
      }
      if (_DAT_ram_3fcb61e4 == 1) {
        uVar6 = 0x1c;
        uVar4 = 1;
      }
      else {
        uVar6 = 0x14;
        uVar4 = _DAT_ram_3fcb62e4;
      }
      FUN_ram_42063c2c(0x3fcb6294,iVar1,0x3fcb6226,_DAT_ram_3fcb62ec,uVar4,0x3fcb62ac,
                       _DAT_ram_3fcb62e8,puVar5,iVar2,uVar6);
      _DAT_ram_3fcb6190 = _DAT_ram_3fcb6310;
      FUN_ram_40399daa(0x3fcb6170,0x3fcb62f0);
    }
  }
  return 0;
}

