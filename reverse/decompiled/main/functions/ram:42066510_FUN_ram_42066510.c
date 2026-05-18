
undefined4 FUN_ram_42066510(int param_1,uint param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint auStack_24 [4];
  int iStack_14;
  
  if (param_2 == 7) {
    pcVar4 = " settings.";
    pcVar1 = &UNK_ram_3c0c3130;
    goto LAB_ram_42066554;
  }
  if (param_2 < 8) {
    if (param_2 == 4) {
      pcVar4 = "od.";
      pcVar1 = &UNK_ram_3c0c3078;
      goto LAB_ram_42066554;
    }
    if (4 < param_2) {
      if (param_2 == 5) {
        pcVar4 = "ow.";
        pcVar1 = &UNK_ram_3c0c30b4;
      }
      else {
        pcVar4 = &DAT_ram_3c0c30e8;
        pcVar1 = &UNK_ram_3c0c30f8;
      }
      goto LAB_ram_42066554;
    }
    if (param_2 == 2) {
      pcVar4 = " the worst option first.";
      pcVar1 = &UNK_ram_3c0c3028;
      goto LAB_ram_42066554;
    }
    if (param_2 == 3) {
      pcVar4 = &DAT_ram_3c0c2254;
      pcVar1 = "heck results over mood.";
      goto LAB_ram_42066554;
    }
    if (param_2 == 1) {
      pcVar4 = "ry five minutes first.";
      pcVar1 = &UNK_ram_3c0c2fe8;
      goto LAB_ram_42066554;
    }
  }
  else {
    if (param_2 == 10) {
      pcVar4 = &DAT_ram_3c0c31f0;
      pcVar1 = "o mistakes today.";
      goto LAB_ram_42066554;
    }
    if (param_2 < 0xb) {
      if (param_2 == 8) {
        pcVar4 = &DAT_ram_3c0c3160;
        pcVar1 = &UNK_ram_3c0c3174;
      }
      else {
        pcVar4 = &DAT_ram_3c0c31b8;
        pcVar1 = "allest version first.";
      }
      goto LAB_ram_42066554;
    }
    if (param_2 == 0xb) {
      pcVar4 = "k first.";
      pcVar1 = &UNK_ram_3c0c31a8;
      goto LAB_ram_42066554;
    }
    if (param_2 == 0xc) {
      pcVar4 = &DAT_ram_3c0c3220;
      pcVar1 = "model other people.";
      goto LAB_ram_42066554;
    }
  }
  pcVar4 = &DAT_ram_3c0c3260;
  pcVar1 = "real problem first.";
LAB_ram_42066554:
  if (param_3 != (char *)0x0) {
    pcVar1 = param_3;
  }
  auStack_24[0] = param_2;
  FUN_ram_4206614c(param_1,pcVar4);
  FUN_ram_42066162(param_1,"riority order before sleep.");
  puVar5 = *(undefined4 **)(param_1 + 0x310);
  iStack_14 = 1;
  iVar2 = FUN_ram_42051b14(*(undefined4 *)*puVar5,6,1,&iStack_14,4);
  if (iVar2 < 0) {
    iStack_14 = 0;
  }
  uVar3 = FUN_ram_42066178(param_1,pcVar1,0xffffffff);
  if (iStack_14 == 1) {
    iStack_14 = 0;
    iVar2 = FUN_ram_42051b14(*(undefined4 *)*puVar5,6,1,&iStack_14,4);
    if (iVar2 < 0) {
      return 0x103;
    }
  }
  FUN_ram_42064d46(0,auStack_24,4);
  return uVar3;
}

