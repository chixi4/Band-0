
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42034168(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [32];
  
  if (param_1 == 6) {
    FUN_ram_4202cfb6(auStack_38);
    iVar3 = FUN_ram_42033a56(auStack_38);
    iVar2 = _DAT_ram_3fcb6bc8;
    if (iVar3 == -1) {
      iVar3 = *(int *)(_DAT_ram_3fcb6bc8 + 0x2c8);
      if (2 < iVar3) {
        return 0x1b;
      }
      *(int *)(_DAT_ram_3fcb6bc8 + 0x2c8) = iVar3 + 1;
    }
    FUN_ram_4039c11e(iVar3 * 0xe + iVar2 + 0x29c,param_2);
    iVar2 = FUN_ram_420349ce();
  }
  else if (param_1 < 7) {
    if (param_1 == 2) {
      iVar2 = FUN_ram_420340cc(param_2);
      return iVar2;
    }
    if (param_1 == 3) {
      FUN_ram_4202cf34(auStack_38);
      iVar3 = FUN_ram_42033986(auStack_38);
      iVar2 = _DAT_ram_3fcb6bc8;
      if (iVar3 == -1) {
        iVar3 = *(int *)(_DAT_ram_3fcb6bc8 + 0x27c);
        if (5 < iVar3) {
          return 0x1b;
        }
        *(int *)(_DAT_ram_3fcb6bc8 + 0x27c) = iVar3 + 1;
      }
      FUN_ram_4039c11e(iVar2 + (iVar3 + 0x21) * 0x10 + 0xc,param_2,0x10);
      iVar2 = FUN_ram_42034868();
    }
    else {
      iVar2 = 8;
      if (param_1 == 1) {
        iVar2 = FUN_ram_42033f78(param_2);
        return iVar2;
      }
    }
  }
  else if (param_1 == 7) {
    FUN_ram_4202cf90(auStack_40);
    iVar3 = FUN_ram_42033ab8(auStack_40);
    iVar2 = _DAT_ram_3fcb6bc8;
    if (iVar3 == -1) {
      iVar3 = *(int *)(_DAT_ram_3fcb6bc8 + 0x314);
      if (0 < iVar3) {
        return 0x1b;
      }
      *(int *)(_DAT_ram_3fcb6bc8 + 0x314) = iVar3 + 1;
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    iVar2 = iVar2 + iVar3 * 0x17 + 0x2cc;
    FUN_ram_4039c11e(auStack_38,iVar2);
    FUN_ram_4039c11e(iVar2,param_2,0x17);
    iVar2 = FUN_ram_42034954();
    iVar4 = _DAT_ram_3fcb6bc8;
    if ((iVar2 != 0) &&
       (FUN_ram_4039c11e(_DAT_ram_3fcb6bc8 + iVar3 * 0x17 + 0x2cc,auStack_38,0x17), bVar1)) {
      *(int *)(iVar4 + 0x314) = *(int *)(iVar4 + 0x314) + -1;
    }
  }
  else {
    iVar2 = 8;
    if (param_1 == 8) {
      FUN_ram_4202cfd4(auStack_38);
      iVar2 = _DAT_ram_3fcb6bc8;
      iVar4 = *(int *)(_DAT_ram_3fcb6bc8 + 0x298);
      iVar3 = FUN_ram_420339fe(auStack_38,_DAT_ram_3fcb6bc8 + 0x280,iVar4);
      if (iVar3 == -1) {
        if (2 < iVar4) {
          return 0x1b;
        }
        *(int *)(iVar2 + 0x298) = iVar4 + 1;
        iVar3 = iVar4;
      }
      FUN_ram_4039c11e((iVar3 + 0x50) * 8 + iVar2,param_2,8);
      iVar2 = FUN_ram_420348e2();
    }
  }
  return iVar2;
}

