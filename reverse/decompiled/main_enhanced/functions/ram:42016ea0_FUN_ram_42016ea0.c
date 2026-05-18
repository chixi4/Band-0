
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42016ea0(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
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
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  _DAT_ram_3fcc4fb0 = param_1;
  if (DAT_ram_3fcc4fae == '\0') {
    DAT_ram_3fcc4fad = 0;
    *(undefined2 *)(gp + -0x7a4) = 0xffff;
    if (DAT_ram_3fcc4fac == '\0') {
      FUN_ram_420251ee(2);
      DAT_ram_3fcc4fac = '\x01';
    }
    local_90 = 0x20250310;
    uStack_8c = 0xa0004;
    uStack_88 = 4;
    uStack_84 = 0x140014;
    uStack_78 = 32000;
    uStack_70 = 0x1003c;
    uStack_6c = 0x100bb8;
    uStack_68 = 0x1f60178;
    uStack_64 = 0x1f0354;
    uStack_5c = 40000;
    uStack_58 = 0x20001;
    uStack_54 = 0x800ff;
    uStack_50 = 0x10046;
    uStack_4c = 0x1000001f;
    uStack_48 = 0x17;
    uStack_38 = 0xce00;
    uStack_30 = 0x28;
    uStack_80 = 3;
    uStack_7c = 0;
    uStack_74 = 0;
    uStack_60 = 1;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_34 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uVar2 = FUN_ram_420251fc();
    uStack_2c = CONCAT22(0x20,(undefined2)uStack_2c);
    uStack_30._0_2_ = CONCAT11(uVar2,(undefined1)uStack_30);
    uStack_28 = CONCAT31(uStack_28._1_3_,1);
    uStack_24 = 0x5a5aa5a5;
    iVar1 = FUN_ram_42024e2c(&local_90);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_4202510e(1);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_42034d06();
      if (iVar1 == 0) {
        _DAT_ram_3fcb69bc = _DAT_ram_3fcb69bc & 0xf100 | 0xa03;
        DAT_ram_3fcb69c1 = 0;
        DAT_ram_3fcb69c2 = 3;
        (*(code *)&SUB_ram_40010488)(&DAT_ram_3fcb960c,0,0xa4);
        DAT_ram_3fcb960c = 6;
        _DAT_ram_3fcb9662 = &pmpaddr17;
        DAT_ram_3fcb9664 = 1;
        _DAT_ram_3fcb9628 = 0x3c0a8824;
        _DAT_ram_3fcb962c = 0x10c;
        DAT_ram_3fcc4f9c = 0x10;
        _DAT_ram_3fcc4f9e = 0x1812;
        _DAT_ram_3fcb9610 = &DAT_ram_3fcc4f9c;
        _DAT_ram_3fcb9614 = &sedeleg;
        FUN_ram_420267aa();
        iVar1 = FUN_ram_42023a80(gp + -0x4a0,1,0x42006e60,&DAT_ram_3fcc4fb8);
        if (iVar1 == 0) {
          FUN_ram_42025fe0(0x3c0a8824);
          FUN_ram_42034348();
          _DAT_ram_3fcb69dc = 0x42016f76;
          _DAT_ram_3fcc4fa8 = FUN_ram_40397076(1,0,3);
          _DAT_ram_3fcc4fa4 = FUN_ram_40397076(1,0,3);
          iVar1 = FUN_ram_42034e46(0x42006cc0);
          if (iVar1 == 0) {
            iVar1 = FUN_ram_403975e0(_DAT_ram_3fcc4fa8,500);
            if (iVar1 != 1) {
              FUN_ram_4039782c();
              _DAT_ram_3fcc4fa8 = 0;
              return -1;
            }
            FUN_ram_4039782c(_DAT_ram_3fcc4fa8);
            _DAT_ram_3fcc4fa8 = 0;
            DAT_ram_3fcc4fae = '\x01';
            goto LAB_ram_42016ec4;
          }
          FUN_ram_4039782c();
          FUN_ram_4039782c(_DAT_ram_3fcc4fa4);
          _DAT_ram_3fcc4fa8 = 0;
          _DAT_ram_3fcc4fa4 = 0;
          FUN_ram_42023ae4(_DAT_ram_3fcc4fb8);
          _DAT_ram_3fcc4fb8 = 0;
        }
        FUN_ram_42034d2c();
      }
      FUN_ram_4202519c();
    }
    FUN_ram_420250ac();
  }
  else {
LAB_ram_42016ec4:
    iVar1 = 0;
  }
  return iVar1;
}

