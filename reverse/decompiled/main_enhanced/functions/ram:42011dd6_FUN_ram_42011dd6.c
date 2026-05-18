
/* WARNING: Removing unreachable block (ram,0x42012134) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42011dd6(uint param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_30 [20];
  
  FUN_ram_40394b98(0x6d,0,0xd,3,3,0);
  FUN_ram_40394b98(0x6d,0,0xd,2,2,0);
  _DAT_ram_6000801c =
       (param_1 & 0xff) << 6 | (param_1 >> 0x10) << 0x18 | _DAT_ram_6000801c & 0xffc03f;
  _DAT_ram_60008028 = _DAT_ram_60008028 & 0xffff00ff | 0x200;
  if ((int)(param_1 << 1) < 0) {
    if ((_DAT_ram_60008844 >> 0x1c & 3) == 0) {
      if ((_DAT_ram_60008844 >> 0x19 & 7) == 0) {
        iVar2 = FUN_ram_40394dfc();
        uVar1 = 2;
        if (iVar2 != 1) {
          uVar1 = iVar2 == 2;
        }
        uVar3 = FUN_ram_403958d4(uVar1,100);
        lVar6 = FUN_ram_403959b6(10000,0,uVar3);
        lVar7 = FUN_ram_40395a66();
        FUN_ram_40394ee6(auStack_30);
        FUN_ram_403951d4();
        FUN_ram_40394b98(0x61,0,0,0,0,0);
        FUN_ram_40394b98(0x61,0,0,0,0,1);
        do {
          iVar2 = FUN_ram_40394b26(0x61,0,3,0,0);
          iVar4 = FUN_ram_40394b26(0x61,0,3,3);
          uVar8 = FUN_ram_40395a66();
          if ((iVar2 != 0) && (iVar4 != 0)) break;
        } while (uVar8 < (ulonglong)(lVar6 + lVar7));
        FUN_ram_40394fd0(auStack_30);
        goto LAB_ram_42011ece;
      }
    }
    else if ((_DAT_ram_60008830 >> 0x1c & 1) == 0) goto LAB_ram_42011e76;
    uVar5 = (_DAT_ram_60008848 & 0x1f) * 4 + (_DAT_ram_60008844 >> 0x1e);
    if ((uVar5 & 0x40) != 0) {
      uVar5 = -(uVar5 & 0x3f);
    }
    FUN_ram_40394b98(0x61,0,6,7,0,uVar5 + 100 & 0xff);
    FUN_ram_40394b98(0x61,0,5,6,6,1);
  }
LAB_ram_42011ece:
  if ((_DAT_ram_60008844 >> 0x1c & 3) == 0) {
    if ((_DAT_ram_60008844 >> 0x19 & 7) != 0) goto LAB_ram_42011ee6;
  }
  else {
    if ((_DAT_ram_60008830 >> 0x1c & 1) == 0) {
LAB_ram_42011e76:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
LAB_ram_42011ee6:
    uVar5 = _DAT_ram_6000884c >> 9 & 0x1f;
    if (uVar5 != 0) {
      uVar1 = FUN_ram_42011c54(1,uVar5);
      goto LAB_ram_42011ef6;
    }
  }
  uVar5 = 0x1a;
  uVar1 = 0x1f;
LAB_ram_42011ef6:
  FUN_ram_40394b98(0x6d,0,4,4,0,uVar1);
  FUN_ram_40394b98(0x6d,0,6,4,0,uVar5);
  if ((int)(param_1 << 7) < 0) {
    _DAT_ram_600c40ac = _DAT_ram_600c40ac & 0xfffffffe;
    _DAT_ram_600c4008 = _DAT_ram_600c4008 & 0xfffffffe;
    _DAT_ram_600030dc = _DAT_ram_600030dc & 0xfffffffe;
    _DAT_ram_600020dc = _DAT_ram_600020dc & 0xfffffffe;
  }
  if ((int)(param_1 << 6) < 0) {
    _DAT_ram_60008068 = _DAT_ram_60008068 & 0xfbffffff;
    if (((param_1 >> 0x1c | param_1 >> 0x1b) & 1) == 0) {
      _DAT_ram_60008000 = _DAT_ram_60008000 & 0xffffdfff;
    }
    else {
      _DAT_ram_60008000 = _DAT_ram_60008000 | 0x2000;
    }
    if ((int)(param_1 << 3) < 0) {
      _DAT_ram_60008000 = _DAT_ram_60008000 | 0xa80;
    }
    else {
      _DAT_ram_60008000 = _DAT_ram_60008000 & 0xfffff57f;
    }
    _DAT_ram_60008074 = _DAT_ram_60008074 & 0x7fffffff;
    _DAT_ram_600c000c = _DAT_ram_600c000c & 0xfffffffe;
    FUN_ram_40395558(0);
    _DAT_ram_6000807c = _DAT_ram_6000807c & 0xffefffff;
    if ((int)(param_1 << 2) < 0) {
      _DAT_ram_600c0008 = _DAT_ram_600c0008 & 0xfffffff7;
    }
    else {
      _DAT_ram_600c0008 = _DAT_ram_600c0008 | 8;
    }
    _DAT_ram_60008080 = _DAT_ram_60008080 & 0x7fffafff;
  }
  _DAT_ram_60008038 = 0;
  _DAT_ram_60008044 = 0xffffffff;
  FUN_ram_40394b98(0x61,0,0,2,2,1);
  FUN_ram_420b4926();
  return;
}

