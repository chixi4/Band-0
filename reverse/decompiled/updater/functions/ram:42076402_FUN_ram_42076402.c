
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42076402(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  thunk_FUN_ram_40393ad0();
  uStack_50 = DAT_ram_3fcb0ac9;
  uStack_4f = DAT_ram_3fcb0aca;
  uStack_4e = DAT_ram_3fcb0acb;
  uStack_4d = DAT_ram_3fcb0acc;
  uStack_4c = DAT_ram_3fcb0acd;
  uStack_4b = DAT_ram_3fcb0ace;
  uStack_4a = DAT_ram_3fcb0acf;
  uStack_49 = DAT_ram_3fcb0ad0;
  uStack_48 = DAT_ram_3fcb0ad1;
  uStack_68 = 0x6b6b6b6b;
  uStack_64 = 0x6b6b6b6b;
  uStack_60 = 0x6b6b;
  uStack_5c = 0x4030201;
  uStack_58 = 0x8070605;
  uStack_54 = 0xb0a;
  uStack_47 = DAT_ram_3fcb0ad2;
  uStack_2c = DAT_ram_3fcb0ad3;
  uStack_2b = DAT_ram_3fcb0ad4;
  uStack_2a = DAT_ram_3fcb0ad5;
  uStack_29 = DAT_ram_3fcb0ad6;
  uStack_28 = DAT_ram_3fcb0ad7;
  uStack_27 = DAT_ram_3fcb0ad8;
  uStack_26 = DAT_ram_3fcb0ad9;
  uStack_25 = DAT_ram_3fcb0ada;
  uStack_24 = DAT_ram_3fcb0adb;
  uStack_44 = 0x62626262;
  uStack_40 = 0x62636262;
  uStack_3c = 0x6764;
  uStack_23 = DAT_ram_3fcb0adc;
  uStack_38 = 0x90a0804;
  uStack_34 = 0x1201000f;
  puStack_30 = &vsie;
  uVar1 = (**(code **)(_DAT_ram_3fcb640c + 0x20))(0x6b);
  _DAT_ram_6004e848 = uVar1 & 0x1fff0 | _DAT_ram_6004e848 & 0xfffe000f;
  (**(code **)(_DAT_ram_3fcb640c + 0x40))
            (&uStack_68,&uStack_5c,&uStack_50,&uStack_44,&uStack_38,&uStack_2c,10,0);
  _DAT_ram_6004e848 = _DAT_ram_6004e848 & 0xfffe000f | 0x1fe00;
  iVar2 = (**(code **)(_DAT_ram_3fcb640c + 0x54))(0x69,0,4,3,0,*(code **)(_DAT_ram_3fcb640c + 0x54))
  ;
  if (iVar2 == 0) {
    (*(code *)&SUB_ram_40012304)(0x578);
  }
  thunk_FUN_ram_40393ae0();
  return;
}

