
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42016d5e(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint auStack_3c [2];
  undefined4 uStack_34;
  undefined1 uStack_31;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  bVar1 = *param_1;
  if (bVar1 == 0xb) {
    bVar1 = param_1[4];
    auStack_3c[1] = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    if (bVar1 != 3) {
      if (bVar1 != 4) {
        return 0;
      }
      auStack_3c[1] = 1;
    }
    auStack_3c[0] = (uint)bVar1;
    FUN_ram_420290e4(*(undefined2 *)(param_1 + 0xc),auStack_3c);
    return 0;
  }
  if (bVar1 < 0xc) {
    if (bVar1 == 1) {
      *(undefined2 *)(gp + -0x7a4) = 0xffff;
      DAT_ram_3fcc4fa0 = 0;
    }
    else {
      if (bVar1 == 10) {
        if (*(int *)(param_1 + 4) != 0) {
          return 0;
        }
        DAT_ram_3fcc4fa0 = 1;
        FUN_ram_4202e30c(*(undefined2 *)(param_1 + 8),auStack_3c);
        goto LAB_ram_42016e10;
      }
      if (bVar1 != 0) {
        return 0;
      }
      if (*(int *)(param_1 + 4) == 0) {
        *(undefined2 *)(gp + -0x7a4) = *(undefined2 *)(param_1 + 8);
        DAT_ram_3fcc4fa0 = 0;
        FUN_ram_42016ca2(2);
        FUN_ram_4202f662(*(undefined2 *)(param_1 + 8));
        return 0;
      }
    }
    FUN_ram_42016ca2(3);
    if (DAT_ram_3fcc4fad != '\0') {
      FUN_ram_42016cec();
    }
  }
  else {
    if (bVar1 != 0xe) {
      if (bVar1 != 0x11) {
        return 0;
      }
      iVar2 = FUN_ram_4202e30c(*(undefined2 *)(param_1 + 4),auStack_3c);
      if (iVar2 == 0) {
        FUN_ram_42026e98(&uStack_31);
      }
      return 1;
    }
    if (_DAT_ram_3fcc4fb4 == 2) {
      return 0;
    }
LAB_ram_42016e10:
    FUN_ram_42016ca2(2);
  }
  return 0;
}

