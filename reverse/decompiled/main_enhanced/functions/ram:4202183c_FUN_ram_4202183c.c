
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202183c(void)

{
  int iVar1;
  int iStack_a8;
  undefined1 auStack_a4 [44];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_18;
  
  if (DAT_ram_3fcc516c != '\0') {
    return 0;
  }
  _DAT_ram_3fcc5164 = FUN_ram_40397864();
  if (_DAT_ram_3fcc5164 == 0) {
    return 0x101;
  }
  iVar1 = FUN_ram_4204be36();
  if ((iVar1 == 0x110d) || (iVar1 == 0x1110)) {
    iVar1 = FUN_ram_4204c3c4();
    if (iVar1 != 0) goto LAB_ram_42021882;
    iVar1 = FUN_ram_4204be36();
  }
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4205f4fe(), iVar1 == 0)) {
    iVar1 = FUN_ram_420b2ea8();
    if ((iVar1 != 0) && (iVar1 != 0x103)) {
      return iVar1;
    }
    _DAT_ram_3fcc5160 = FUN_ram_420614b0();
    _DAT_ram_3fcc515c = FUN_ram_420614f4();
    iStack_a8 = gp + -0x3d8;
    FUN_ram_4039c11e(auStack_a4,&DAT_ram_3c0f75f0,0x2c);
    uStack_78 = 4;
    uStack_74 = 8;
    uStack_68 = 8;
    uStack_60 = 5;
    uStack_40 = 6;
    uStack_38 = 0x2f0;
    uStack_34 = 0x20;
    uStack_30 = 0;
    uStack_24 = 2;
    uStack_70 = 1;
    uStack_6c = 0;
    uStack_64 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 1;
    uStack_50 = 1;
    uStack_4c = 0;
    uStack_48 = 1;
    uStack_44 = 1;
    uStack_3c = 0;
    uStack_2c = 0;
    uStack_28 = 1;
    uStack_20 = 1;
    uStack_1c = 0;
    uStack_18 = 0x1f2f3f4f;
    iVar1 = FUN_ram_42060fe0(&iStack_a8);
    if (((iVar1 == 0) && (iVar1 = FUN_ram_420b2e4e(0x8000c000,0xffffffff,0x420114f0,0), iVar1 == 0))
       && (iVar1 = FUN_ram_420b2e4e(0x18ff1f,0,0x420114a0,0), iVar1 == 0)) {
      DAT_ram_3fcc516c = 1;
      FUN_ram_42021346(1);
      return 0;
    }
  }
LAB_ram_42021882:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

