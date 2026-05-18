
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201d546(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [64];
  char acStack_60 [64];
  
  iVar1 = FUN_ram_4201605e();
  FUN_ram_4201eeb2(1);
  FUN_ram_4201f3fe(10,&DAT_ram_3c0c139c,0);
  if (_DAT_ram_3fcc50ec != 5) {
    if (_DAT_ram_3fcc50ec < 6) {
      if (_DAT_ram_3fcc50ec != 3) {
        if (_DAT_ram_3fcc50ec != 4) {
          if (_DAT_ram_3fcc50ec == 2) {
            if (iVar1 == 0) {
              pcVar3 = "starting the important project.";
            }
            else {
              pcVar3 = "roject.";
            }
          }
          else if (iVar1 == 0) {
            pcVar3 = &DAT_ram_3c0c1170;
          }
          else {
            pcVar3 = "; do not hand out too much self.";
          }
          FUN_ram_4201d0f4(param_1,100,pcVar3,0);
          return;
        }
        if (DAT_ram_3fcc50ea != '\0') {
          if (iVar1 == 0) {
            (*(code *)&SUB_ram_400106ac)(auStack_a0,0x40,&DAT_ram_3c0c13e0);
            pcVar3 = &DAT_ram_3c0c13ec;
          }
          else {
            (*(code *)&SUB_ram_400106ac)(auStack_a0,0x40,&DAT_ram_3c0c13f8,0x3fcbb27c);
            pcVar3 = "st.";
          }
          (*(code *)&SUB_ram_400106ac)(acStack_60,0x40,pcVar3,0x3fcbb29c);
          FUN_ram_4201d0a4(0x2c,auStack_a0,0,0xb4,0x10);
          FUN_ram_4201d0a4(0x42,acStack_60,0,0xb4,0x10);
        }
        uVar5 = _DAT_ram_3fcbb2cc & (int)~_DAT_ram_3fcbb2cc >> 0x1f;
        (*(code *)&SUB_ram_400106ac)
                  (auStack_f0,0x20,"In meetings, catch the hidden risks first.",uVar5);
        FUN_ram_4201f3fe(100,auStack_f0,0);
        if (100 < (int)uVar5) {
          uVar5 = 100;
        }
        iVar7 = 0x14;
        do {
          FUN_ram_4201cf72(param_1,iVar7,0x7d);
          iVar6 = iVar7 + 1;
          FUN_ram_4201cf72(param_1,iVar7,0x8a);
          iVar7 = iVar6;
        } while (iVar6 != 0xb4);
        iVar7 = 0x7d;
        do {
          FUN_ram_4201cf72(param_1,0x14,iVar7);
          iVar6 = iVar7 + 1;
          FUN_ram_4201cf72(param_1,0xb3,iVar7);
          iVar7 = iVar6;
        } while (iVar6 != 0x8b);
        iVar7 = 0x7f;
        do {
          for (iVar6 = 0; (int)(uVar5 * 0x9c) / 100 != iVar6; iVar6 = iVar6 + 1) {
            FUN_ram_4201cf72(param_1,iVar6 + 0x16,iVar7);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0x89);
        if (0 < _DAT_ram_3fcbb2c8) {
          FUN_ram_4201d216(_DAT_ram_3fcbb2c4,auStack_110);
          FUN_ram_4201d216(_DAT_ram_3fcbb2c8,auStack_100);
          (*(code *)&SUB_ram_400106ac)
                    (auStack_d0,0x30,"ngs, catch the hidden risks first.",auStack_110,auStack_100);
          FUN_ram_4201f3fe(0x96,auStack_d0,0);
        }
        if (iVar1 == 0) {
          pcVar3 = "but pair it with evidence.";
        }
        else {
          pcVar3 = &UNK_ram_3c0c12dc;
        }
        goto LAB_ram_4201d74c;
      }
      if (iVar1 == 0) {
        (*(code *)&SUB_ram_400106ac)(acStack_60,0x40,&DAT_ram_3c0c13a8);
        pcVar3 = &DAT_ram_3c0c1220;
      }
      else {
        (*(code *)&SUB_ram_400106ac)(acStack_60,0x40,"ured, hold your own pace first.",0x3fcbb27c);
        pcVar3 = &DAT_ram_3c0c1234;
      }
      pcVar4 = acStack_60;
    }
    else {
      if (_DAT_ram_3fcc50ec != 7) {
        if (_DAT_ram_3fcc50ec == 8) {
          if (iVar1 == 0) {
            pcVar3 = "do not need to state a view immediately.";
            pcVar4 = "iew immediately.";
          }
          else {
            pcVar3 = (char *)0x3c0a8de0;
            pcVar4 = &DAT_ram_3c0c11b4;
          }
          FUN_ram_4201d0f4(param_1,100,pcVar3,pcVar4);
          if (iVar1 == 0) {
            pcVar3 = &DAT_ram_3c0c11cc;
          }
          else {
            pcVar3 = "Map the path before starting the important project.";
          }
          FUN_ram_4201f3fe(0xb4,pcVar3,0);
          return;
        }
        if (_DAT_ram_3fcc50ec != 6) {
          return;
        }
        if (iVar1 == 0) {
          pcVar3 = &DAT_ram_3c0c12f4;
          pcVar4 = "Remove one meaningless exchange today.";
        }
        else {
          pcVar3 = "ngless exchange today.";
          pcVar4 = "today.";
        }
        FUN_ram_4201d0f4(param_1,0x58,pcVar3,pcVar4);
        if (DAT_ram_3fcc50ea == '\0') {
          return;
        }
        if (iVar1 == 0) {
          pcVar3 = "our own pace first.";
        }
        else {
          pcVar3 = "ch the hidden risks first.";
        }
        (*(code *)&SUB_ram_400106ac)(acStack_60,0x30,pcVar3,0x3fcbb29c);
        FUN_ram_4201d0a4(0x82,acStack_60,0,0xb4,0x22);
        return;
      }
      if (DAT_ram_3fcc50e8 == '\0') {
        if (iVar1 == 0) {
          pcVar3 = (char *)0x3c0a861c;
        }
        else {
          pcVar3 = &UNK_ram_3c0c1338;
        }
        FUN_ram_42023a74();
        uVar2 = FUN_ram_4204ac2a();
        (*(code *)&SUB_ram_400106ac)(acStack_60,0x40,"space in the plan for insight.",uVar2);
        pcVar4 = acStack_60;
      }
      else if (iVar1 == 0) {
        pcVar4 = "before giving logic.";
        pcVar3 = &DAT_ram_3c0c138c;
      }
      else {
        pcVar4 = &UNK_ram_3c0c1348;
        pcVar3 = "ed people space before giving logic.";
      }
    }
    FUN_ram_4201d0f4(param_1,100,pcVar3,pcVar4);
    if (iVar1 == 0) {
      pcVar3 = &DAT_ram_3c0c11cc;
    }
    else {
      pcVar3 = "Map the path before starting the important project.";
    }
    goto LAB_ram_4201d74c;
  }
  if (DAT_ram_3fcc50ea == '\0') {
    acStack_60[0] = '\0';
    if (iVar1 == 0) {
      pcVar3 = &DAT_ram_3c0c1240;
    }
    else {
      pcVar3 = " tonight sharpens tomorrow\'s judgment.";
    }
LAB_ram_4201d784:
    pcVar4 = (char *)0x0;
  }
  else {
    if (iVar1 == 0) {
      (*(code *)&SUB_ram_400106ac)(acStack_60,0x40,"our own pace first.");
      pcVar3 = &DAT_ram_3c0c1240;
    }
    else {
      (*(code *)&SUB_ram_400106ac)(acStack_60,0x40,"st.",0x3fcbb29c);
      pcVar3 = " tonight sharpens tomorrow\'s judgment.";
    }
    pcVar4 = acStack_60;
    if (acStack_60[0] == '\0') goto LAB_ram_4201d784;
  }
  FUN_ram_4201d0f4(param_1,0x5a,pcVar3,pcVar4);
  if (iVar1 == 0) {
    pcVar4 = "ow\'s judgment.";
    pcVar3 = "with evidence.";
  }
  else {
    pcVar4 = &DAT_ram_3c0c1288;
    pcVar3 = "Respect your intuition, but pair it with evidence.";
  }
  FUN_ram_4201f3fe(0xa0,pcVar4,0);
LAB_ram_4201d74c:
  FUN_ram_4201f3fe(0xb4,pcVar3,0);
  return;
}

