
void FUN_ram_42026e98(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_1c [7];
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uStack_15 = 0;
  uStack_14 = 0;
  uStack_13 = 0;
  uStack_12 = 0;
  uStack_11 = 0;
  FUN_ram_4039c11e(auStack_1c,param_1,7);
  iVar1 = FUN_ram_42026e70(1,auStack_1c);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_42026e70(2,auStack_1c), iVar1 == 0)) {
    uStack_15 = 0;
    uStack_14 = 0;
    uStack_13 = 0;
    uStack_12 = 0;
    uStack_11 = 0;
    FUN_ram_4039c11e(auStack_1c,param_1,7);
    iVar1 = FUN_ram_42026e70(3,auStack_1c);
    if (iVar1 == 0) {
      uStack_15 = 0;
      uStack_14 = 0;
      uStack_13 = 0;
      uStack_12 = 0;
      uStack_11 = 0;
      FUN_ram_4039c11e(auStack_1c,param_1,7);
      iVar1 = FUN_ram_42026e70(6,auStack_1c);
      if (iVar1 == 0) {
        uStack_15 = 0;
        uStack_14 = 0;
        uStack_13 = 0;
        uStack_12 = 0;
        uStack_11 = 0;
        FUN_ram_4039c11e(auStack_1c,param_1,7);
        FUN_ram_42026e70(8,auStack_1c);
      }
    }
  }
  return;
}

