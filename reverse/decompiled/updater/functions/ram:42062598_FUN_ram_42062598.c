
undefined4
FUN_ram_42062598(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,uint param_9,
                undefined4 param_10)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_d4 [6];
  undefined1 auStack_ce [6];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [96];
  
  if (param_2 == 0) {
LAB_ram_420625b2:
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = FUN_ram_40399d6c(param_4,param_5,6);
    if (iVar2 < 0) {
      FUN_ram_40399daa(auStack_d4,param_4);
      param_4 = param_5;
    }
    else {
      FUN_ram_40399daa(auStack_d4,param_5,6);
    }
    FUN_ram_40399daa(auStack_ce,param_4,6);
    iVar2 = FUN_ram_40399d6c(param_6,param_7,0x20);
    if (iVar2 < 0) {
      FUN_ram_40399daa(auStack_c8,param_6);
      param_6 = param_7;
    }
    else {
      FUN_ram_40399daa(auStack_c8,param_7,0x20);
    }
    FUN_ram_40399daa(auStack_a8,param_6,0x20);
    if ((param_9 == 0x400000) || (param_9 == 0x4000000)) {
      uVar4 = param_2 >> 1;
      iVar2 = 0x20;
      if (param_2 < 0x21) goto LAB_ram_42062700;
    }
    else if (param_9 == 0x20000) {
      uVar4 = 0x18;
      iVar2 = 0x20;
    }
    else {
      uVar4 = 0x10;
LAB_ram_42062700:
      iVar2 = 0x10;
    }
    *(uint *)(param_8 + 0x58) = uVar4;
    *(int *)(param_8 + 0x5c) = iVar2;
    iVar3 = FUN_ram_4206255c(param_10);
    *(int *)(param_8 + 0x60) = iVar3;
    if ((param_9 & 0xc18580) == 0) {
      if ((int)(param_9 << 5) < 0) {
        if ((param_2 != 0x20) ||
           (iVar2 = FUN_ram_42062a5c(param_1,0x20,param_3,auStack_d4,0x4c,auStack_88), iVar2 < 0))
        goto LAB_ram_420625b2;
      }
      else {
        FUN_ram_42062a62(param_1,param_2,param_3,auStack_d4,0x4c,auStack_88,iVar2 + uVar4 + iVar3);
      }
    }
    else {
      FUN_ram_42062a5c(param_1,param_2,param_3,auStack_d4,0x4c,auStack_88);
    }
    FUN_ram_40399daa(param_8,auStack_88,*(undefined4 *)(param_8 + 0x58));
    FUN_ram_40399daa(param_8 + 0x18,auStack_88 + *(int *)(param_8 + 0x58),
                     *(undefined4 *)(param_8 + 0x5c));
    FUN_ram_40399daa(param_8 + 0x38,auStack_88 + *(int *)(param_8 + 0x58) + *(int *)(param_8 + 0x5c)
                     ,*(undefined4 *)(param_8 + 0x60));
    uVar1 = 0;
  }
  return uVar1;
}

