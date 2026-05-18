
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201ddaa(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_a5;
  int aiStack_24 [2];
  
  if (*param_1 != 1) {
    return;
  }
  iVar2 = param_1[1];
  cVar1 = (char)param_1[2];
  if (_DAT_ram_3fcc5110 == 7) {
    if (iVar2 == 3) {
      if (cVar1 != '\0') {
        return;
      }
      iVar2 = _DAT_ram_3fcc5104 + 1;
    }
    else {
      if (iVar2 != 4) {
        if (iVar2 == 1) {
          if (cVar1 == '\0') {
            return;
          }
          FUN_ram_42016248(*(undefined2 *)
                            (
                            "HwABAJ0f/wEAAU+AAAADGAABX//gAAAPGQACT/gAAB8ZAAJP/AAAPxkAAh/+GQAIL3/wRwEAbwf/AAB/wBkAAF8B/wAA/2UAAW/8f4AA/39+AAFff4AA/nxLAABfD7+AAP59AAJfv4AA/OAyAABfA5+AAPyWAAEPGQAGHwEyAAUPGQD//////////////zRpA4AA/MABoQsUGK4LQ/zAB/wMAGM4AAAHgDwNAK4A/MAP/hwAAABwGQAvH/8ZAAQoHg8ZAARKAPEGAPzAPAccA8AOcAB4OeAPB4AAB4B4HQDxlfzAPAB/j/H//gH+O/g/x4+8/8H9wAD+AAD8wB4Af5/5//4D/z/4f+ePPP/j/8ADAwAA/MAf4H++ef/+B88/fPnnnjz78+/ABgGAAPzAD/wcPDngcAeHPDzw57w88PeDwAcBgAD8wAf+HAA54HAHwDw8AOf4POD3g8AABwAA/MAA/xwP+eBwA/g4HD/n8Dzg94PAABwAAPzAAA+cP/ngcAP+OBz/MgBBgcAAGBkAEQcZAHIA/zgc/+f8SwAREMgA0geceDngcAAPuB3g57wZAAL6APMCDxx4eeBwB4e4HeHnnjzg98cZAPEGP/8efPngeAePOB3z55884PP/wAAw4QBx/x+/+eB+A2QAIY+8GQAheADhAPMBH5/54D4D/jgcf+eHvODx/TIAsgHwB48AAB4AeAAAvwETA2QAAWUBBwIAFAd9AAcUAAECADID/4CvAAEOAAcCAB8BGQAFIQD+JgAOMgAA5Q8BcQICCwAJAgAPxQ3/UQnmAwMCAAF3AQ8ZAAEvA5/SDwgj/vg/AAgCAC8fPzYQCB//5hABP/5/gJoQBw/MEAYfP5kQAQ8XEQoPfAABP////JQRCA/GEQYfAH0AAgEiAw8CAK1QAAAAAAA="
                            + _DAT_ram_3fcc5104 * 2 + 0xcc));
          *(undefined1 *)(gp + -0x77a) = 1;
          _DAT_ram_3fcc5110 = 0;
          *(undefined1 *)(gp + -0x77b) = 1;
          goto LAB_ram_4201deba;
        }
        goto LAB_ram_4201e138;
      }
      if (cVar1 != '\0') {
        return;
      }
      iVar2 = _DAT_ram_3fcc5104 + 4;
    }
    _DAT_ram_3fcc5104 = iVar2 % 5;
    *(undefined1 *)(gp + -0x77a) = 1;
  }
  else {
    if (7 < _DAT_ram_3fcc5110) {
      if (_DAT_ram_3fcc5110 == 0xb) {
        if ((iVar2 == 3) || (iVar2 == 4)) goto LAB_ram_4201e17c;
        if (iVar2 != 1) goto LAB_ram_4201e138;
        if (cVar1 == '\0') {
          return;
        }
        if (_DAT_ram_3fcc5104 == 1) {
          FUN_ram_42016454();
        }
      }
      else if (_DAT_ram_3fcc5110 < 0xc) {
        if (_DAT_ram_3fcc5110 == 9) {
          if ((iVar2 == 3) || (iVar2 == 4)) goto LAB_ram_4201e17c;
          if (iVar2 != 1) goto LAB_ram_4201e138;
          if (cVar1 == '\0') {
            return;
          }
          FUN_ram_420167b4(_DAT_ram_3fcc5104 == 1);
        }
        else if (_DAT_ram_3fcc5110 == 10) {
          if ((iVar2 == 3) || (iVar2 == 4)) {
LAB_ram_4201e17c:
            if (cVar1 != '\0') {
              return;
            }
            _DAT_ram_3fcc5104 = (int)(_DAT_ram_3fcc5104 + 1) % 2;
            iVar2 = _DAT_ram_3fcc5108;
            goto LAB_ram_4201deb0;
          }
          if (iVar2 == 1) {
            if (cVar1 == '\0') {
              return;
            }
            if (_DAT_ram_3fcc5104 == 1) {
              FUN_ram_420161da();
            }
          }
          else {
LAB_ram_4201e138:
            if (iVar2 != 2) {
              return;
            }
            if (cVar1 == '\0') {
              return;
            }
          }
        }
        else {
          if ((iVar2 == 3) || (iVar2 == 4)) goto LAB_ram_4201e17c;
          if (iVar2 != 1) goto LAB_ram_4201e138;
          if (cVar1 == '\0') {
            return;
          }
          FUN_ram_4201681c(_DAT_ram_3fcc5104 == 0);
        }
      }
      else {
        if (_DAT_ram_3fcc5110 != 0xc) {
          if (_DAT_ram_3fcc5110 != 0xd) {
            return;
          }
          if (iVar2 != 2) {
            if (cVar1 != '\0') {
              return;
            }
            if (1 < iVar2 - 3U) {
              return;
            }
            if (iVar2 != *(int *)(
                                 "HwABAJ0f/wEAAU+AAAADGAABX//gAAAPGQACT/gAAB8ZAAJP/AAAPxkAAh/+GQAIL3/wRwEAbwf/AAB/wBkAAF8B/wAA/2UAAW/8f4AA/39+AAFff4AA/nxLAABfD7+AAP59AAJfv4AA/OAyAABfA5+AAPyWAAEPGQAGHwEyAAUPGQD//////////////zQfA4YLBACQDQ+fCwIPGQBrH/6WAAQvAwMZAAQvBgHhAAQfBxkABS8AB0sABC8AHBkABR8YGQAFHxAZAAUfABkAHh8wMgAFH3gZAAUPMgAGD30AHw8yADgPcQIFD8UN/1EPhw8BAXcBDxkAAS8Dn9IPCCH++BQCCgIALx8/NhAIH//mEAE//n+AmhAHD8wQBg+yEAEPFxELD3wAAQFiEQ+UEQYPxhEGHwAWEQEq/4AKAQ8CAKNQAAAAAAA="
                                 + _DAT_ram_3fcc50cc * 4 + 0x1a8)) {
              _DAT_ram_3fcc50cc = (uint)(iVar2 == 4);
              return;
            }
            if ((int)(_DAT_ram_3fcc50cc + 1) < 4) {
              _DAT_ram_3fcc50cc = _DAT_ram_3fcc50cc + 1;
              return;
            }
            _DAT_ram_3fcc50cc = 0;
            FUN_ram_4201682a();
            FUN_ram_4202222a();
            iVar4 = FUN_ram_4204beee(&DAT_ram_3c0c14a8,1,aiStack_24);
            if (iVar4 == 0) {
              FUN_ram_4204bf42(aiStack_24[0]);
              FUN_ram_4204c0c8(aiStack_24[0]);
              FUN_ram_4204c3d0(aiStack_24[0]);
            }
            FUN_ram_42017a70();
            iVar4 = FUN_ram_4201771a();
            if (iVar4 == 0) {
              FUN_ram_4202336c();
            }
            FUN_ram_420168d4();
LAB_ram_4201de20:
            uVar3 = 10;
            goto LAB_ram_4201df3a;
          }
          if (cVar1 == '\0') {
            return;
          }
          _DAT_ram_3fcc50cc = 0;
          goto LAB_ram_4201e0ba;
        }
        if ((iVar2 == 3) || (iVar2 == 4)) goto LAB_ram_4201e17c;
        if (iVar2 != 1) goto LAB_ram_4201e138;
        if (cVar1 == '\0') {
          return;
        }
        if (_DAT_ram_3fcc5104 != 0) {
          FUN_ram_4201682a();
          FUN_ram_4202222a();
          iVar4 = FUN_ram_4204beee(&DAT_ram_3c0c14a8,1,aiStack_24);
          if (iVar4 == 0) {
            FUN_ram_4204bf42(aiStack_24[0]);
            FUN_ram_4204c0c8(aiStack_24[0]);
            FUN_ram_4204c3d0(aiStack_24[0]);
          }
          FUN_ram_42017a70();
          iVar4 = FUN_ram_4201771a();
          if (iVar4 == 0) {
            FUN_ram_4202336c();
          }
          goto LAB_ram_4201de20;
        }
      }
LAB_ram_4201e142:
      _DAT_ram_3fcc5110 = 0;
LAB_ram_4201df54:
      *(undefined1 *)(gp + -0x77a) = 1;
      *(undefined1 *)(gp + -0x77b) = 1;
      goto LAB_ram_4201deba;
    }
    if (_DAT_ram_3fcc5110 == 4) {
      if (iVar2 != 2) {
        return;
      }
      if (cVar1 == '\0') {
        return;
      }
      FUN_ram_4201ce64();
LAB_ram_4201e0ba:
      *(undefined1 *)(gp + -0x77a) = 1;
      _DAT_ram_3fcc5110 = 0;
      *(undefined1 *)(gp + -0x77b) = 1;
      goto LAB_ram_4201deba;
    }
    if (4 < _DAT_ram_3fcc5110) {
      if (_DAT_ram_3fcc5110 == 5) {
        if (iVar2 == 1) {
          if (_DAT_ram_3fcc50ec != 6) {
            return;
          }
          goto LAB_ram_4201de20;
        }
        if (iVar2 != 2) {
          return;
        }
        if (cVar1 == '\0') {
          return;
        }
        if (_DAT_ram_3fcc50ec == 6) {
          return;
        }
        FUN_ram_4201ced2();
      }
      else {
        if ((iVar2 == 3) || (iVar2 == 4)) goto LAB_ram_4201e17c;
        if (iVar2 != 1) goto LAB_ram_4201e138;
        if (cVar1 == '\0') {
          return;
        }
        FUN_ram_42015fe4(_DAT_ram_3fcc5104 != 0);
      }
      goto LAB_ram_4201e142;
    }
    if (_DAT_ram_3fcc5110 == 2) {
      if (iVar2 != 2) {
        return;
      }
      if (cVar1 == '\0') {
        return;
      }
      FUN_ram_4201ccaa();
      goto LAB_ram_4201e0ba;
    }
    if (_DAT_ram_3fcc5110 == 3) {
      iVar4 = FUN_ram_42022260();
      if (iVar2 == 3) {
        if (cVar1 != '\0') {
          return;
        }
        if (iVar4 == 0) {
          return;
        }
        iVar2 = _DAT_ram_3fcc5104 + 1;
      }
      else {
        if (iVar2 != 4) {
          if (iVar2 != 1) goto LAB_ram_4201e138;
          if (cVar1 == '\0') {
            return;
          }
          if (iVar4 == 0) {
            return;
          }
          FUN_ram_4202221a(_DAT_ram_3fcc5104 & 0xff);
          iVar2 = FUN_ram_42022260();
          if ((int)_DAT_ram_3fcc5104 < iVar2) {
            if (iVar2 == 0) goto LAB_ram_4201df4c;
          }
          else if (iVar2 == 0) {
LAB_ram_4201df4c:
            _DAT_ram_3fcc5104 = 0;
          }
          else {
            _DAT_ram_3fcc5104 = iVar2 - 1;
          }
          goto LAB_ram_4201df54;
        }
        if (cVar1 != '\0') {
          return;
        }
        if (iVar4 == 0) {
          return;
        }
        iVar2 = (_DAT_ram_3fcc5104 - 1) + iVar4;
      }
      _DAT_ram_3fcc5104 = iVar2 % iVar4;
      iVar2 = _DAT_ram_3fcc5108;
    }
    else {
      if (_DAT_ram_3fcc5110 != 0) {
        return;
      }
      if (iVar2 == 3) {
        if (cVar1 != '\0') {
          return;
        }
        _DAT_ram_3fcc510c = _DAT_ram_3fcc510c + 1;
      }
      else {
        if (iVar2 != 4) {
          if (iVar2 != 1) {
            if (iVar2 != 2) {
              return;
            }
            if (cVar1 == '\0') {
              return;
            }
            FUN_ram_42018caa(0);
            return;
          }
          uVar5 = *(uint *)(
                           "HwABAJ0f/wEAAU+AAAADGAABX//gAAAPGQACT/gAAB8ZAAJP/AAAPxkAAh/+GQAIL3/wRwEAbwf/AAB/wBkAAF8B/wAA/2UAAW/8f4AA/39+AAFff4AA/nxLAABfD7+AAP59AAJfv4AA/OAyAABfA5+AAPyWAAEPGQAGHwEyAAUPGQD//////////////zRpA4AA/MABoQsUGK4LQ/zAB/wMAGM4AAAHgDwNAK4A/MAP/hwAAABwGQAvH/8ZAAQoHg8ZAARKAPEGAPzAPAccA8AOcAB4OeAPB4AAB4B4HQDxlfzAPAB/j/H//gH+O/g/x4+8/8H9wAD+AAD8wB4Af5/5//4D/z/4f+ePPP/j/8ADAwAA/MAf4H++ef/+B88/fPnnnjz78+/ABgGAAPzAD/wcPDngcAeHPDzw57w88PeDwAcBgAD8wAf+HAA54HAHwDw8AOf4POD3g8AABwAA/MAA/xwP+eBwA/g4HD/n8Dzg94PAABwAAPzAAA+cP/ngcAP+OBz/MgBBgcAAGBkAEQcZAHIA/zgc/+f8SwAREMgA0geceDngcAAPuB3g57wZAAL6APMCDxx4eeBwB4e4HeHnnjzg98cZAPEGP/8efPngeAePOB3z55884PP/wAAw4QBx/x+/+eB+A2QAIY+8GQAheADhAPMBH5/54D4D/jgcf+eHvODx/TIAsgHwB48AAB4AeAAAvwETA2QAAWUBBwIAFAd9AAcUAAECADID/4CvAAEOAAcCAB8BGQAFIQD+JgAOMgAA5Q8BcQICCwAJAgAPxQ3/UQnmAwMCAAF3AQ8ZAAEvA5/SDwgj/vg/AAgCAC8fPzYQCB//5hABP/5/gJoQBw/MEAYfP5kQAQ8XEQoPfAABP////JQRCA/GEQYfAH0AAgEiAw8CAK1QAAAAAAA="
                           + _DAT_ram_3fcc510c * 0x10 + 4);
          if (uVar5 == 1) {
            FUN_ram_4201f046();
            FUN_ram_42017154();
            iVar2 = FUN_ram_4201fce8();
            if (iVar2 == 0) {
              return;
            }
            FUN_ram_42014a46();
            return;
          }
          if (cVar1 == '\0') {
            return;
          }
          uVar3 = 2;
          _DAT_ram_3fcc5110 = uVar5;
          if (uVar5 != 2) goto LAB_ram_4201df46;
          uVar3 = 1;
          do {
            FUN_ram_42015f20(uVar3);
            uVar3 = 8;
LAB_ram_4201df3a:
            FUN_ram_40398498(uVar3);
            uVar3 = FUN_ram_42010478();
            uVar5 = extraout_a5;
LAB_ram_4201df46:
            if (uVar5 == 3) goto LAB_ram_4201df4c;
          } while (uVar5 == 4);
          if (uVar5 != 5) {
            if (uVar5 == 6) {
              _DAT_ram_3fcc5104 = FUN_ram_4201605e();
            }
            else if (uVar5 == 7) {
              iVar2 = FUN_ram_420162da();
              if (iVar2 == 0x3c) {
                _DAT_ram_3fcc5104 = 0;
              }
              else if (iVar2 == 0x78) {
                _DAT_ram_3fcc5104 = 1;
              }
              else if (iVar2 == 0xb4) {
LAB_ram_4201e056:
                _DAT_ram_3fcc5104 = 2;
              }
              else if (iVar2 == 300) {
                _DAT_ram_3fcc5104 = 3;
              }
              else {
                if (iVar2 != 600) goto LAB_ram_4201e056;
                _DAT_ram_3fcc5104 = 4;
              }
            }
            else if (uVar5 == 8) {
              uVar5 = FUN_ram_4201680e();
              _DAT_ram_3fcc5104 = (uVar5 ^ 1) & 0xff;
            }
            else {
              if (uVar5 != 9) goto LAB_ram_4201df4c;
              _DAT_ram_3fcc5104 = FUN_ram_42016760();
            }
            goto LAB_ram_4201df54;
          }
          _DAT_ram_3fcbb2cc = 0xffffffff;
          _DAT_ram_3fcbb2c4 = 0;
          _DAT_ram_3fcbb2c8 = 0;
          _DAT_ram_3fcc50ec = 0;
          (*(code *)&SUB_ram_40010488)(0x3fcbb27c,0,0x48);
          DAT_ram_3fcc50ea = 0;
          DAT_ram_3fcc50e8 = 0;
          iVar4 = FUN_ram_4201579a();
          if (iVar4 == iVar2) {
LAB_ram_4201dfdc:
            iVar2 = FUN_ram_42021a4c();
            if ((iVar2 == 4) || (iVar2 = FUN_ram_42022260(), iVar2 != 0)) {
              iVar2 = FUN_ram_4202392c(0x4200cc22,0);
              if (iVar2 == 0) {
                DAT_ram_3fcc50e9 = 1;
                goto LAB_ram_4201df54;
              }
              goto LAB_ram_4201dfd8;
            }
            _DAT_ram_3fcc50ec = 8;
          }
          else {
            aiStack_24[0] = 0;
            iVar2 = FUN_ram_420156d8(aiStack_24);
            if ((iVar2 != 0) || (0xe72 < aiStack_24[0] - 1U)) goto LAB_ram_4201dfdc;
            DAT_ram_3fcc50e8 = 1;
LAB_ram_4201dfd8:
            _DAT_ram_3fcc50ec = 7;
          }
          DAT_ram_3fcc50e9 = 0;
          goto LAB_ram_4201df54;
        }
        if (cVar1 != '\0') {
          return;
        }
        _DAT_ram_3fcc510c = _DAT_ram_3fcc510c + 0xc;
      }
      _DAT_ram_3fcc510c = _DAT_ram_3fcc510c % 0xd;
      iVar2 = _DAT_ram_3fcc510c;
      if ((_DAT_ram_3fcc5108 <= _DAT_ram_3fcc510c) &&
         (iVar2 = _DAT_ram_3fcc5108, _DAT_ram_3fcc5108 + 4 < _DAT_ram_3fcc510c)) {
        iVar2 = _DAT_ram_3fcc510c + -4;
      }
    }
LAB_ram_4201deb0:
    _DAT_ram_3fcc5108 = iVar2;
    *(undefined1 *)(gp + -0x77a) = 1;
  }
  *(undefined1 *)(gp + -0x77b) = 0;
LAB_ram_4201deba:
  FUN_ram_42018dcc();
  return;
}

