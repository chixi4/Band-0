
int FUN_ram_4201fe58(void)

{
  int iVar1;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [16];
  undefined4 uStack_68;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [20];
  undefined4 uStack_20;
  
  iVar1 = 0;
  if (DAT_ram_3fcc513c == '\0') {
    uStack_a4 = 0;
    uStack_a8 = 0x30;
    uStack_a0 = 2;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    FUN_ram_42048298(&uStack_a8);
    uStack_90 = 8;
    uStack_8c = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_88 = 1;
    FUN_ram_42048298(&uStack_90);
    FUN_ram_42048144(5,1);
    FUN_ram_42048144(4,1);
    FUN_ram_40398498(10);
    (*(code *)&SUB_ram_40010488)(auStack_34,0,0x24);
    uStack_44 = 0xffffffff;
    uStack_3c = 0xffffffff;
    uStack_38 = 0xffffffff;
    uStack_48 = 7;
    uStack_40 = 6;
    uStack_20 = 0x1000;
    iVar1 = FUN_ram_42061d36(1,&uStack_48,3);
    if (iVar1 == 0) {
      (*(code *)&SUB_ram_40010488)(auStack_78,0,0x30);
      uStack_68 = 20000000;
      auStack_78[0] = 1;
      uStack_5c = 5;
      uStack_54 = 7;
      iVar1 = FUN_ram_42061f68(1,auStack_78,&DAT_ram_3fcc5140);
      if (iVar1 == 0) {
        DAT_ram_3fcc513c = '\x01';
      }
    }
  }
  return iVar1;
}

