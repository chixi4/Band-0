
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201ad14(int *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int aiStack_24 [3];
  
  if (*param_1 != 1) {
    return;
  }
  iVar3 = param_1[1];
  cVar2 = (char)param_1[2];
  if (_DAT_ram_3fcc50a0 != 4) {
    if (_DAT_ram_3fcc50a0 < 5) {
      if (_DAT_ram_3fcc50a0 == 3) {
        if (iVar3 == 3) {
          if (cVar2 != '\0') {
            return;
          }
          iVar3 = _DAT_ram_3fcc5084 + 1;
        }
        else {
          if (iVar3 != 4) {
            if (iVar3 != 1) {
              if (iVar3 != 2) {
                return;
              }
              if (cVar2 == '\0') {
                return;
              }
              goto LAB_ram_4201af00;
            }
            if (cVar2 == '\0') {
              return;
            }
            if ((int)_DAT_ram_3fcc5084 < 7) {
              DAT_ram_3fcc5094 = (byte)_DAT_ram_3fcc5084;
              cVar2 = "HwABAJ0vP/8BAABPAAAAARcAAG///8AAAAcZAAJP8AAADxkAAk/4AAAfGQACH/x8AARv//4AAD/gRwEAbwH+AAB/gBkAAF8A/wAAf34AAV/4fwAA/uEAAW/+P4AA/HBLAABvBz+AAPxgGQAAoQOfgAD8x/////wZAQaHAKEBn4AA/N/////+GQEVwDwADxkAPW/P/////AN9AAAGcwAGAgABfQAPGQD/////DiIB/C4EMmDADAkABDMEEwHcBA8ZAAYUAFgEBTIA2YH4fMN8HgHj8Dw+AfAZAMjMxsN2MwBgwAxjAxgZAMn5hsDDY2GAYMAMYAAZAFGBhnDDYBkAODgA+DIA2oGGHMNgfwBgwAwOAbgZAJoGw2BgAGDADANkANiBhsZnYDGAeMAPYwM4MgDI/YZ8P2AfADBwBj4BZAANAgAE4QANAgAPGQD/VlDAAAAAA1MJCiYCDxkAIMl4wPD4eD8AHj8H48H0AcnMwZmMzGcAMzmM5mMmAsmGww2BhsMAYbDYbDajAn+AwwzhhsM+GQACnDn8wwB/MNhv5jIAmA2AwwBgMNhsBhkA2ADG2ZmMxmcAMbDM5jN9ANkAfHDw+Hw/AB8wx+PhrwAMAgAPigL/VgsCAAt3ARUwMwoPGQAWBVEABjIAkgH7DHh8/eDx+BwABhkAnAM7DMzGMGGZzBkAnwYbDYbAMGMNhhkAAR9wGQAEL/wcGQAEL4AGGQABoQM5nMbGMHmZhjhlAAaWAI0B+Px8fBww8RkAAdIFBgIABjIADxkAIAoCAAdLAAoCAA8ZAP//GxE+OwLDYAAKcACACAABEAAEPwIRIBkATCAACiAZAPIcZQGRM04jEAAjgeY5kQPcYBzIgZ+AAPzAPJYCSgqpJIAAJACJSFEBEpAkKBkA8wQglAPEOqkngAAjAIlJygES8CTlZADzA5QCCkqpJAAAIICJSkoBEoAlJRkA8QRkAZE6rjMQAHcAZjnEANJgHOIBZAABlQARCAYAMAAABGAQHwIZAAAQGHkQFwwZAAYCABUg/AhROAgGYBFNAGVwDABjihAZAEIQCAIgGQBXIBAAJEoZAPcAHmIgPcZoDjKgIDzGIEAIMgDYkiARKVQJSqAgESkggBkAQvIgES8ZADjvIQAZANaCIBEoVAlJQCARCCAAZADnOAZjMA0mVAkxQHAQxjEZAAbDAAECAAbIAAEPAAoCAA/6AAIAjREBGQAPTxABXwMfgAD+BBACLx+ANhAHD2gQAi/8f5oQCBQ/LwsIAgAvAf7+EAgPMBEGHw9JEQIf+JQRCAGtEA0CAF3AAAAAfxYAAvgRDwIAr1AAAAAAAA=="
                      [_DAT_ram_3fcc5084 * 0xc + 0xad];
              *(char *)(gp + -0x791) =
                   "HwABAJ0vP/8BAABPAAAAARcAAG///8AAAAcZAAJP8AAADxkAAk/4AAAfGQACH/x8AARv//4AAD/gRwEAbwH+AAB/gBkAAF8A/wAAf34AAV/4fwAA/uEAAW/+P4AA/HBLAABvBz+AAPxgGQAAoQOfgAD8x/////wZAQaHAKEBn4AA/N/////+GQEVwDwADxkAPW/P/////AN9AAAGcwAGAgABfQAPGQD/////DiIB/C4EMmDADAkABDMEEwHcBA8ZAAYUAFgEBTIA2YH4fMN8HgHj8Dw+AfAZAMjMxsN2MwBgwAxjAxgZAMn5hsDDY2GAYMAMYAAZAFGBhnDDYBkAODgA+DIA2oGGHMNgfwBgwAwOAbgZAJoGw2BgAGDADANkANiBhsZnYDGAeMAPYwM4MgDI/YZ8P2AfADBwBj4BZAANAgAE4QANAgAPGQD/VlDAAAAAA1MJCiYCDxkAIMl4wPD4eD8AHj8H48H0AcnMwZmMzGcAMzmM5mMmAsmGww2BhsMAYbDYbDajAn+AwwzhhsM+GQACnDn8wwB/MNhv5jIAmA2AwwBgMNhsBhkA2ADG2ZmMxmcAMbDM5jN9ANkAfHDw+Hw/AB8wx+PhrwAMAgAPigL/VgsCAAt3ARUwMwoPGQAWBVEABjIAkgH7DHh8/eDx+BwABhkAnAM7DMzGMGGZzBkAnwYbDYbAMGMNhhkAAR9wGQAEL/wcGQAEL4AGGQABoQM5nMbGMHmZhjhlAAaWAI0B+Px8fBww8RkAAdIFBgIABjIADxkAIAoCAAdLAAoCAA8ZAP//GxE+OwLDYAAKcACACAABEAAEPwIRIBkATCAACiAZAPIcZQGRM04jEAAjgeY5kQPcYBzIgZ+AAPzAPJYCSgqpJIAAJACJSFEBEpAkKBkA8wQglAPEOqkngAAjAIlJygES8CTlZADzA5QCCkqpJAAAIICJSkoBEoAlJRkA8QRkAZE6rjMQAHcAZjnEANJgHOIBZAABlQARCAYAMAAABGAQHwIZAAAQGHkQFwwZAAYCABUg/AhROAgGYBFNAGVwDABjihAZAEIQCAIgGQBXIBAAJEoZAPcAHmIgPcZoDjKgIDzGIEAIMgDYkiARKVQJSqAgESkggBkAQvIgES8ZADjvIQAZANaCIBEoVAlJQCARCCAAZADnOAZjMA0mVAkxQHAQxjEZAAbDAAECAAbIAAEPAAoCAA/6AAIAjREBGQAPTxABXwMfgAD+BBACLx+ANhAHD2gQAi/8f5oQCBQ/LwsIAgAvAf7+EAgPMBEGHw9JEQIf+JQRCAGtEA0CAF3AAAAAfxYAAvgRDwIAr1AAAAAAAA=="
                   [_DAT_ram_3fcc5084 * 0xc + 0xac];
              *(char *)(gp + -0x790) = cVar2;
              FUN_ram_42016566();
              FUN_ram_420164bc(*(undefined1 *)(gp + -0x790));
              FUN_ram_42016610(DAT_ram_3fcc5094);
              iVar3 = FUN_ram_420172b6();
              _DAT_ram_3fcc50a0 = iVar3 + 1;
            }
            else if (_DAT_ram_3fcc5084 == 7) {
              _DAT_ram_3fcc5090 = 0;
              _DAT_ram_3fcc50a0 = 4;
            }
            else {
              FUN_ram_420173d2();
              iVar3 = FUN_ram_4201605e();
              if (iVar3 == 0) {
                uVar5 = 0x3c0ad1b8;
              }
              else {
                uVar5 = 0x3c0ad1d4;
              }
              FUN_ram_4039c61e(0x3fcbb20c,uVar5,0x30);
              _DAT_ram_3fcc50a0 = 1;
            }
            goto LAB_ram_4201adb6;
          }
          if (cVar2 != '\0') {
            return;
          }
          iVar3 = _DAT_ram_3fcc5084 + 8;
        }
        _DAT_ram_3fcc5084 = iVar3 % 9;
        goto LAB_ram_4201ae34;
      }
      if (_DAT_ram_3fcc50a0 != 0) {
        if (iVar3 == 2) goto LAB_ram_4201ad50;
        if (iVar3 != 1) {
          if (iVar3 == 3) {
            if (cVar2 != '\0') {
              return;
            }
            if (_DAT_ram_3fcc50a0 != 2) {
              return;
            }
            aiStack_24[0] = 0;
            iVar3 = FUN_ram_4201745c(aiStack_24);
            bVar1 = *(byte *)(gp + -0x790);
          }
          else {
            if (iVar3 != 4) {
              return;
            }
            if (cVar2 != '\0') {
              return;
            }
            if (_DAT_ram_3fcc50a0 != 2) {
              return;
            }
            aiStack_24[0] = 0;
            iVar3 = FUN_ram_4201745c(aiStack_24);
            bVar1 = *(byte *)(gp + -0x791);
          }
          if (aiStack_24[0] <= (int)(uint)bVar1) {
            return;
          }
          FUN_ram_420172c6(iVar3 + (uint)bVar1 * 0x10 + 8);
          return;
        }
        if (cVar2 == '\0') {
          return;
        }
        _DAT_ram_3fcc5084 = (uint)DAT_ram_3fcc5094;
        if (7 < _DAT_ram_3fcc5084) {
          _DAT_ram_3fcc5084 = 7;
        }
        _DAT_ram_3fcc50a0 = 3;
LAB_ram_4201adb6:
        *(undefined1 *)(gp + -0x78e) = 1;
        *(undefined1 *)(gp + -0x78f) = 1;
        goto LAB_ram_4201adc0;
      }
    }
    else {
      if (_DAT_ram_3fcc50a0 == 5) {
        aiStack_24[0] = 0;
        FUN_ram_4201745c(aiStack_24);
        if (iVar3 == 3) {
          if (cVar2 != '\0') {
            return;
          }
          iVar3 = _DAT_ram_3fcc508c + 1;
        }
        else {
          if (iVar3 != 4) {
            if (iVar3 == 1) {
              if (cVar2 == '\0') {
                return;
              }
              if (_DAT_ram_3fcc5088 == 0) {
                *(undefined1 *)(gp + -0x790) = DAT_ram_3fcc508c;
              }
              else {
                *(undefined1 *)(gp + -0x791) = DAT_ram_3fcc508c;
              }
              DAT_ram_3fcc5094 = 0xff;
              FUN_ram_420164bc(*(undefined1 *)(gp + -0x790));
              FUN_ram_42016566(*(undefined1 *)(gp + -0x791));
              FUN_ram_42016610(DAT_ram_3fcc5094);
              _DAT_ram_3fcc50a0 = 4;
              *(undefined1 *)(gp + -0x78e) = 1;
              *(undefined1 *)(gp + -0x78f) = 1;
            }
            else {
              if (iVar3 != 2) {
                return;
              }
              if (cVar2 == '\0') {
                return;
              }
              *(undefined1 *)(gp + -0x78e) = 1;
              _DAT_ram_3fcc50a0 = 4;
              *(undefined1 *)(gp + -0x78f) = 1;
            }
            goto LAB_ram_4201b01a;
          }
          if (cVar2 != '\0') {
            return;
          }
          iVar3 = _DAT_ram_3fcc508c + aiStack_24[0] + -1;
        }
        _DAT_ram_3fcc508c = iVar3 % aiStack_24[0];
        *(undefined1 *)(gp + -0x78e) = 1;
        *(undefined1 *)(gp + -0x78f) = 0;
LAB_ram_4201b01a:
        FUN_ram_42018dcc();
        return;
      }
      if (_DAT_ram_3fcc50a0 != 6) {
        return;
      }
    }
    if (iVar3 != 2) {
      return;
    }
LAB_ram_4201ad50:
    if (cVar2 == '\0') {
      return;
    }
    FUN_ram_42018caa(0);
    return;
  }
  if (iVar3 == 3) {
    if (cVar2 != '\0') {
      return;
    }
    _DAT_ram_3fcc5090 = _DAT_ram_3fcc5090 + 1;
  }
  else {
    if (iVar3 != 4) {
      if (iVar3 == 1) {
        if (cVar2 == '\0') {
          return;
        }
        if (_DAT_ram_3fcc5090 == 2) {
          FUN_ram_420164bc(*(undefined1 *)(gp + -0x790));
          FUN_ram_42016566(*(undefined1 *)(gp + -0x791));
          FUN_ram_42016610(0xff);
          DAT_ram_3fcc5094 = 0xff;
          iVar3 = FUN_ram_420172b6();
          _DAT_ram_3fcc50a0 = iVar3 + 1;
          *(undefined1 *)(gp + -0x78e) = 1;
          *(undefined1 *)(gp + -0x78f) = 1;
        }
        else {
          _DAT_ram_3fcc5088 = _DAT_ram_3fcc5090;
          if (_DAT_ram_3fcc5090 == 0) {
            bVar1 = *(byte *)(gp + -0x790);
          }
          else {
            bVar1 = *(byte *)(gp + -0x791);
          }
          _DAT_ram_3fcc508c = (uint)bVar1;
          _DAT_ram_3fcc50a0 = 5;
          *(undefined1 *)(gp + -0x78e) = 1;
          *(undefined1 *)(gp + -0x78f) = 1;
        }
        goto LAB_ram_4201adc0;
      }
      if (iVar3 != 2) {
        return;
      }
      if (cVar2 == '\0') {
        return;
      }
      uVar4 = FUN_ram_42016516();
      *(undefined1 *)(gp + -0x790) = uVar4;
      uVar4 = FUN_ram_420165c0();
      *(undefined1 *)(gp + -0x791) = uVar4;
      DAT_ram_3fcc5094 = FUN_ram_4201666a();
LAB_ram_4201af00:
      iVar3 = FUN_ram_420172b6();
      _DAT_ram_3fcc50a0 = iVar3 + 1;
      *(undefined1 *)(gp + -0x78e) = 1;
      *(undefined1 *)(gp + -0x78f) = 1;
      goto LAB_ram_4201adc0;
    }
    if (cVar2 != '\0') {
      return;
    }
    _DAT_ram_3fcc5090 = _DAT_ram_3fcc5090 + 2;
  }
  _DAT_ram_3fcc5090 = _DAT_ram_3fcc5090 % 3;
LAB_ram_4201ae34:
  *(undefined1 *)(gp + -0x78e) = 1;
  *(undefined1 *)(gp + -0x78f) = 0;
LAB_ram_4201adc0:
  FUN_ram_42018dcc();
  return;
}

