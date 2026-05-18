
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201b0a8(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 auStack_90 [48];
  int aiStack_60 [12];
  
  iVar4 = FUN_ram_4201f03c();
  if (iVar4 != 0) goto LAB_ram_4201b0c8;
  if (*(char *)(gp + -0x78e) == '\0') {
    return;
  }
  iVar4 = FUN_ram_4201ee6a();
  if (iVar4 == 0) {
    return;
  }
  if (_DAT_ram_3fcc50a0 == 4) {
    FUN_ram_4201eeb2(0);
    iVar5 = FUN_ram_4201605e();
    if (iVar5 == 0) {
      uVar8 = 0x3c0ad2fc;
    }
    else {
      uVar8 = 0x3c0ad30c;
    }
    FUN_ram_4201f3fe(8,uVar8,3);
    iVar9 = 0x14;
    do {
      iVar2 = iVar9 + 1;
      FUN_ram_4201a9f0(iVar4,iVar9,0x1e);
      iVar9 = iVar2;
    } while (iVar2 != 0xb5);
    uVar8 = FUN_ram_4201a91c(*(undefined1 *)(gp + -0x790),iVar5);
    (*(code *)&SUB_ram_400106ac)(auStack_90,0x30,0x3c0ad3ac,uVar8);
    uVar8 = FUN_ram_4201a91c(*(undefined1 *)(gp + -0x791),iVar5);
    (*(code *)&SUB_ram_400106ac)(aiStack_60,0x30,0x3c0ad3b8,uVar8);
    FUN_ram_4201ab56(iVar4,0x32,auStack_90,_DAT_ram_3fcc5090 == 0);
    FUN_ram_4201ab56(iVar4,0x56,aiStack_60,_DAT_ram_3fcc5090 == 1);
    if (iVar5 == 0) {
      uVar8 = 0x3c0ad31c;
    }
    else {
      uVar8 = 0x3c0ad32c;
    }
    FUN_ram_4201ab56(iVar4,0x7a,uVar8,_DAT_ram_3fcc5090 == 2);
    if (iVar5 == 0) {
LAB_ram_4201b4d0:
      iVar4 = 0x2c8;
    }
    else {
LAB_ram_4201b3d6:
      iVar4 = 0x2e4;
    }
    iVar4 = iVar4 + 0x3c0ad000;
    uVar8 = 3;
LAB_ram_4201b2e4:
    uVar6 = 0xaf;
LAB_ram_4201b156:
    FUN_ram_4201f3fe(uVar6,iVar4,uVar8);
  }
  else {
    if (_DAT_ram_3fcc50a0 < 5) {
      if (_DAT_ram_3fcc50a0 != 2) {
        if (_DAT_ram_3fcc50a0 != 3) goto LAB_ram_4201b116;
        FUN_ram_4201eeb2(0);
        iVar5 = FUN_ram_4201605e();
        if (iVar5 == 0) {
          uVar8 = 0x3c0ad2a0;
        }
        else {
          uVar8 = 0x3c0ad2b0;
        }
        FUN_ram_4201f3fe(8,uVar8,3);
        iVar9 = 0x14;
        do {
          iVar2 = iVar9 + 1;
          FUN_ram_4201a9f0(iVar4,iVar9,0x1e);
          iVar9 = iVar2;
        } while (iVar2 != 0xb5);
        uVar3 = _DAT_ram_3fcc5084 - 1;
        if ((int)uVar3 < 6) {
          uVar3 = uVar3 & (int)~uVar3 >> 0x1f;
        }
        else {
          uVar3 = 5;
        }
        pcVar10 = "HwABAJ0vP/8BAABPAAAAARcAAG///8AAAAcZAAJP8AAADxkAAk/4AAAfGQACH/x8AARv//4AAD/gRwEAbwH+AAB/gBkAAF8A/wAAf34AAV/4fwAA/uEAAW/+P4AA/HBLAABvBz+AAPxgGQAAoQOfgAD8x/////wZAQaHAKEBn4AA/N/////+GQEVwDwADxkAPW/P/////AN9AAAGcwAGAgABfQAPGQD/////DiIB/C4EMmDADAkABDMEEwHcBA8ZAAYUAFgEBTIA2YH4fMN8HgHj8Dw+AfAZAMjMxsN2MwBgwAxjAxgZAMn5hsDDY2GAYMAMYAAZAFGBhnDDYBkAODgA+DIA2oGGHMNgfwBgwAwOAbgZAJoGw2BgAGDADANkANiBhsZnYDGAeMAPYwM4MgDI/YZ8P2AfADBwBj4BZAANAgAE4QANAgAPGQD/VlDAAAAAA1MJCiYCDxkAIMl4wPD4eD8AHj8H48H0AcnMwZmMzGcAMzmM5mMmAsmGww2BhsMAYbDYbDajAn+AwwzhhsM+GQACnDn8wwB/MNhv5jIAmA2AwwBgMNhsBhkA2ADG2ZmMxmcAMbDM5jN9ANkAfHDw+Hw/AB8wx+PhrwAMAgAPigL/VgsCAAt3ARUwMwoPGQAWBVEABjIAkgH7DHh8/eDx+BwABhkAnAM7DMzGMGGZzBkAnwYbDYbAMGMNhhkAAR9wGQAEL/wcGQAEL4AGGQABoQM5nMbGMHmZhjhlAAaWAI0B+Px8fBww8RkAAdIFBgIABjIADxkAIAoCAAdLAAoCAA8ZAP//GxE+OwLDYAAKcACACAABEAAEPwIRIBkATCAACiAZAPIcZQGRM04jEAAjgeY5kQPcYBzIgZ+AAPzAPJYCSgqpJIAAJACJSFEBEpAkKBkA8wQglAPEOqkngAAjAIlJygES8CTlZADzA5QCCkqpJAAAIICJSkoBEoAlJRkA8QRkAZE6rjMQAHcAZjnEANJgHOIBZAABlQARCAYAMAAABGAQHwIZAAAQGHkQFwwZAAYCABUg/AhROAgGYBFNAGVwDABjihAZAEIQCAIgGQBXIBAAJEoZAPcAHmIgPcZoDjKgIDzGIEAIMgDYkiARKVQJSqAgESkggBkAQvIgES8ZADjvIQAZANaCIBEoVAlJQCARCCAAZADnOAZjMA0mVAkxQHAQxjEZAAbDAAECAAbIAAEPAAoCAA/6AAIAjREBGQAPTxABXwMfgAD+BBACLx+ANhAHD2gQAi/8f5oQCBQ/LwsIAgAvAf7+EAgPMBEGHw9JEQIf+JQRCAGtEA0CAF3AAAAAfxYAAvgRDwIAr1AAAAAAAA=="
                  + uVar3 * 0xc + 0xa4;
        iVar9 = 0x28;
        do {
          if ((int)uVar3 < 7) {
            if (iVar5 == 0) {
              uVar8 = *(undefined4 *)pcVar10;
            }
            else {
              uVar8 = *(undefined4 *)(pcVar10 + 4);
            }
          }
          else if (uVar3 == 7) {
            if (iVar5 == 0) {
              uVar8 = 0x3c0ad234;
            }
            else {
              uVar8 = 0x3c0ad240;
            }
          }
          else if (iVar5 == 0) {
            uVar8 = 0x3c0ad1c4;
          }
          else {
            uVar8 = 0x3c0ad2bc;
          }
          iVar2 = iVar9 + 0x20;
          FUN_ram_4201ab56(iVar4,iVar9,uVar8,_DAT_ram_3fcc5084 == uVar3);
          uVar3 = uVar3 + 1;
          pcVar10 = pcVar10 + 0xc;
          iVar9 = iVar2;
        } while (iVar2 != 0xa8);
        goto LAB_ram_4201b3d2;
      }
      FUN_ram_4201eeb2(1);
      iVar5 = FUN_ram_4201605e();
      if (DAT_ram_3fcc5094 < 7) {
        iVar9 = (uint)DAT_ram_3fcc5094 * 0xc;
        if (iVar5 == 0) {
          uVar8 = *(undefined4 *)
                   (
                   "HwABAJ0vP/8BAABPAAAAARcAAG///8AAAAcZAAJP8AAADxkAAk/4AAAfGQACH/x8AARv//4AAD/gRwEAbwH+AAB/gBkAAF8A/wAAf34AAV/4fwAA/uEAAW/+P4AA/HBLAABvBz+AAPxgGQAAoQOfgAD8x/////wZAQaHAKEBn4AA/N/////+GQEVwDwADxkAPW/P/////AN9AAAGcwAGAgABfQAPGQD/////DiIB/C4EMmDADAkABDMEEwHcBA8ZAAYUAFgEBTIA2YH4fMN8HgHj8Dw+AfAZAMjMxsN2MwBgwAxjAxgZAMn5hsDDY2GAYMAMYAAZAFGBhnDDYBkAODgA+DIA2oGGHMNgfwBgwAwOAbgZAJoGw2BgAGDADANkANiBhsZnYDGAeMAPYwM4MgDI/YZ8P2AfADBwBj4BZAANAgAE4QANAgAPGQD/VlDAAAAAA1MJCiYCDxkAIMl4wPD4eD8AHj8H48H0AcnMwZmMzGcAMzmM5mMmAsmGww2BhsMAYbDYbDajAn+AwwzhhsM+GQACnDn8wwB/MNhv5jIAmA2AwwBgMNhsBhkA2ADG2ZmMxmcAMbDM5jN9ANkAfHDw+Hw/AB8wx+PhrwAMAgAPigL/VgsCAAt3ARUwMwoPGQAWBVEABjIAkgH7DHh8/eDx+BwABhkAnAM7DMzGMGGZzBkAnwYbDYbAMGMNhhkAAR9wGQAEL/wcGQAEL4AGGQABoQM5nMbGMHmZhjhlAAaWAI0B+Px8fBww8RkAAdIFBgIABjIADxkAIAoCAAdLAAoCAA8ZAP//GxE+OwLDYAAKcACACAABEAAEPwIRIBkATCAACiAZAPIcZQGRM04jEAAjgeY5kQPcYBzIgZ+AAPzAPJYCSgqpJIAAJACJSFEBEpAkKBkA8wQglAPEOqkngAAjAIlJygES8CTlZADzA5QCCkqpJAAAIICJSkoBEoAlJRkA8QRkAZE6rjMQAHcAZjnEANJgHOIBZAABlQARCAYAMAAABGAQHwIZAAAQGHkQFwwZAAYCABUg/AhROAgGYBFNAGVwDABjihAZAEIQCAIgGQBXIBAAJEoZAPcAHmIgPcZoDjKgIDzGIEAIMgDYkiARKVQJSqAgESkggBkAQvIgES8ZADjvIQAZANaCIBEoVAlJQCARCCAAZADnOAZjMA0mVAkxQHAQxjEZAAbDAAECAAbIAAEPAAoCAA/6AAIAjREBGQAPTxABXwMfgAD+BBACLx+ANhAHD2gQAi/8f5oQCBQ/LwsIAgAvAf7+EAgPMBEGHw9JEQIf+JQRCAGtEA0CAF3AAAAAfxYAAvgRDwIAr1AAAAAAAA=="
                   + iVar9 + 0xa4);
        }
        else {
          uVar8 = *(undefined4 *)
                   (
                   "HwABAJ0vP/8BAABPAAAAARcAAG///8AAAAcZAAJP8AAADxkAAk/4AAAfGQACH/x8AARv//4AAD/gRwEAbwH+AAB/gBkAAF8A/wAAf34AAV/4fwAA/uEAAW/+P4AA/HBLAABvBz+AAPxgGQAAoQOfgAD8x/////wZAQaHAKEBn4AA/N/////+GQEVwDwADxkAPW/P/////AN9AAAGcwAGAgABfQAPGQD/////DiIB/C4EMmDADAkABDMEEwHcBA8ZAAYUAFgEBTIA2YH4fMN8HgHj8Dw+AfAZAMjMxsN2MwBgwAxjAxgZAMn5hsDDY2GAYMAMYAAZAFGBhnDDYBkAODgA+DIA2oGGHMNgfwBgwAwOAbgZAJoGw2BgAGDADANkANiBhsZnYDGAeMAPYwM4MgDI/YZ8P2AfADBwBj4BZAANAgAE4QANAgAPGQD/VlDAAAAAA1MJCiYCDxkAIMl4wPD4eD8AHj8H48H0AcnMwZmMzGcAMzmM5mMmAsmGww2BhsMAYbDYbDajAn+AwwzhhsM+GQACnDn8wwB/MNhv5jIAmA2AwwBgMNhsBhkA2ADG2ZmMxmcAMbDM5jN9ANkAfHDw+Hw/AB8wx+PhrwAMAgAPigL/VgsCAAt3ARUwMwoPGQAWBVEABjIAkgH7DHh8/eDx+BwABhkAnAM7DMzGMGGZzBkAnwYbDYbAMGMNhhkAAR9wGQAEL/wcGQAEL4AGGQABoQM5nMbGMHmZhjhlAAaWAI0B+Px8fBww8RkAAdIFBgIABjIADxkAIAoCAAdLAAoCAA8ZAP//GxE+OwLDYAAKcACACAABEAAEPwIRIBkATCAACiAZAPIcZQGRM04jEAAjgeY5kQPcYBzIgZ+AAPzAPJYCSgqpJIAAJACJSFEBEpAkKBkA8wQglAPEOqkngAAjAIlJygES8CTlZADzA5QCCkqpJAAAIICJSkoBEoAlJRkA8QRkAZE6rjMQAHcAZjnEANJgHOIBZAABlQARCAYAMAAABGAQHwIZAAAQGHkQFwwZAAYCABUg/AhROAgGYBFNAGVwDABjihAZAEIQCAIgGQBXIBAAJEoZAPcAHmIgPcZoDjKgIDzGIEAIMgDYkiARKVQJSqAgESkggBkAQvIgES8ZADjvIQAZANaCIBEoVAlJQCARCCAAZADnOAZjMA0mVAkxQHAQxjEZAAbDAAECAAbIAAEPAAoCAA/6AAIAjREBGQAPTxABXwMfgAD+BBACLx+ANhAHD2gQAi/8f5oQCBQ/LwsIAgAvAf7+EAgPMBEGHw9JEQIf+JQRCAGtEA0CAF3AAAAAfxYAAvgRDwIAr1AAAAAAAA=="
                   + iVar9 + 0xa8);
        }
      }
      else if (iVar5 == 0) {
        uVar8 = 0x3c0ad234;
      }
      else {
        uVar8 = 0x3c0ad240;
      }
      FUN_ram_4201aa26(iVar4,0x1c,uVar8);
      if (iVar5 == 0) {
        uVar6 = 0x3c0ad248;
        uVar8 = 0x3c0ad254;
      }
      else {
        uVar6 = 0x3c0ad260;
        uVar8 = 0x3c0ad268;
      }
      uVar7 = FUN_ram_4201a91c(*(undefined1 *)(gp + -0x791),iVar5);
      (*(code *)&SUB_ram_400106ac)(aiStack_60,0x30,0x3c0ad3a4,uVar6,uVar7);
      FUN_ram_4201f3fe(0x4b,aiStack_60,0);
      uVar6 = FUN_ram_4201a91c(*(undefined1 *)(gp + -0x790),iVar5);
      (*(code *)&SUB_ram_400106ac)(aiStack_60,0x30,0x3c0ad3a4,uVar8,uVar6);
      FUN_ram_4201f3fe(0x69,aiStack_60,0);
      if (iVar5 == 0) {
        iVar4 = 0x3c0ad270;
      }
      else {
        iVar4 = 0x3c0ad28c;
      }
      uVar8 = 0;
      goto LAB_ram_4201b2e4;
    }
    if (_DAT_ram_3fcc50a0 == 5) {
      FUN_ram_4201eeb2(0);
      iVar5 = FUN_ram_4201605e();
      if (_DAT_ram_3fcc5088 == 0) {
        if (iVar5 == 0) {
          uVar8 = 0x3c0ad338;
        }
        else {
          uVar8 = 0x3c0ad34c;
        }
      }
      else if (iVar5 == 0) {
        uVar8 = 0x3c0ad35c;
      }
      else {
        uVar8 = 0x3c0ad370;
      }
      FUN_ram_4201f3fe(8,uVar8,3);
      iVar9 = 0x14;
      do {
        iVar2 = iVar9 + 1;
        FUN_ram_4201a9f0(iVar4,iVar9,0x1e);
        iVar9 = iVar2;
      } while (iVar2 != 0xb5);
      aiStack_60[0] = 0;
      iVar9 = FUN_ram_4201745c(aiStack_60);
      uVar3 = _DAT_ram_3fcc508c - 1 & (int)-_DAT_ram_3fcc508c >> 0x1f;
      if (aiStack_60[0] < (int)(uVar3 + 4)) {
        uVar3 = aiStack_60[0] - 4;
      }
      uVar3 = uVar3 & (int)~uVar3 >> 0x1f;
      puVar11 = (undefined4 *)(iVar9 + uVar3 * 0x10);
      iVar9 = 0x28;
      do {
        if (aiStack_60[0] <= (int)uVar3) break;
        if (iVar5 == 0) {
          uVar8 = *puVar11;
        }
        else {
          uVar8 = puVar11[1];
        }
        iVar2 = iVar9 + 0x20;
        FUN_ram_4201ab56(iVar4,iVar9,uVar8,_DAT_ram_3fcc508c == uVar3);
        uVar3 = uVar3 + 1;
        puVar11 = puVar11 + 4;
        iVar9 = iVar2;
      } while (iVar2 != 0xa8);
LAB_ram_4201b3d2:
      if (iVar5 == 0) goto LAB_ram_4201b4d0;
      goto LAB_ram_4201b3d6;
    }
    if (_DAT_ram_3fcc50a0 == 6) {
LAB_ram_4201b116:
      FUN_ram_4201eeb2(1);
      iVar5 = FUN_ram_4201605e();
      if (_DAT_ram_3fcc50a0 == 0) {
        if (iVar5 == 0) {
          uVar8 = 0x3c0ad194;
        }
        else {
          uVar8 = 0x3c0ad1a8;
        }
      }
      else {
        uVar8 = 0x3fcbb20c;
      }
      FUN_ram_4201aa26(iVar4,100,uVar8);
      if (_DAT_ram_3fcc50a0 == 1) {
        if (iVar5 == 0) {
          iVar4 = 0x3c0ad1ec;
        }
        else {
          iVar4 = 0x3c0ad208;
        }
      }
      else if (iVar5 == 0) {
        iVar4 = 0x3c0ad214;
      }
      else {
        iVar4 = 0x3c0ad224;
      }
      uVar8 = 0;
      uVar6 = 0xb4;
      goto LAB_ram_4201b156;
    }
  }
  if (*(char *)(gp + -0x78f) == '\0') {
    FUN_ram_4201f108(0,199);
  }
  else {
    FUN_ram_4201ef22();
  }
  cVar1 = DAT_ram_3fcc509c;
  *(undefined1 *)(gp + -0x78e) = 0;
  *(undefined1 *)(gp + -0x78f) = 0;
  if ((cVar1 != '\0') && (_DAT_ram_3fcc5098 == 0)) {
    DAT_ram_3fcc509c = '\0';
    iVar4 = FUN_ram_40398e0e(0x4200a952,0x3c0ad3c0,0x1400,0,5,&DAT_ram_3fcc5098,0x7fffffff);
    if (iVar4 != 1) {
      _DAT_ram_3fcc50a0 = 6;
      iVar4 = FUN_ram_4201605e();
      if (iVar4 == 0) {
        uVar8 = 0x3c0ad37c;
      }
      else {
        uVar8 = 0x3c0ad390;
      }
      FUN_ram_4039c61e(0x3fcbb20c,uVar8,0x30);
      *(undefined1 *)(gp + -0x78e) = 1;
      *(undefined1 *)(gp + -0x78f) = 1;
LAB_ram_4201b0c8:
      FUN_ram_42018dcc();
      return;
    }
  }
  return;
}

