
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201e36e(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined *puVar11;
  uint uVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  undefined2 uStack_dc;
  short sStack_da;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  char acStack_c8 [36];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  char acStack_74 [68];
  
  iVar4 = FUN_ram_4201f03c();
  if (iVar4 != 0) goto LAB_ram_4201e38e;
  if (*(char *)(gp + -0x77a) == '\0') {
    return;
  }
  iVar4 = FUN_ram_4201ee6a();
  if (iVar4 == 0) {
    return;
  }
  if (_DAT_ram_3fcc5110 == 7) {
    FUN_ram_4201eeb2(0);
    iVar5 = FUN_ram_4201605e();
    if (iVar5 == 0) {
      pcVar10 = "se the option that fits your values better.";
    }
    else {
      pcVar10 = "at fits your values better.";
    }
    FUN_ram_4201f3fe(0x14,pcVar10,3);
    FUN_ram_4201d272(iVar4);
    uVar3 = _DAT_ram_3fcc5104 - 1;
    if ((int)uVar3 < 1) {
      uVar3 = uVar3 & (int)~uVar3 >> 0x1f;
    }
    else {
      uVar3 = 1;
    }
    iVar6 = 0x3c;
    do {
      uVar12 = (uint)*(ushort *)
                      (
                      "HwABAJ0f/wEAAU+AAAADGAABX//gAAAPGQACT/gAAB8ZAAJP/AAAPxkAAh/+GQAIL3/wRwEAbwf/AAB/wBkAAF8B/wAA/2UAAW/8f4AA/39+AAFff4AA/nxLAABfD7+AAP59AAJfv4AA/OAyAABfA5+AAPyWAAEPGQAGHwEyAAUPGQD//////////////zRpA4AA/MABoQsUGK4LQ/zAB/wMAGM4AAAHgDwNAK4A/MAP/hwAAABwGQAvH/8ZAAQoHg8ZAARKAPEGAPzAPAccA8AOcAB4OeAPB4AAB4B4HQDxlfzAPAB/j/H//gH+O/g/x4+8/8H9wAD+AAD8wB4Af5/5//4D/z/4f+ePPP/j/8ADAwAA/MAf4H++ef/+B88/fPnnnjz78+/ABgGAAPzAD/wcPDngcAeHPDzw57w88PeDwAcBgAD8wAf+HAA54HAHwDw8AOf4POD3g8AABwAA/MAA/xwP+eBwA/g4HD/n8Dzg94PAABwAAPzAAA+cP/ngcAP+OBz/MgBBgcAAGBkAEQcZAHIA/zgc/+f8SwAREMgA0geceDngcAAPuB3g57wZAAL6APMCDxx4eeBwB4e4HeHnnjzg98cZAPEGP/8efPngeAePOB3z55884PP/wAAw4QBx/x+/+eB+A2QAIY+8GQAheADhAPMBH5/54D4D/jgcf+eHvODx/TIAsgHwB48AAB4AeAAAvwETA2QAAWUBBwIAFAd9AAcUAAECADID/4CvAAEOAAcCAB8BGQAFIQD+JgAOMgAA5Q8BcQICCwAJAgAPxQ3/UQnmAwMCAAF3AQ8ZAAEvA5/SDwgj/vg/AAgCAC8fPzYQCB//5hABP/5/gJoQBw/MEAYfP5kQAQ8XEQoPfAABP////JQRCA/GEQYfAH0AAgEiAw8CAK1QAAAAAAA="
                      + uVar3 * 2 + 0xcc);
      if (uVar12 < 0x3c) {
        if (iVar5 == 0) {
          pcVar10 = "e in the plan for insight.";
        }
        else {
          pcVar10 = " plan for insight.";
        }
      }
      else {
        uVar12 = uVar12 / 0x3c;
        pcVar10 = "r insight.";
        if (iVar5 != 0) {
          pcVar10 = &DAT_ram_3c0c17dc;
        }
      }
      (*(code *)&SUB_ram_400106ac)(acStack_74,0x20,pcVar10,uVar12);
      FUN_ram_4201d3b0(iVar4,iVar6,acStack_74,_DAT_ram_3fcc5104 == uVar3);
      iVar6 = iVar6 + 0x24;
      uVar3 = uVar3 + 1;
    } while (iVar6 != 0xcc);
    goto LAB_ram_4201e506;
  }
  if (_DAT_ram_3fcc5110 < 8) {
    if (_DAT_ram_3fcc5110 == 3) {
      FUN_ram_4201eeb2(0);
      iVar5 = FUN_ram_4201605e();
      if (iVar5 == 0) {
        pcVar10 = (char *)0x3c0a8c9c;
      }
      else {
        pcVar10 = "With ISFJs, your understanding is often well received.";
      }
      FUN_ram_4201f3fe(0x14,pcVar10,3);
      FUN_ram_4201d272(iVar4);
      uVar3 = FUN_ram_42022260();
      if (uVar3 == 0) {
        if (iVar5 == 0) {
          pcVar10 = "your understanding is often well received.";
          pcVar9 = "iew immediately.";
        }
        else {
          pcVar10 = "ng is often well received.";
          pcVar9 = "eived.";
        }
        FUN_ram_4201d0f4(iVar4,100,pcVar10,pcVar9);
        goto LAB_ram_4201e506;
      }
      iVar6 = 0x38;
      uVar12 = 0;
      do {
        (*(code *)&SUB_ram_40010488)(acStack_c8,0,0x21);
        (*(code *)&SUB_ram_40010488)(acStack_74,0,0x41);
        iVar14 = FUN_ram_420221ba(uVar12 & 0xff,acStack_c8,acStack_74);
        uVar2 = _DAT_ram_3fcc5104;
        uVar15 = uVar12 + 1;
        if (iVar14 == 0) {
          if (_DAT_ram_3fcc5104 == uVar12) {
            FUN_ram_4201d342();
          }
          else {
            FUN_ram_4201d2a2(iVar4,0xc,iVar6,0xb0,0x18);
          }
          pcVar10 = acStack_c8;
          if (acStack_c8[0] == '\0') {
            pcVar10 = &DAT_ram_3c0c14f8;
          }
          (*(code *)&SUB_ram_400106ac)
                    (&uStack_a4,0x30,"ite space in the plan for insight.",uVar15,pcVar10);
          uStack_dc = 0x14;
          sStack_da = (short)iVar6 + 4;
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uVar13 = 3;
          if (uVar2 == uVar12) {
            uVar13 = 0;
          }
          uStack_d4 = (uint)CONCAT11(0xff,uVar13);
          FUN_ram_4201f3b0(&uStack_a4,&uStack_dc);
        }
      } while ((uVar3 != uVar15) && (iVar6 = iVar6 + 0x20, uVar12 = uVar15, uVar15 != 3));
      if (iVar5 == 0) {
        pcVar10 = &DAT_ram_3c0c1500;
      }
      else {
        pcVar10 = &DAT_ram_3c0c1514;
      }
      uVar8 = 3;
      iVar4 = 0xb4;
LAB_ram_4201e6e0:
      FUN_ram_4201f3fe(iVar4,pcVar10,uVar8);
    }
    else if (_DAT_ram_3fcc5110 < 4) {
      if ((_DAT_ram_3fcc5110 == 1) || (_DAT_ram_3fcc5110 != 2)) {
        FUN_ram_4201d3f6();
      }
      else {
        FUN_ram_4201da44();
      }
    }
    else {
      if (_DAT_ram_3fcc5110 != 5) {
        if (_DAT_ram_3fcc5110 != 6) {
          iVar5 = FUN_ram_4201605e();
          if (_DAT_ram_3fcc5100 == 3) {
            FUN_ram_4201eeb2(1);
            uVar3 = 0x80;
            if (DAT_ram_3fcc50f6 != '\0') {
              iVar6 = FUN_ram_42021324(0x3fcc50f0,3);
              uVar8 = 3;
              if (0x76 < iVar6) {
                iVar6 = FUN_ram_42021324(0x3fcc50f0,2);
                uVar8 = 2;
              }
              iVar14 = (200 - iVar6) / 2;
              uVar3 = iVar6 + 0x16;
              FUN_ram_4201cfa4(iVar4,iVar14 + -5,9,iVar6 + 10,iVar6 + 10,5);
              FUN_ram_4202120e(0x3fcc50f0,iVar4,iVar14,0xe,uVar8);
            }
            FUN_ram_4201d0a4(uVar3,&DAT_ram_3fcbb310,0,0xb4,0x22);
            if (iVar5 == 0) {
              pcVar9 = "xplain every silence; reduce your drain first.";
              pcVar10 = " your drain first.";
            }
            else {
              pcVar9 = &DAT_ram_3c0c1554;
              pcVar10 = "Map the path before starting the important project.";
            }
            FUN_ram_4201f3fe((int)(((uVar3 & 0xffff) + 0x1c) * 0x10000) >> 0x10,pcVar9,0);
            uVar8 = 0;
            iVar4 = (int)(((uVar3 & 0xffff) + 0x30) * 0x10000) >> 0x10;
            goto LAB_ram_4201e6e0;
          }
          if ((3 < _DAT_ram_3fcc5100) && (_DAT_ram_3fcc5100 != 4)) goto LAB_ram_4201e506;
          FUN_ram_4201eeb2(1);
          FUN_ram_4201d0f4(iVar4,100,&DAT_ram_3fcbb2d0,0);
          if ((_DAT_ram_3fcc5100 != 4) && (_DAT_ram_3fcc5100 != 1)) goto LAB_ram_4201e506;
          if (iVar5 == 0) {
            pcVar10 = &DAT_ram_3c0c11cc;
          }
          else {
            pcVar10 = "Map the path before starting the important project.";
          }
          goto LAB_ram_4201e74c;
        }
        FUN_ram_4201eeb2(0);
        iVar5 = FUN_ram_4201605e();
        if (iVar5 == 0) {
          puVar7 = &DAT_ram_3c0c1568;
        }
        else {
          puVar7 = &DAT_ram_3c0c1578;
        }
        FUN_ram_4201f3fe(0x14,puVar7,3);
        FUN_ram_4201d272(iVar4);
        FUN_ram_4201d3b0(iVar4,0x3c,0x3c0a8f98,_DAT_ram_3fcc5104 == 0);
        pcVar10 = (char *)0x3c0a8fa0;
LAB_ram_4201e44c:
        uVar8 = 100;
        goto LAB_ram_4201e450;
      }
      FUN_ram_4201d546();
    }
  }
  else {
    if (_DAT_ram_3fcc5110 == 0xb) {
      FUN_ram_4201eeb2(0);
      iVar5 = FUN_ram_4201605e();
      if (iVar5 == 0) {
        puVar7 = &DAT_ram_3c0c16e0;
      }
      else {
        puVar7 = &DAT_ram_3c0c16f4;
      }
      FUN_ram_4201f3fe(0x14,puVar7,3);
      FUN_ram_4201d272(iVar4);
      uVar8 = FUN_ram_42016368();
      if (iVar5 == 0) {
        (*(code *)&SUB_ram_400106ac)(acStack_74,0x28,&DAT_ram_3c0c17e4);
        pcVar10 = "Before helping, ask if you truly want to.";
      }
      else {
        (*(code *)&SUB_ram_400106ac)(acStack_74,0x28,&DAT_ram_3c0c17f8,uVar8);
        pcVar10 = "ask if you truly want to.";
      }
      FUN_ram_4201f3fe(0x41,acStack_74,3);
      FUN_ram_4201f3fe(0x5a,pcVar10,3);
      if (iVar5 == 0) {
        pcVar9 = (char *)0x3c0ad490;
        pcVar10 = "t to.";
      }
      else {
LAB_ram_4201eb8a:
        pcVar9 = "";
        pcVar10 = &UNK_ram_3c0c16d0;
      }
    }
    else if (_DAT_ram_3fcc5110 < 0xc) {
      if (_DAT_ram_3fcc5110 == 9) {
        FUN_ram_4201eeb2(0);
        iVar5 = FUN_ram_4201605e();
        if (iVar5 == 0) {
          puVar7 = &DAT_ram_3c0c15c8;
        }
        else {
          puVar7 = &DAT_ram_3c0c15d8;
        }
        FUN_ram_4201f3fe(0x14,puVar7,3);
        FUN_ram_4201d272(iVar4);
        if (iVar5 == 0) {
          puVar11 = (undefined *)0x3c0b0e30;
          puVar7 = &DAT_ram_3c0c15bc;
        }
        else {
          puVar11 = &DAT_ram_3c0c15c0;
          puVar7 = &UNK_ram_3c0c15c4;
        }
        FUN_ram_4201d3b0(iVar4,0x3c,puVar11,_DAT_ram_3fcc5104 == 0);
        FUN_ram_4201d3b0(iVar4,100,puVar7,_DAT_ram_3fcc5104 == 1);
        if (iVar5 == 0) {
          pcVar9 = "Good day to refine vision, not force enthusiasm.";
          pcVar10 = "ot force enthusiasm.";
        }
        else {
          pcVar9 = &DAT_ram_3c0c1618;
          pcVar10 = &UNK_ram_3c0c1630;
        }
        FUN_ram_4201d0a4(0xa2,pcVar9,3,0xb4,0x10);
        FUN_ram_4201d0a4(0xb6,pcVar10,3,0xb4,0x10);
        goto LAB_ram_4201e506;
      }
      if (_DAT_ram_3fcc5110 != 10) {
        FUN_ram_4201eeb2(0);
        iVar5 = FUN_ram_4201605e();
        if (iVar5 == 0) {
          pcVar10 = " values better.";
        }
        else {
          pcVar10 = &DAT_ram_3c0c15b0;
        }
        FUN_ram_4201f3fe(0x14,pcVar10,3);
        FUN_ram_4201d272(iVar4);
        if (iVar5 == 0) {
          puVar7 = (undefined *)0x3c0b0e30;
          pcVar10 = &DAT_ram_3c0c15bc;
        }
        else {
          puVar7 = &DAT_ram_3c0c15c0;
          pcVar10 = &UNK_ram_3c0c15c4;
        }
        FUN_ram_4201d3b0(iVar4,0x3c,puVar7,_DAT_ram_3fcc5104 == 0);
        goto LAB_ram_4201e44c;
      }
      FUN_ram_4201eeb2(0);
      iVar5 = FUN_ram_4201605e();
      if (iVar5 == 0) {
        pcVar10 = "are tomorrow\'s hardest step in advance.";
      }
      else {
        pcVar10 = "ardest step in advance.";
      }
      FUN_ram_4201f3fe(0x14,pcVar10,3);
      FUN_ram_4201d272(iVar4);
      if (iVar5 == 0) {
        pcVar9 = "in advance.";
        pcVar10 = &DAT_ram_3c0c1678;
      }
      else {
        pcVar9 = &DAT_ram_3c0c168c;
        pcVar10 = " distance from surface-level excitement.";
      }
      FUN_ram_4201f3fe(0x41,pcVar9,3);
      FUN_ram_4201f3fe(0x5a,pcVar10,3);
      if (iVar5 == 0) {
        pcVar9 = (char *)0x3c0ad490;
        pcVar10 = "evel excitement.";
      }
      else {
        pcVar9 = "";
        pcVar10 = &UNK_ram_3c0c16d0;
      }
    }
    else {
      if (_DAT_ram_3fcc5110 != 0xc) {
        if (_DAT_ram_3fcc5110 != 0xd) goto LAB_ram_4201e506;
        FUN_ram_4201eeb2(1);
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        uStack_98 = 0;
        iVar5 = FUN_ram_42021ac4(&uStack_a4,0xd);
        if (iVar5 == 0) {
          acStack_74[0] = '\0';
          acStack_74[1] = '\0';
          acStack_74[2] = '\0';
          acStack_74[3] = '\0';
          acStack_74[4] = '\0';
          acStack_74[5] = '\0';
          acStack_74[6] = '\0';
          acStack_74[7] = '\0';
          iVar5 = FUN_ram_420210fa(&uStack_a4,0,acStack_74);
          if (iVar5 == 0) {
            pcVar10 = "Step back slowly from bonds that keep draining you.";
            goto LAB_ram_4201ec56;
          }
          iVar5 = FUN_ram_42021324(acStack_74,5);
          uVar8 = 5;
          if (0x7e < iVar5) {
            iVar5 = FUN_ram_42021324(acStack_74,4);
            uVar8 = 4;
          }
          iVar6 = (200 - iVar5) / 2;
          FUN_ram_4201cfa4(iVar4,iVar6 + -6,0x16,iVar5 + 0xc,iVar5 + 0xc,6);
          FUN_ram_4202120e(acStack_74,iVar4,iVar6,0x1c,uVar8);
          FUN_ram_420211a6(acStack_74);
        }
        else {
          pcVar10 = "owly from bonds that keep draining you.";
LAB_ram_4201ec56:
          FUN_ram_4201f3fe(0x5c,pcVar10,0);
        }
        FUN_ram_4201f3fe(0xa2,"nds that keep draining you.",0);
        iVar4 = FUN_ram_4201570a();
        if (iVar4 < 0) {
          iVar4 = FUN_ram_4201579a();
          if (iVar4 == 1) {
            pcVar10 = "ng you.";
          }
          else {
            pcVar10 = &DAT_ram_3c0c1840;
          }
          FUN_ram_4039c54e(acStack_74,pcVar10);
        }
        else {
          (*(code *)&SUB_ram_400106ac)(acStack_74,0x18," keep draining you.");
        }
        pcVar10 = acStack_74;
LAB_ram_4201e74c:
        uVar8 = 0;
        iVar4 = 0xb6;
        goto LAB_ram_4201e6e0;
      }
      FUN_ram_4201eeb2(0);
      iVar5 = FUN_ram_4201605e();
      if (iVar5 == 0) {
        puVar7 = &DAT_ram_3c0c1734;
      }
      else {
        puVar7 = &DAT_ram_3c0c1748;
      }
      FUN_ram_4201f3fe(0x14,puVar7,3);
      FUN_ram_4201d272(iVar4);
      if (iVar5 == 0) {
        puVar7 = &DAT_ram_3c0c1758;
        pcVar10 = "d align inwardly more.";
      }
      else {
        puVar7 = &DAT_ram_3c0c1788;
        pcVar10 = &UNK_ram_3c0c17a4;
      }
      FUN_ram_4201f3fe(0x41,puVar7,3);
      FUN_ram_4201f3fe(0x5a,pcVar10,3);
      if (iVar5 != 0) goto LAB_ram_4201eb8a;
      pcVar9 = (char *)0x3c0ad490;
      pcVar10 = "evel excitement.";
    }
    FUN_ram_4201d3b0(iVar4,0x78,pcVar9,_DAT_ram_3fcc5104 == 0);
    uVar8 = 0xa0;
LAB_ram_4201e450:
    FUN_ram_4201d3b0(iVar4,uVar8,pcVar10,_DAT_ram_3fcc5104 == 1);
  }
LAB_ram_4201e506:
  if (*(char *)(gp + -0x77b) == '\0') {
    iVar4 = FUN_ram_4201f108(0,199);
  }
  else {
    iVar4 = FUN_ram_4201ef22();
  }
  cVar1 = DAT_ram_3fcc50d0;
  *(undefined1 *)(gp + -0x77a) = 0;
  if ((cVar1 != '\0') && (_DAT_ram_3fcc50d4 == 0)) {
    DAT_ram_3fcc50d0 = '\0';
    if (iVar4 == 0) {
      FUN_ram_4201f046();
    }
    iVar4 = FUN_ram_40398e0e(0x4200dc1a,&DAT_ram_3c0c1848,0xc00,0,5,&DAT_ram_3fcc50d4,0x7fffffff);
    if (iVar4 != 1) {
      _DAT_ram_3fcc50e4 = 5;
      iVar4 = FUN_ram_4201605e();
      if (iVar4 == 0) {
        uVar8 = 0x3c0ad37c;
      }
      else {
        uVar8 = 0x3c0ad390;
      }
      FUN_ram_4039c61e(0x3fcbb23c,uVar8,0x40);
      *(undefined1 *)(gp + -0x77a) = 1;
      *(undefined1 *)(gp + -0x77b) = 1;
LAB_ram_4201e38e:
      FUN_ram_42018dcc();
      return;
    }
  }
  return;
}

