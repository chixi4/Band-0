
void FUN_ram_420228e6(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStack_190 [388];
  
  uVar1 = FUN_ram_42021a4c();
  if (uVar1 == 3) {
    pcVar5 = &DAT_ram_3c0c1170;
    uVar2 = 2;
    puVar3 = &DAT_ram_3c0c1a9c;
  }
  else {
    if (uVar1 < 4) {
      if (uVar1 == 1) {
        pcVar5 = &UNK_ram_3c0c1aec;
      }
      else if (uVar1 == 2) {
        pcVar5 = "e.";
      }
      else {
        pcVar5 = &DAT_ram_3c0c1af4;
      }
    }
    else {
      if (uVar1 == 4) {
        pcVar5 = (char *)0x3c0a8c08;
        uVar2 = 0;
        puVar3 = (undefined *)0x0;
        pcVar4 = (char *)0x3c0a8744;
        goto LAB_ram_42022950;
      }
      if (uVar1 == 5) {
        pcVar5 = "ot spend time on arguments you cannot measure.";
        uVar2 = 0;
        puVar3 = (undefined *)0x0;
        pcVar4 = "annot measure.";
        goto LAB_ram_42022950;
      }
      pcVar5 = "t measure.";
    }
    uVar2 = 0;
    puVar3 = (undefined *)0x0;
  }
  pcVar4 = &DAT_ram_3c0c39bc;
LAB_ram_42022950:
  FUN_ram_4202284c(param_1,uVar2,puVar3);
  uVar2 = (*(code *)&SUB_ram_400106ac)(auStack_190,0x180,&DAT_ram_3c0c1b00,pcVar4,pcVar5);
  FUN_ram_4206632e(param_1,auStack_190,uVar2);
  if ((uVar1 - 4 < 2) || (uVar1 == 2)) {
    FUN_ram_42022538(param_1,&DAT_ram_3c0c1b44);
  }
  FUN_ram_4202281c(param_1);
  return;
}

