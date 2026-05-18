
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420ad348(void)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 auStack_44 [2];
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((_DAT_ram_3fcb7fb0 & 0x20) == 0) {
    iVar7 = 0;
    (**(code **)(_DAT_ram_3fcc4c78 + 0x160))(200);
    (**(code **)(_DAT_ram_3fcc4c78 + 0x58))(0x62,1,2,7,7,0,*(code **)(_DAT_ram_3fcc4c78 + 0x58));
    (**(code **)(_DAT_ram_3fcc4c78 + 0x15c))(DAT_ram_3fcb7f61,0x985,0,auStack_44);
    uVar2 = (**(code **)(_DAT_ram_3fcc4c78 + 0x54))
                      (0x62,1,6,3,0,*(code **)(_DAT_ram_3fcc4c78 + 0x54));
    (**(code **)(_DAT_ram_3fcc4c78 + 0x58))(0x62,1,2,3,0,uVar2,*(code **)(_DAT_ram_3fcc4c78 + 0x58))
    ;
    (**(code **)(_DAT_ram_3fcc4c78 + 0x58))(0x62,1,2,7,7,1,*(code **)(_DAT_ram_3fcc4c78 + 0x58));
    (**(code **)(_DAT_ram_3fcc4c78 + 0x15c))(DAT_ram_3fcb7f61,0x960,0,auStack_44);
    uVar6 = 0;
    iVar3 = (**(code **)(_DAT_ram_3fcc4c78 + 0x164))();
    (**(code **)(_DAT_ram_3fcc4c78 + 0x15c))(DAT_ram_3fcb7f61,0x9a0,0,auStack_44);
    sVar1 = (**(code **)(_DAT_ram_3fcc4c78 + 0x164))();
    do {
      (**(code **)(_DAT_ram_3fcc4c78 + 0x154))(uVar6 + 0x960,DAT_ram_3fcb7f61,0,auStack_44);
      iVar4 = iVar7 / 0x40;
      iVar7 = iVar7 + ((int)sVar1 - (int)(short)iVar3);
      uVar5 = (*(code *)&SUB_ram_40012218)((iVar4 + iVar3) * 0x10000 >> 0x10,0x1ff,0);
      uStack_3c = ((((int)(short)uVar5 >> 8) << 4 | uVar2 | 0xffffff80) & 0xff) << 8 | uVar5 & 0xff;
      uVar5 = uVar6 & 0xff;
      uVar6 = uVar6 + 1;
      uStack_38 = auStack_44[0];
      uStack_34 = 0;
      (*(code *)&SUB_ram_40012294)(uVar5,&uStack_3c);
    } while (uVar6 != 0x55);
    _DAT_ram_3fcb7fb0 = _DAT_ram_3fcb7fb0 | 0x20;
  }
  return;
}

