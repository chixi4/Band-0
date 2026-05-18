
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_ram_4207a9e0(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined1 uVar11;
  ushort *puVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ushort *puVar18;
  undefined1 uStack_31;
  
  iVar16 = *(int *)(param_1 + 0x3c);
  uStack_31 = 0;
  if (iVar16 == 0) {
    return '\0';
  }
  DAT_ram_3fcc41c0 = '\x03';
  DAT_ram_3fcc41be = '\x03';
  DAT_ram_3fcc41bc = 3;
  DAT_ram_3fcc41bd = 4;
  DAT_ram_3fcc41c6 = 9;
  cVar1 = *(char *)(*(int *)(gp + -0xb4) + 0x360);
  cVar13 = '\x01';
  if (*(char *)(*(int *)(gp + -0xb4) + 0x361) == '\0') {
    cVar13 = DAT_ram_3fcc4253;
  }
  uVar14 = (uint)*(byte *)(iVar16 + 1);
  if (uVar14 == 1) {
    pcVar10 = "";
    puVar9 = &DAT_ram_3c0fbe78;
    goto LAB_ram_4207aa78;
  }
  if (*(short *)(iVar16 + 2) != 1) {
    pcVar10 = &DAT_ram_3c0fbe8c;
LAB_ram_4207aa9e:
    uVar8 = 4;
    uVar7 = 8;
LAB_ram_4207ad7c:
    FUN_ram_4207a038(1,uVar7,uVar8,pcVar10);
    return '\0';
  }
  if (uVar14 == 2) {
    puVar9 = &DAT_ram_3c0fbea4;
LAB_ram_4207aab2:
    FUN_ram_4207a038(1,8,4,puVar9);
    uVar14 = 0;
    iVar17 = 1;
    iVar16 = 1;
LAB_ram_4207aac2:
    if ((cVar1 == '\0') || (cVar13 == '\0')) {
      uVar15 = 0;
LAB_ram_4207ad9c:
      if ((uVar15 & 0x400) != 0) {
        *(undefined1 *)(param_1 + 0x61) = 1;
      }
      if ((uVar15 >> 0xb & 1) != 0) {
        *(undefined1 *)(param_1 + 0x62) = 1;
      }
      iVar6 = FUN_ram_420893aa();
      if ((((iVar6 == 0) || ((uVar14 & 0x2000) == 0)) || (_DAT_ram_3fcc417c == 0)) ||
         ((_DAT_ram_3fcc41c4 == 0 || ((uVar15 & 0x40) == 0)))) {
        if ((uVar14 & 0x10200) == 0) {
          if (((uVar14 & 0x8000) != 0) && (cVar1 != '\0')) {
            if ((uVar15 & 0x40) == 0) {
              puVar9 = &DAT_ram_3c0fc0dc;
              goto LAB_ram_4207ae88;
            }
            DAT_ram_3fcc41bc = 9;
            DAT_ram_3fcc41bd = 0xf;
            uVar11 = 9;
            goto LAB_ram_4207ae38;
          }
          iVar6 = FUN_ram_420893aa();
          if (((iVar6 != 0) && (_DAT_ram_3fcc417c != 0)) && ((uVar14 & 0x410) != 0)) {
            if ((_DAT_ram_3fcc41c4 == 0) || (DAT_ram_3fcc41c0 == '\x01')) {
              DAT_ram_3fcc41bd = 10;
              if ((uVar14 & 0x400) == 0) goto LAB_ram_4207af86;
LAB_ram_4207af88:
              uVar11 = 5;
              goto LAB_ram_4207addc;
            }
            if ((uVar14 & 0x400) == 0) {
LAB_ram_4207af86:
              DAT_ram_3fcc41bd = 4;
              goto LAB_ram_4207af88;
            }
            DAT_ram_3fcc41bd = 10;
            if (*(int *)(param_1 + 0x34) != 0) goto LAB_ram_4207af88;
            if (((uVar14 != 0x400) || (uVar11 = 0xe, (uVar15 & 0x40) == 0)) &&
               (uVar11 = 0xf, (uVar15 & 0x80) == 0)) {
              uVar11 = 5;
            }
            *(undefined1 *)(param_1 + 0x60) = uVar11;
            DAT_ram_3fcc41bd = 10;
            goto LAB_ram_4207af5c;
          }
          if ((uVar14 & 0x100) != 0) goto LAB_ram_4207aeb2;
          if ((((uVar14 & 0x4000) != 0) && (*(char *)(*(int *)(gp + -0xb4) + 0x414) != '\0')) &&
             (iVar6 = FUN_ram_4208939a(), iVar6 != 0)) {
            DAT_ram_3fcc41bc = 8;
            DAT_ram_3fcc41bd = 0xe;
            goto LAB_ram_4207afb6;
          }
          if ((uVar14 & 0x20) != 0) goto LAB_ram_4207aed2;
          if (((uVar14 & 0x20000) != 0) && (cVar1 != '\0')) {
            DAT_ram_3fcc41bd = 0x11;
            uVar11 = 0xd;
            goto LAB_ram_4207ae38;
          }
        }
        else {
          iVar6 = FUN_ram_4208937a();
          if (((iVar6 == 0) || (_DAT_ram_3fcc41c4 == 0)) || (DAT_ram_3fcc41c0 == '\x01')) {
            if ((uVar14 & 0x100) == 0) {
              if ((uVar14 & 0x20) == 0) {
                puVar9 = &DAT_ram_3c0fc09c;
                goto LAB_ram_4207ae88;
              }
              FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc05c);
LAB_ram_4207aed2:
              DAT_ram_3fcc41bd = 5;
            }
            else {
              FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc014);
LAB_ram_4207aeb2:
              DAT_ram_3fcc41bd = 8;
            }
LAB_ram_4207afb6:
            uVar11 = 3;
          }
          else if (((uVar15 & 0x80) == 0) || ((uVar14 & 0x120) == 0)) {
            if ((uVar15 & 0x40) == 0) {
              puVar9 = &DAT_ram_3c0fbfdc;
LAB_ram_4207ae88:
              FUN_ram_4207a038(1,4,4,puVar9);
              _DAT_ram_3fcc41bc = CONCAT11(0x12,DAT_ram_3fcc41bc);
              return '\0';
            }
            DAT_ram_3fcc41bd = 9;
            if ((uVar14 & 0x10000) != 0) {
              DAT_ram_3fcc41bd = 0x10;
            }
            uVar11 = 6;
            DAT_ram_3fcc41bc = 6;
          }
          else {
            DAT_ram_3fcc41bd = 9;
            if ((uVar14 & 0x10000) != 0) {
              DAT_ram_3fcc41bd = 0x10;
            }
            DAT_ram_3fcc41bc = 6;
            uVar11 = 7;
          }
LAB_ram_4207ae38:
          *(undefined1 *)(param_1 + 0x60) = uVar11;
        }
        if (_DAT_ram_3fcc417c != 0) goto LAB_ram_4207af5c;
        if (DAT_ram_3fcc41bd == 0x12) {
          if ((uVar14 & 0x2410) == 0) {
            puVar9 = &UNK_ram_3c0fc168;
          }
          else {
            puVar9 = &DAT_ram_3c0fc148;
          }
          goto LAB_ram_4207b164;
        }
      }
      else {
        DAT_ram_3fcc41bd = 0xd;
        uVar11 = 10;
LAB_ram_4207addc:
        *(undefined1 *)(param_1 + 0x60) = uVar11;
LAB_ram_4207af5c:
        if ((9 < (DAT_ram_3fcc41bd - 4 & 0xff)) ||
           ((-0x242 >> (DAT_ram_3fcc41bd - 4 & 0x1f) & 1U) != 0)) {
          puVar9 = &UNK_ram_3c0fc124;
          goto LAB_ram_4207b164;
        }
      }
      if (DAT_ram_3fcc41bd != 0xf) {
        if (DAT_ram_3fcc41bd == 0x12) {
          return '\0';
        }
LAB_ram_4207b00c:
        if ((iVar17 != 0) || (uVar11 = 1, iVar16 != 0)) {
          FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fc1a0,iVar17,iVar16);
          uVar11 = 0;
        }
        if (DAT_ram_3fcc4253 == '\0') {
          DAT_ram_3fcc41c3 = uVar11;
          return '\x01';
        }
        DAT_ram_3fcc41c3 = uVar11;
        if ((_DAT_ram_3fcc417c != 0) && ((uVar14 == 0x10 || ((uVar15 & 0x40) == 0)))) {
          FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc1c8);
          DAT_ram_3fcc3075 = 1;
          return '\0';
        }
        if ((byte)(*(char *)(param_1 + 0x60) - 6U) < 2) {
          return DAT_ram_3fcc4253;
        }
        FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc220);
        DAT_ram_3fcc3075 = 1;
        return '\0';
      }
      if (*(char *)(*(int *)(gp + -0xb4) + 0x415) != '\0') goto LAB_ram_4207b00c;
      *(undefined1 *)(param_1 + 0x6c) = 1;
      pcVar10 = &UNK_ram_3c0fc174;
      goto LAB_ram_4207aa9e;
    }
LAB_ram_4207ad12:
    puVar9 = &DAT_ram_3c0ff974;
    uVar7 = 3;
    uVar8 = 0x20;
  }
  else {
    if (uVar14 - 3 < 3) {
      pcVar10 = " the pace.";
      puVar9 = &DAT_ram_3c0fbeb8;
      goto LAB_ram_4207aa78;
    }
    uVar15 = FUN_ram_4207a166(iVar16 + 4,&uStack_31);
    if ((uVar15 & 0xffffffdf) == 0) goto LAB_ram_4207aaf6;
    DAT_ram_3fcc41c0 = (char)uVar15;
    if (uVar14 == 6) {
      puVar9 = &DAT_ram_3c0fbecc;
      goto LAB_ram_4207aab2;
    }
    if (uVar14 == 7) {
      pcVar10 = &DAT_ram_3c0c41dc;
      puVar9 = &DAT_ram_3c0fbee0;
      goto LAB_ram_4207aa78;
    }
    uVar2 = *(ushort *)(iVar16 + 8);
    iVar17 = uVar14 - 8;
    puVar18 = (ushort *)(iVar16 + 10);
    if (uVar2 == 0) {
      iVar16 = 1;
      if (iVar17 != 0) goto LAB_ram_4207b150;
      puVar9 = &DAT_ram_3c0fbef4;
LAB_ram_4207ab4c:
      FUN_ram_4207a038(1,8,4,puVar9);
      uVar14 = 0;
      iVar17 = 1;
      goto LAB_ram_4207aac2;
    }
    if ((0 < iVar17) && (iVar17 < 4)) {
      pcVar10 = "ot wear others\' expectations.";
      puVar9 = &DAT_ram_3c0fbf10;
      goto LAB_ram_4207aa78;
    }
    DAT_ram_3fcc41be = ' ';
    uVar14 = 0;
    do {
      if (iVar17 < 1) break;
      iVar16 = FUN_ram_4207a166(puVar18,&uStack_31);
      if ((iVar16 != 0x20) && (iVar6 = FUN_ram_4207a916(), iVar6 != 0)) {
        DAT_ram_3fcc41be = (char)iVar16;
      }
      uVar14 = uVar14 + 1;
      iVar17 = iVar17 + -4;
      puVar18 = puVar18 + 2;
    } while (uVar14 < uVar2);
    iVar16 = 0;
LAB_ram_4207b150:
    if (DAT_ram_3fcc41be != ' ') {
      if (iVar17 == 0) {
        puVar9 = &DAT_ram_3c0fbf34;
        goto LAB_ram_4207ab4c;
      }
      if (iVar17 == 1) {
        pcVar10 = "ions.";
        puVar9 = &DAT_ram_3c0fbf48;
        goto LAB_ram_4207aa78;
      }
      iVar6 = iVar17 + -2;
      puVar12 = puVar18 + 1;
      if (*puVar18 == 0) {
        if (iVar6 == 0) {
          puVar9 = &DAT_ram_3c0fbf5c;
          goto LAB_ram_4207ab4c;
        }
        uVar14 = 0;
        iVar17 = 1;
      }
      else {
        if ((0 < iVar6) && (iVar6 < 4)) {
          pcVar10 = &DAT_ram_3c0c4220;
          puVar9 = &DAT_ram_3c0fbf78;
          goto LAB_ram_4207aa78;
        }
        DAT_ram_3fcc41bd = 0x12;
        uVar14 = 0;
        for (uVar15 = 0;
            (puVar12 = (ushort *)((int)puVar18 + (iVar17 - iVar6)), 0 < iVar6 && (uVar15 < *puVar18)
            ); uVar15 = uVar15 + 1) {
          iVar3 = *(int *)puVar12;
          puVar9 = (undefined *)0x20000;
          if (iVar3 != 0x29a6f50) {
            iVar4 = 6;
            if (iVar3 != 0x6ac0f00) {
              if (iVar3 < 0x6ac0f01) {
                iVar4 = 4;
                if (iVar3 != 0x4ac0f00) {
                  if (iVar3 < 0x4ac0f01) {
                    iVar4 = 1;
                    if (iVar3 != 0x1ac0f00) {
                      iVar4 = (uint)(iVar3 == 0x2ac0f00) << 1;
                    }
                  }
                  else {
                    iVar4 = 0;
                    if (iVar3 == 0x5ac0f00) {
                      iVar4 = 5;
                    }
                  }
                }
              }
              else {
                iVar4 = 0x12;
                if ((iVar3 != 0x12ac0f00) && (iVar4 = 0x18, iVar3 != 0x18ac0f00)) {
                  iVar4 = (uint)(iVar3 == 0x8ac0f00) << 3;
                }
              }
            }
            puVar9 = (undefined *)0x0;
            if (iVar4 - 1U < 0x18) {
              puVar9 = (&PTR_caseD_0_ram_3c0fa7dc)[iVar4 - 1U];
            }
          }
          uVar14 = uVar14 | (uint)puVar9;
          iVar6 = iVar6 + -4;
        }
        iVar17 = 0;
      }
      *(uint *)(param_1 + 0x70) = uVar14;
      if (iVar6 == 0) goto LAB_ram_4207aac2;
      if (iVar6 == 1) {
        pcVar10 = &DAT_ram_3c0c422c;
        puVar9 = &DAT_ram_3c0fbf8c;
        goto LAB_ram_4207aa78;
      }
      uVar2 = *puVar12;
      uVar15 = (uint)uVar2;
      if (iVar6 != 2) {
        if (iVar6 == 3) {
          pcVar10 = &DAT_ram_3c0c4230;
          puVar9 = &DAT_ram_3c0fbfa0;
LAB_ram_4207aa78:
          FUN_ram_4207a038(1,8,4,puVar9,pcVar10);
          return '\0';
        }
        iVar6 = iVar6 + -4;
        uVar5 = (uint)puVar12[1];
        if ((0 < iVar6) && (iVar6 < (int)(uVar5 * 0x10))) {
          pcVar10 = " one small corner feel better.";
          puVar9 = &DAT_ram_3c0fbfb4;
          goto LAB_ram_4207aa78;
        }
        if (iVar6 != uVar5 * 0x10) {
          if ((iVar6 + uVar5 * -0x10) - 1 < 3) {
            pcVar10 = "orner feel better.";
            puVar9 = &DAT_ram_3c0fbfc8;
            goto LAB_ram_4207aa78;
          }
          iVar6 = FUN_ram_4207a166(puVar12 + uVar5 * 8 + 2,&uStack_31);
          if ((iVar6 != 9) && (1 < iVar6 - 0xdU)) {
            FUN_ram_4207a038(1,0x20,2,
                             "f//QAvgAvwYAh4AL4AFVVQAfMgACyQACvAIBMgBxv//gAvgA/wYAhb//wAvgAAAAMgACoRMT+jIAHwsyABAB/Qgj/+oyAB+/MgAQAbYLIq6qLAEo//8yAAKcAAGWABADIBkDyAAB+wABxgEHMgBBf//QAwYAAQABMcAL4JwDBDIAAZcACWQABJABET9eATG//8CQAQYyAAGXAAkyALP9AB//QAf4AB//ADIAJ/QAkAECWwIJMgDC/wAH/QAP+AAC+AALMgAx/AA/JgID4gkBvAUI+gBh/0AAAAAftgISDzIAkf0ABVAAv/QAFR0CAVsCCmQAJMAAGgMSLzIAkv8AAAAA//wAADIAAS4BCWQAgfAAAAH/+ADgWAO1v//AC//AAAAH//0yAAPtAwVeAZH//gAAC//4APi8AwEyAHT4AAAv//9AZAAS/2QABwIAgflW///4AP+VDAgBAgBx5Vv////5VQwAApcAAQgACQIAFfhRAA8CAAAW/voJBgIADzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                            );
            *(undefined1 *)(param_1 + 0x6c) = 1;
            return '\0';
          }
          DAT_ram_3fcc41c6 = (undefined1)iVar6;
        }
      }
      if (cVar1 == '\0') {
        if ((uVar2 & 0x40) != 0) goto LAB_ram_4207aaf6;
      }
      else if (cVar13 == '\0') {
        if ((uVar2 & 0x80) != 0) goto LAB_ram_4207ad2a;
      }
      else {
        if ((uVar2 & 0x80) == 0) goto LAB_ram_4207ad12;
LAB_ram_4207ad2a:
        if ((DAT_ram_3fcc41be == '\x03') || ((byte)(DAT_ram_3fcc41be - 0xbU) < 2)) {
          _DAT_ram_3fcc41c4 = 1;
        }
        else {
          if (((DAT_ram_3fcc41c0 != '\x03') && (1 < (byte)(DAT_ram_3fcc41c0 - 0xbU))) &&
             (((uVar14 - 0x8000 & 0xffff7fff) == 0 || ((uVar14 & 0xfffeffff) == 0x200)))) {
            pcVar10 = 
            "MgBxv//gAvgA/wYAhb//wAvgAAAAMgACoRMT+jIAHwsyABAB/Qgj/+oyAB+/MgAQAbYLIq6qLAEo//8yAAKcAAGWABADIBkDyAAB+wABxgEHMgBBf//QAwYAAQABMcAL4JwDBDIAAZcACWQABJABET9eATG//8CQAQYyAAGXAAkyALP9AB//QAf4AB//ADIAJ/QAkAECWwIJMgDC/wAH/QAP+AAC+AALMgAx/AA/JgID4gkBvAUI+gBh/0AAAAAftgISDzIAkf0ABVAAv/QAFR0CAVsCCmQAJMAAGgMSLzIAkv8AAAAA//wAADIAAS4BCWQAgfAAAAH/+ADgWAO1v//AC//AAAAH//0yAAPtAwVeAZH//gAAC//4APi8AwEyAHT4AAAv//9AZAAS/2QABwIAgflW///4AP+VDAgBAgBx5Vv////5VQwAApcAAQgACQIAFfhRAA8CAAAW/voJBgIADzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
            ;
            uVar8 = 2;
            uVar7 = 0x20;
            goto LAB_ram_4207ad7c;
          }
          FUN_ram_4207a038(1,0x20,2,
                           "LAEo//8yAAKcAAGWABADIBkDyAAB+wABxgEHMgBBf//QAwYAAQABMcAL4JwDBDIAAZcACWQABJABET9eATG//8CQAQYyAAGXAAkyALP9AB//QAf4AB//ADIAJ/QAkAECWwIJMgDC/wAH/QAP+AAC+AALMgAx/AA/JgID4gkBvAUI+gBh/0AAAAAftgISDzIAkf0ABVAAv/QAFR0CAVsCCmQAJMAAGgMSLzIAkv8AAAAA//wAADIAAS4BCWQAgfAAAAH/+ADgWAO1v//AC//AAAAH//0yAAPtAwVeAZH//gAAC//4APi8AwEyAHT4AAAv//9AZAAS/2QABwIAgflW///4AP+VDAgBAgBx5Vv////5VQwAApcAAQgACQIAFfhRAA8CAAAW/voJBgIADzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                          );
          _DAT_ram_3fcc41c4 = 0;
        }
      }
      goto LAB_ram_4207ad9c;
    }
    puVar9 = &UNK_ram_3c0fbf24;
LAB_ram_4207b164:
    uVar7 = 4;
    uVar8 = 8;
  }
  FUN_ram_4207a038(1,uVar8,uVar7,puVar9);
LAB_ram_4207aaf6:
  *(undefined1 *)(param_1 + 0x6c) = 1;
  return '\0';
}

