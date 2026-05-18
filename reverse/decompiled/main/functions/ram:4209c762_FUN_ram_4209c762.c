
undefined4
FUN_ram_4209c762(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,uint param_9,
                undefined4 param_10)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_d4 [6];
  undefined1 auStack_ce [6];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [96];
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_ram_4039c0e0(param_4,param_5,6);
  if (iVar1 < 0) {
    FUN_ram_4039c11e(auStack_d4,param_4);
    param_4 = param_5;
  }
  else {
    FUN_ram_4039c11e(auStack_d4,param_5,6);
  }
  FUN_ram_4039c11e(auStack_ce,param_4,6);
  iVar1 = FUN_ram_4039c0e0(param_6,param_7,0x20);
  if (iVar1 < 0) {
    FUN_ram_4039c11e(auStack_c8,param_6);
    param_6 = param_7;
  }
  else {
    FUN_ram_4039c11e(auStack_c8,param_7,0x20);
  }
  FUN_ram_4039c11e(auStack_a8,param_6,0x20);
  if ((param_9 == 0x400000) || (param_9 == 0x4000000)) {
    uVar3 = param_2 >> 1;
    iVar1 = 0x20;
    if (0x20 < param_2) goto LAB_ram_4209c812;
  }
  else {
    if (param_9 == 0x20000) {
      uVar3 = 0x18;
      iVar1 = 0x20;
      goto LAB_ram_4209c812;
    }
    uVar3 = 0x10;
  }
  iVar1 = 0x10;
LAB_ram_4209c812:
  *(uint *)(param_8 + 0x58) = uVar3;
  *(int *)(param_8 + 0x5c) = iVar1;
  iVar2 = FUN_ram_4209c726(param_10);
  *(int *)(param_8 + 0x60) = iVar2;
  if ((param_9 & 0xc18580) == 0) {
    FUN_ram_4209cbac(param_1,param_2,param_3,auStack_d4,0x4c,auStack_88,iVar1 + uVar3 + iVar2);
  }
  else {
    FUN_ram_4209cba6();
  }
  FUN_ram_4039c11e(param_8,auStack_88,*(undefined4 *)(param_8 + 0x58));
  FUN_ram_4039c11e(param_8 + 0x18,auStack_88 + *(int *)(param_8 + 0x58),
                   *(undefined4 *)(param_8 + 0x5c));
  FUN_ram_4039c11e(param_8 + 0x38,auStack_88 + *(int *)(param_8 + 0x58) + *(int *)(param_8 + 0x5c),
                   *(undefined4 *)(param_8 + 0x60));
  return 0;
}

