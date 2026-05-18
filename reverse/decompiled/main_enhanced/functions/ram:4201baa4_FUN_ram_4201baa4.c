
void FUN_ram_4201baa4(void)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_100 [12];
  byte local_f4 [16];
  undefined1 auStack_e4 [4];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined1 auStack_c0 [64];
  byte local_80 [76];
  
  iVar3 = FUN_ram_4201f03c();
  if (iVar3 != 0) {
    FUN_ram_42018dcc();
    return;
  }
  if (*(int *)(gp + -0x784) == 0) {
    FUN_ram_4201eeb2(1);
    iVar3 = FUN_ram_4201ee6a();
    if (iVar3 != 0) {
      iVar3 = FUN_ram_4201605e();
      if (iVar3 == 0) {
        FUN_ram_4039c11e(local_80,&DAT_ram_3c0dcd14,0x10);
        FUN_ram_4201b64c(local_80);
        uVar5 = 0x3c0ad484;
      }
      else {
        FUN_ram_4039c11e(local_80,&DAT_ram_3c0dcd24);
        FUN_ram_4201b64c(local_80);
        uVar5 = 0x3c0ad498;
      }
      FUN_ram_4201f3fe(0xb4,uVar5,0);
    }
  }
  else {
    if (*(int *)(gp + -0x784) == 1) {
      FUN_ram_4201eeb2(1);
      iVar3 = FUN_ram_4201ee6a();
      if (iVar3 != 0) {
        iVar3 = FUN_ram_4201605e();
        if (iVar3 == 0) {
          FUN_ram_4039c11e(local_80,&DAT_ram_3c0dcd34);
          FUN_ram_4201b64c(local_80);
          uVar5 = 0x3c0ad4ac;
        }
        else {
          FUN_ram_4039c11e(local_80,&DAT_ram_3c0dcd44,0x10);
          FUN_ram_4201b64c(local_80);
          uVar5 = 0x3c0ad4c0;
        }
        FUN_ram_4201f3fe(0xb4,uVar5,0);
      }
    }
    else {
      FUN_ram_4201eeb2();
      iVar3 = FUN_ram_4201ee6a();
      if (iVar3 != 0) {
        FUN_ram_420b07a6(auStack_100);
        FUN_ram_420b0592(auStack_100,auStack_e4);
        iVar3 = FUN_ram_4201605e();
        FUN_ram_4201b5f8(0);
        if (iVar3 == 0) {
          (*(code *)&SUB_ram_400106ac)(auStack_c0,0x40,0x3c0ad4d0,iStack_d0 + 0x76c,iStack_d4 + 1);
        }
        else {
          (*(code *)&SUB_ram_400106ac)
                    (auStack_c0,0x40,0x3c0ad4dc,
                     *(undefined4 *)
                      (
                      "HwABAJ0vP/8BAABPAAAAARcAAG///8AAAAcZAAJP8AAADxkAAk/4AAAfGQACH/x8AARv//4AAD/gRwEAbwH+AAB/gBkAAF8A/wAAf34AAV/4fwAA/uEAAW/+P4AA/HBLAABvBz+AAPxgGQAAoQOfgAD8x/////wZAQaHAKEBn4AA/N/////+GQEVwDwADxkAPW/P/////AN9AAAGcwAGAgABfQAPGQD/////DiIB/C4EMmDADAkABDMEEwHcBA8ZAAYUAFgEBTIA2YH4fMN8HgHj8Dw+AfAZAMjMxsN2MwBgwAxjAxgZAMn5hsDDY2GAYMAMYAAZAFGBhnDDYBkAODgA+DIA2oGGHMNgfwBgwAwOAbgZAJoGw2BgAGDADANkANiBhsZnYDGAeMAPYwM4MgDI/YZ8P2AfADBwBj4BZAANAgAE4QANAgAPGQD/VlDAAAAAA1MJCiYCDxkAIMl4wPD4eD8AHj8H48H0AcnMwZmMzGcAMzmM5mMmAsmGww2BhsMAYbDYbDajAn+AwwzhhsM+GQACnDn8wwB/MNhv5jIAmA2AwwBgMNhsBhkA2ADG2ZmMxmcAMbDM5jN9ANkAfHDw+Hw/AB8wx+PhrwAMAgAPigL/VgsCAAt3ARUwMwoPGQAWBVEABjIAkgH7DHh8/eDx+BwABhkAnAM7DMzGMGGZzBkAnwYbDYbAMGMNhhkAAR9wGQAEL/wcGQAEL4AGGQABoQM5nMbGMHmZhjhlAAaWAI0B+Px8fBww8RkAAdIFBgIABjIADxkAIAoCAAdLAAoCAA8ZAP//GxE+OwLDYAAKcACACAABEAAEPwIRIBkATCAACiAZAPIcZQGRM04jEAAjgeY5kQPcYBzIgZ+AAPzAPJYCSgqpJIAAJACJSFEBEpAkKBkA8wQglAPEOqkngAAjAIlJygES8CTlZADzA5QCCkqpJAAAIICJSkoBEoAlJRkA8QRkAZE6rjMQAHcAZjnEANJgHOIBZAABlQARCAYAMAAABGAQHwIZAAAQGHkQFwwZAAYCABUg/AhROAgGYBFNAGVwDABjihAZAEIQCAIgGQBXIBAAJEoZAPcAHmIgPcZoDjKgIDzGIEAIMgDYkiARKVQJSqAgESkggBkAQvIgES8ZADjvIQAZANaCIBEoVAlJQCARCCAAZADnOAZjMA0mVAkxQHAQxjEZAAbDAAECAAbIAAEPAAoCAA/6AAIAjREBGQAPTxABXwMfgAD+BBACLx+ANhAHD2gQAi/8f5oQCBQ/LwsIAgAvAf7+EAgPMBEGHw9JEQIf+JQRCAGtEA0CAF3AAAAAfxYAAvgRDwIAr1AAAAAAAA=="
                      + iStack_d4 * 4 + 0x130),uStack_d8);
        }
        FUN_ram_4201b730(8,auStack_c0);
        (*(code *)&SUB_ram_400106ac)(local_f4,0x10,0x3c0ad4e8,uStack_dc,uStack_e0);
        pbVar1 = local_f4;
        iVar6 = 0;
        while( true ) {
          uVar12 = (ushort)*pbVar1;
          if (uVar12 == 0) break;
          if ((char)*pbVar1 < '\0') {
            if ((uVar12 & 0xe0) == 0xc0) {
              uVar12 = (uVar12 & 0x1f) << 6 | pbVar1[1] & 0x3f;
              pbVar1 = pbVar1 + 1;
              goto LAB_ram_4201be3e;
            }
            if ((uVar12 & 0xf0) == 0xe0) {
              uVar12 = uVar12 << 0xc | pbVar1[2] & 0x3f | (pbVar1[1] & 0x3f) << 6;
              pbVar1 = pbVar1 + 2;
              goto LAB_ram_4201be3e;
            }
          }
          else {
LAB_ram_4201be3e:
            puVar7 = (ushort *)0x3c0db684;
            iVar14 = 0;
            do {
              if (*puVar7 == uVar12) {
                uVar10 = (uint)(byte)"HwABAJ0f/wEAAU+AAAADGAABX//gAAAPGQACT/gAAB8ZAAJP/AAAPxkAAh/+GQAIL3/wRwEAbwf/AAB/wBkAAF8B/wAA/2UAAW/8f4AA/39+AAFff4AA/nxLAABfD7+AAP59AAKRv4AA/O/////8GQHxEIB/////4B/////7n4AA/N/////+B//////A//////CNAA8ZAAUf/RkAIx/PfQAAX/mfgAD8EwECDxkA////xuYIAEEARkBEEABAQCAAQOgD9gABDEBjgDZgZ/oQYG/w/+AZAPcAAMzgYwCW0MYz+GBhgADAGQDn7MDGEf/4h/MwYMGQAYAZANBNgIf5oDEmMzf4n/gDzwYETATXDiHNMT/iN/MwYcIABhkA2AH/8dGgNMBkI/Rh2yAZANoAAGLFgDbAz/M2Yt/wGQDmYMfANsHAYzNg3YAGAGBkAPYAAGDPoDbC3/szYNmABgDwGQDJ/+DNsDbAxmMyYN/4GQDLAGDZmA8Aw2PwYNnASwDW4ZAbEMJjIGDTYAYAIEsA9QAAYMGAMxDAYgBgxjAmAEAZAPUBAf/gx4Bj+MHgAeDMOB4AgBkA5wAAQIEBgfCAQABAkBAM+gAOQQYELAENAgAPGQDXUUFgBEAQAAEB8wEEowKsAABhsQZgOAAAEBkA2AP9oYZgDAP/+AAAZkBeAdkBCZDP8AwADAAAAGfgGQBR//iGYAYZABFmagAEXgFiAZmARmAOGQABhAAGGQC5g+ZgDwAPAAAj//hLAJL5wN/4GwANwf+iAgWvAOcBUcDGYBmADOAAACZAYBkA5wBhwMZgMYAMQAAAduDwGQDZAXFAxmAwwAwAAADnwBkAyPtAxmBgwAwAAAGHgEsAsQNvUOxgYGAMAAAAogIFfQDIAmpRuEDAcAwAAAAY6APoAADkex/5gDgMAAAAYAC2A6EASDEP8gAQCAAAzQMG+gANAgAEEwENAgAPGQDV9QAFEEFgQEBBgEEAgIBAgBh3AfYBA//4YbB/4OGAY4DAwGHBDDME9gDNs/2gYMDDQGMBgYD98/+XBPYAzbEJkH/Bg2DGExEQ22MQyQT1AM2x//hgwSYwh/v7+Y4yGGUE9QID/aGZgH/CdDnNMzYyGyD/wHcB9QDNwZmAQJPoEdGjNDAxgDOWAPUBAM2h+cP/+MfyxYMyMGBgfhkA9wED/bFRwEYBgADHw/Mw37g3SwDmmGHAZkPkEM+jMbNAUMnJBPMCzZlxQEfjB/jNszEwf+AMAeBxAvUDAY2Z+0DmABYw2ZswMGDB/+MwGQD1APNvULYAZjDhkzAwYMBtgxkA9QA5ompRngPGMMGD8WBgwMwyAPQCAhGA5HkH+Qfwx4Ig4H/BHEFkAPUBAAGASDIA8AQggQAAQECACMgADYgCBcgADhoAD6MCHy8AHyILBA8ZAAcfDzIABR8DGQAFHwAZAAYfAJ8LBA8ZAAYfwBkABR/gGQAFH/gZAAUf/hkABR//rwAEPwH/4K8ABC//wBkABQ9kAAUPlgAGD8gABg8TAQUPRQEGDxkAIB8B+gAELwAHGQAFDz8CBh+fMgAED6MCHw8yAP8fAQwICwIAAUUBDxkAAS8Dn9IPCBH+DAgLAgAvHz82EAgf/+YQAT/+f4CaEAcff08QAh///hAIHz+yEAEv//5iEQgPlBEGAa0QDQIAH+D4EQgPAgCvUAAAAAAA"
                                     [iVar14 + 0x300];
                goto LAB_ram_4201be56;
              }
              iVar14 = iVar14 + 1;
              puVar7 = puVar7 + 1;
            } while (iVar14 != 0xb);
            uVar10 = 0;
LAB_ram_4201be56:
            iVar6 = iVar6 + uVar10;
          }
          pbVar1 = pbVar1 + 1;
        }
        pbVar1 = local_f4;
        iVar14 = 0;
        while( true ) {
          uVar12 = (ushort)*pbVar1;
          if (uVar12 == 0) break;
          if ((char)*pbVar1 < '\0') {
            if ((uVar12 & 0xe0) == 0xc0) {
              uVar12 = (uVar12 & 0x1f) << 6 | pbVar1[1] & 0x3f;
              pbVar1 = pbVar1 + 1;
              goto LAB_ram_4201beb2;
            }
            if ((uVar12 & 0xf0) == 0xe0) {
              uVar12 = uVar12 << 0xc | pbVar1[2] & 0x3f | (pbVar1[1] & 0x3f) << 6;
              pbVar1 = pbVar1 + 2;
              goto LAB_ram_4201beb2;
            }
          }
          else {
LAB_ram_4201beb2:
            puVar8 = (ushort *)0x3c0db684;
            puVar7 = (ushort *)0x3c0db684;
            iVar11 = 0;
            do {
              if (*puVar7 == uVar12) {
                pcVar2 = "HwABAJ0vP/8BAABPAAAAARcAAG///8AAAAcZAAJP8AAADxkAAk/4AAAfGQACH/x8AARv//4AAD/gRwEAbwH+AAB/gBkAAF8A/wAAf34AAV/4fwAA/uEAAW/+P4AA/HBLAABvBz+AAPxgGQAAoQOfgAD8x/////wZAQaHAKEBn4AA/N/////+GQEVwDwADxkAPW/P/////AN9AAAGcwAGAgABfQAPGQD/////DiIB/C4EMmDADAkABDMEEwHcBA8ZAAYUAFgEBTIA2YH4fMN8HgHj8Dw+AfAZAMjMxsN2MwBgwAxjAxgZAMn5hsDDY2GAYMAMYAAZAFGBhnDDYBkAODgA+DIA2oGGHMNgfwBgwAwOAbgZAJoGw2BgAGDADANkANiBhsZnYDGAeMAPYwM4MgDI/YZ8P2AfADBwBj4BZAANAgAE4QANAgAPGQD/VlDAAAAAA1MJCiYCDxkAIMl4wPD4eD8AHj8H48H0AcnMwZmMzGcAMzmM5mMmAsmGww2BhsMAYbDYbDajAn+AwwzhhsM+GQACnDn8wwB/MNhv5jIAmA2AwwBgMNhsBhkA2ADG2ZmMxmcAMbDM5jN9ANkAfHDw+Hw/AB8wx+PhrwAMAgAPigL/VgsCAAt3ARUwMwoPGQAWBVEABjIAkgH7DHh8/eDx+BwABhkAnAM7DMzGMGGZzBkAnwYbDYbAMGMNhhkAAR9wGQAEL/wcGQAEL4AGGQABoQM5nMbGMHmZhjhlAAaWAI0B+Px8fBww8RkAAdIFBgIABjIADxkAIAoCAAdLAAoCAA8ZAP//GxE+OwLDYAAKcACACAABEAAEPwIRIBkATCAACiAZAPIcZQGRM04jEAAjgeY5kQPcYBzIgZ+AAPzAPJYCSgqpJIAAJACJSFEBEpAkKBkA8wQglAPEOqkngAAjAIlJygES8CTlZADzA5QCCkqpJAAAIICJSkoBEoAlJRkA8QRkAZE6rjMQAHcAZjnEANJgHOIBZAABlQARCAYAMAAABGAQHwIZAAAQGHkQFwwZAAYCABUg/AhROAgGYBFNAGVwDABjihAZAEIQCAIgGQBXIBAAJEoZAPcAHmIgPcZoDjKgIDzGIEAIMgDYkiARKVQJSqAgESkggBkAQvIgES8ZADjvIQAZANaCIBEoVAlJQCARCCAAZADnOAZjMA0mVAkxQHAQxjEZAAbDAAECAAbIAAEPAAoCAA/6AAIAjREBGQAPTxABXwMfgAD+BBACLx+ANhAHD2gQAi/8f5oQCBQ/LwsIAgAvAf7+EAgPMBEGHw9JEQIf+JQRCAGtEA0CAF3AAAAAfxYAAvgRDwIAr1AAAAAAAA=="
                         + iVar11 * 0xfe + 0x160;
                goto LAB_ram_4201bed8;
              }
              iVar11 = iVar11 + 1;
              puVar7 = puVar7 + 1;
            } while (iVar11 != 0xb);
            pcVar2 = (char *)0x0;
LAB_ram_4201bed8:
            iVar11 = 0;
            do {
              if (*puVar8 == uVar12) {
                uVar13 = (uint)(byte)"HwABAJ0f/wEAAU+AAAADGAABX//gAAAPGQACT/gAAB8ZAAJP/AAAPxkAAh/+GQAIL3/wRwEAbwf/AAB/wBkAAF8B/wAA/2UAAW/8f4AA/39+AAFff4AA/nxLAABfD7+AAP59AAKRv4AA/O/////8GQHxEIB/////4B/////7n4AA/N/////+B//////A//////CNAA8ZAAUf/RkAIx/PfQAAX/mfgAD8EwECDxkA////xuYIAEEARkBEEABAQCAAQOgD9gABDEBjgDZgZ/oQYG/w/+AZAPcAAMzgYwCW0MYz+GBhgADAGQDn7MDGEf/4h/MwYMGQAYAZANBNgIf5oDEmMzf4n/gDzwYETATXDiHNMT/iN/MwYcIABhkA2AH/8dGgNMBkI/Rh2yAZANoAAGLFgDbAz/M2Yt/wGQDmYMfANsHAYzNg3YAGAGBkAPYAAGDPoDbC3/szYNmABgDwGQDJ/+DNsDbAxmMyYN/4GQDLAGDZmA8Aw2PwYNnASwDW4ZAbEMJjIGDTYAYAIEsA9QAAYMGAMxDAYgBgxjAmAEAZAPUBAf/gx4Bj+MHgAeDMOB4AgBkA5wAAQIEBgfCAQABAkBAM+gAOQQYELAENAgAPGQDXUUFgBEAQAAEB8wEEowKsAABhsQZgOAAAEBkA2AP9oYZgDAP/+AAAZkBeAdkBCZDP8AwADAAAAGfgGQBR//iGYAYZABFmagAEXgFiAZmARmAOGQABhAAGGQC5g+ZgDwAPAAAj//hLAJL5wN/4GwANwf+iAgWvAOcBUcDGYBmADOAAACZAYBkA5wBhwMZgMYAMQAAAduDwGQDZAXFAxmAwwAwAAADnwBkAyPtAxmBgwAwAAAGHgEsAsQNvUOxgYGAMAAAAogIFfQDIAmpRuEDAcAwAAAAY6APoAADkex/5gDgMAAAAYAC2A6EASDEP8gAQCAAAzQMG+gANAgAEEwENAgAPGQDV9QAFEEFgQEBBgEEAgIBAgBh3AfYBA//4YbB/4OGAY4DAwGHBDDME9gDNs/2gYMDDQGMBgYD98/+XBPYAzbEJkH/Bg2DGExEQ22MQyQT1AM2x//hgwSYwh/v7+Y4yGGUE9QID/aGZgH/CdDnNMzYyGyD/wHcB9QDNwZmAQJPoEdGjNDAxgDOWAPUBAM2h+cP/+MfyxYMyMGBgfhkA9wED/bFRwEYBgADHw/Mw37g3SwDmmGHAZkPkEM+jMbNAUMnJBPMCzZlxQEfjB/jNszEwf+AMAeBxAvUDAY2Z+0DmABYw2ZswMGDB/+MwGQD1APNvULYAZjDhkzAwYMBtgxkA9QA5ompRngPGMMGD8WBgwMwyAPQCAhGA5HkH+Qfwx4Ig4H/BHEFkAPUBAAGASDIA8AQggQAAQECACMgADYgCBcgADhoAD6MCHy8AHyILBA8ZAAcfDzIABR8DGQAFHwAZAAYfAJ8LBA8ZAAYfwBkABR/gGQAFH/gZAAUf/hkABR//rwAEPwH/4K8ABC//wBkABQ9kAAUPlgAGD8gABg8TAQUPRQEGDxkAIB8B+gAELwAHGQAFDz8CBh+fMgAED6MCHw8yAP8fAQwICwIAAUUBDxkAAS8Dn9IPCBH+DAgLAgAvHz82EAgf/+YQAT/+f4CaEAcff08QAh///hAIHz+yEAEv//5iEQgPlBEGAa0QDQIAH+D4EQgPAgCvUAAAAAAA"
                                     [iVar11 + 0x300];
                uVar10 = 0;
                if ((pcVar2 != (char *)0x0) && (uVar10 = 0, uVar13 != 0)) {
                  iVar11 = 0;
                  do {
                    uVar10 = iVar11 * 0x2d;
                    iVar9 = 0;
                    do {
                      uVar4 = (200 - iVar6) / 2 + iVar14 + iVar9;
                      if ((uVar4 < 200) &&
                         (((int)(uint)(byte)pcVar2[(int)uVar10 >> 3] >> (~uVar10 & 7) & 1U) != 0)) {
                        FUN_ram_4201f246((int)(uVar4 * 0x10000) >> 0x10,
                                         (iVar11 + 0x4e) * 0x10000 >> 0x10,3);
                      }
                      iVar9 = iVar9 + 1;
                      uVar10 = uVar10 + 1;
                    } while (iVar9 < (int)uVar13);
                    iVar11 = iVar11 + 1;
                    uVar10 = uVar13;
                  } while (iVar11 != 0x2d);
                }
                goto LAB_ram_4201bef2;
              }
              iVar11 = iVar11 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar11 != 0xb);
            uVar10 = 0;
LAB_ram_4201bef2:
            iVar14 = iVar14 + uVar10;
          }
          pbVar1 = pbVar1 + 1;
        }
        FUN_ram_4201b5f8(0xa0);
        if (iVar3 == 0) {
          (*(code *)&SUB_ram_400106ac)
                    (local_80,0x40,0x3c0ad4f4,uStack_d8,
                     *(undefined4 *)
                      (
                      "HwABAJ0vP/8BAABPAAAAARcAAG///8AAAAcZAAJP8AAADxkAAk/4AAAfGQACH/x8AARv//4AAD/gRwEAbwH+AAB/gBkAAF8A/wAAf34AAV/4fwAA/uEAAW/+P4AA/HBLAABvBz+AAPxgGQAAoQOfgAD8x/////wZAQaHAKEBn4AA/N/////+GQEVwDwADxkAPW/P/////AN9AAAGcwAGAgABfQAPGQD/////DiIB/C4EMmDADAkABDMEEwHcBA8ZAAYUAFgEBTIA2YH4fMN8HgHj8Dw+AfAZAMjMxsN2MwBgwAxjAxgZAMn5hsDDY2GAYMAMYAAZAFGBhnDDYBkAODgA+DIA2oGGHMNgfwBgwAwOAbgZAJoGw2BgAGDADANkANiBhsZnYDGAeMAPYwM4MgDI/YZ8P2AfADBwBj4BZAANAgAE4QANAgAPGQD/VlDAAAAAA1MJCiYCDxkAIMl4wPD4eD8AHj8H48H0AcnMwZmMzGcAMzmM5mMmAsmGww2BhsMAYbDYbDajAn+AwwzhhsM+GQACnDn8wwB/MNhv5jIAmA2AwwBgMNhsBhkA2ADG2ZmMxmcAMbDM5jN9ANkAfHDw+Hw/AB8wx+PhrwAMAgAPigL/VgsCAAt3ARUwMwoPGQAWBVEABjIAkgH7DHh8/eDx+BwABhkAnAM7DMzGMGGZzBkAnwYbDYbAMGMNhhkAAR9wGQAEL/wcGQAEL4AGGQABoQM5nMbGMHmZhjhlAAaWAI0B+Px8fBww8RkAAdIFBgIABjIADxkAIAoCAAdLAAoCAA8ZAP//GxE+OwLDYAAKcACACAABEAAEPwIRIBkATCAACiAZAPIcZQGRM04jEAAjgeY5kQPcYBzIgZ+AAPzAPJYCSgqpJIAAJACJSFEBEpAkKBkA8wQglAPEOqkngAAjAIlJygES8CTlZADzA5QCCkqpJAAAIICJSkoBEoAlJRkA8QRkAZE6rjMQAHcAZjnEANJgHOIBZAABlQARCAYAMAAABGAQHwIZAAAQGHkQFwwZAAYCABUg/AhROAgGYBFNAGVwDABjihAZAEIQCAIgGQBXIBAAJEoZAPcAHmIgPcZoDjKgIDzGIEAIMgDYkiARKVQJSqAgESkggBkAQvIgES8ZADjvIQAZANaCIBEoVAlJQCARCCAAZADnOAZjMA0mVAkxQHAQxjEZAAbDAAECAAbIAAEPAAoCAA/6AAIAjREBGQAPTxABXwMfgAD+BBACLx+ANhAHD2gQAi/8f5oQCBQ/LwsIAgAvAf7+EAgPMBEGHw9JEQIf+JQRCAGtEA0CAF3AAAAAfxYAAvgRDwIAr1AAAAAAAA=="
                      + iStack_cc * 4 + 0xf8));
          pbVar1 = local_80;
          iVar3 = 0;
          while( true ) {
            uVar12 = (ushort)*pbVar1;
            if (uVar12 == 0) break;
            if ((char)*pbVar1 < '\0') {
              if ((uVar12 & 0xe0) == 0xc0) {
                uVar12 = (uVar12 & 0x1f) << 6 | pbVar1[1] & 0x3f;
                pbVar1 = pbVar1 + 1;
                goto LAB_ram_4201bfce;
              }
              if ((uVar12 & 0xf0) == 0xe0) {
                uVar12 = uVar12 << 0xc | pbVar1[2] & 0x3f | (pbVar1[1] & 0x3f) << 6;
                pbVar1 = pbVar1 + 2;
                goto LAB_ram_4201bfce;
              }
            }
            else {
LAB_ram_4201bfce:
              puVar7 = (ushort *)0x3c0dbd4c;
              iVar6 = 0;
              do {
                if (*puVar7 == uVar12) {
                  uVar10 = (uint)(byte)"HwABAJ0f/wEAAU+AAAADGAABX//gAAAPGQACT/gAAB8ZAAJP/AAAPxkAAh/+GQAIL3/wRwEAbwf/AAB/wBkAAF8B/wAA/2UAAW/8f4AA/39+AAFff4AA/nxLAABfD7+AAP59AAKRv4AA/O/////8GQEigH8NAfEHAAADn4AA/N/////+B//////A/////0EADxkABh8BMgAFDxkACx/PfQAAATIADxMBAg8ZAP//////JsEBACAAQIgQICEEQBAcBgRfBcoB//IQYM/5N/GH4BgZAMCAY/hgzDG0YMbAMID7BwUyALGBYzBgzDGywIbAf6AFBRkAuv/jN/v/8bGARPjRMgC6gGMwYMwhs2PscRtkALqhY/Rg3/k8ONggDhkAur/jNmDtoBkQ7/AzSwDYs2MzYM0Qf4DEYMD4YH0A2rNjM2HP+CxAwmP/0PAZAKkyY8zQ/+DDwMzAGQDJv2PwYtjAJ0DRgP/ASwDYomMgYNvwdsDjwMzAIEsA2IBiAGDYwGZhxmDMwEAZANiB4AHh0MDOcIw4/8CAGQC5AEAAQKf5BCAwEIDIAA0CAARFAQ0CAA8ZANlxgEAMAEAAMSoBCfoAgv/gDEBgADGQHgEHEwGPzMB/4MgT//gZAABPDMGP+EsAAV/ADZEtsBkAAI/Mwf/6fbAAIEsAAEIGA+2w+ggJfQCN/8AcIM2wDGAyAG+AgD/xj/AZAABfCEBsQ+0yAAGRpmDf4Q2wDGHgTAAH4QCbszMIwB2wDmMwGQCcAbKwAMBtsA3DGQCcA7CYAMPP8AyDGQCdAT/QA4EIIAwBZABxH4ABAAAACGIACX0ACgIAB5YACgIADxkA//////89ApwFCgIAAV8FDxkAAS8Dn9IPCBP+FAcJAgAvHz82EAgf/+YQAT/+f4CaEAcPzBAGD7IQAQ8XEQsPfAABAWIRD5QRBgGtEA0CAB/g+BEIDwIAr1AAAAAAAA=="
                                       [iVar6 + 0x334];
                  goto LAB_ram_4201bfe6;
                }
                iVar6 = iVar6 + 1;
                puVar7 = puVar7 + 1;
              } while (iVar6 != 0x14);
              uVar10 = 0;
LAB_ram_4201bfe6:
              iVar3 = iVar3 + uVar10;
            }
            pbVar1 = pbVar1 + 1;
          }
          pbVar1 = local_80;
          iVar6 = 0;
          while( true ) {
            uVar12 = (ushort)*pbVar1;
            if (uVar12 == 0) break;
            if ((char)*pbVar1 < '\0') {
              if ((uVar12 & 0xe0) == 0xc0) {
                uVar12 = (uVar12 & 0x1f) << 6 | pbVar1[1] & 0x3f;
                pbVar1 = pbVar1 + 1;
                goto LAB_ram_4201bdac;
              }
              if ((uVar12 & 0xf0) == 0xe0) {
                uVar12 = uVar12 << 0xc | pbVar1[2] & 0x3f | (pbVar1[1] & 0x3f) << 6;
                pbVar1 = pbVar1 + 2;
                goto LAB_ram_4201bdac;
              }
            }
            else {
LAB_ram_4201bdac:
              puVar8 = (ushort *)0x3c0dbd4c;
              puVar7 = (ushort *)0x3c0dbd4c;
              iVar14 = 0;
              do {
                if (*puVar7 == uVar12) {
                  pcVar2 = "HwABAJ0f/wEAAU+AAAADGAABX//gAAAPGQACT/gAAB8ZAAJP/AAAPxkAAh/+GQAIL3/wRwEAbwf/AAB/wBkAAF8B/wAA/2UAAW/8f4AA/39+AAFff4AA/nxLAABfD7+AAP59AAKRv4AA/O/////8GQHxEIB/////4B/////7n4AA/N/////+B//////A//////CNAA8ZAAUf/RkAIx/PfQAAX/mfgAD8EwECDxkA////xuYIAEEARkBEEABAQCAAQOgD9gABDEBjgDZgZ/oQYG/w/+AZAPcAAMzgYwCW0MYz+GBhgADAGQDn7MDGEf/4h/MwYMGQAYAZANBNgIf5oDEmMzf4n/gDzwYETATXDiHNMT/iN/MwYcIABhkA2AH/8dGgNMBkI/Rh2yAZANoAAGLFgDbAz/M2Yt/wGQDmYMfANsHAYzNg3YAGAGBkAPYAAGDPoDbC3/szYNmABgDwGQDJ/+DNsDbAxmMyYN/4GQDLAGDZmA8Aw2PwYNnASwDW4ZAbEMJjIGDTYAYAIEsA9QAAYMGAMxDAYgBgxjAmAEAZAPUBAf/gx4Bj+MHgAeDMOB4AgBkA5wAAQIEBgfCAQABAkBAM+gAOQQYELAENAgAPGQDXUUFgBEAQAAEB8wEEowKsAABhsQZgOAAAEBkA2AP9oYZgDAP/+AAAZkBeAdkBCZDP8AwADAAAAGfgGQBR//iGYAYZABFmagAEXgFiAZmARmAOGQABhAAGGQC5g+ZgDwAPAAAj//hLAJL5wN/4GwANwf+iAgWvAOcBUcDGYBmADOAAACZAYBkA5wBhwMZgMYAMQAAAduDwGQDZAXFAxmAwwAwAAADnwBkAyPtAxmBgwAwAAAGHgEsAsQNvUOxgYGAMAAAAogIFfQDIAmpRuEDAcAwAAAAY6APoAADkex/5gDgMAAAAYAC2A6EASDEP8gAQCAAAzQMG+gANAgAEEwENAgAPGQDV9QAFEEFgQEBBgEEAgIBAgBh3AfYBA//4YbB/4OGAY4DAwGHBDDME9gDNs/2gYMDDQGMBgYD98/+XBPYAzbEJkH/Bg2DGExEQ22MQyQT1AM2x//hgwSYwh/v7+Y4yGGUE9QID/aGZgH/CdDnNMzYyGyD/wHcB9QDNwZmAQJPoEdGjNDAxgDOWAPUBAM2h+cP/+MfyxYMyMGBgfhkA9wED/bFRwEYBgADHw/Mw37g3SwDmmGHAZkPkEM+jMbNAUMnJBPMCzZlxQEfjB/jNszEwf+AMAeBxAvUDAY2Z+0DmABYw2ZswMGDB/+MwGQD1APNvULYAZjDhkzAwYMBtgxkA9QA5ompRngPGMMGD8WBgwMwyAPQCAhGA5HkH+Qfwx4Ig4H/BHEFkAPUBAAGASDIA8AQggQAAQECACMgADYgCBcgADhoAD6MCHy8AHyILBA8ZAAcfDzIABR8DGQAFHwAZAAYfAJ8LBA8ZAAYfwBkABR/gGQAFH/gZAAUf/hkABR//rwAEPwH/4K8ABC//wBkABQ9kAAUPlgAGD8gABg8TAQUPRQEGDxkAIB8B+gAELwAHGQAFDz8CBh+fMgAED6MCHw8yAP8fAQwICwIAAUUBDxkAAS8Dn9IPCBH+DAgLAgAvHz82EAgf/+YQAT/+f4CaEAcff08QAh///hAIHz+yEAEv//5iEQgPlBEGAa0QDQIAH+D4EQgPAgCvUAAAAAAA"
                           + iVar14 * 0x55 + 0x30c;
                  goto LAB_ram_4201bdd2;
                }
                iVar14 = iVar14 + 1;
                puVar7 = puVar7 + 1;
              } while (iVar14 != 0x14);
              pcVar2 = (char *)0x0;
LAB_ram_4201bdd2:
              iVar14 = 0;
              do {
                if (*puVar8 == uVar12) {
                  uVar13 = (uint)(byte)"HwABAJ0f/wEAAU+AAAADGAABX//gAAAPGQACT/gAAB8ZAAJP/AAAPxkAAh/+GQAIL3/wRwEAbwf/AAB/wBkAAF8B/wAA/2UAAW/8f4AA/39+AAFff4AA/nxLAABfD7+AAP59AAKRv4AA/O/////8GQEigH8NAfEHAAADn4AA/N/////+B//////A/////0EADxkABh8BMgAFDxkACx/PfQAAATIADxMBAg8ZAP//////JsEBACAAQIgQICEEQBAcBgRfBcoB//IQYM/5N/GH4BgZAMCAY/hgzDG0YMbAMID7BwUyALGBYzBgzDGywIbAf6AFBRkAuv/jN/v/8bGARPjRMgC6gGMwYMwhs2PscRtkALqhY/Rg3/k8ONggDhkAur/jNmDtoBkQ7/AzSwDYs2MzYM0Qf4DEYMD4YH0A2rNjM2HP+CxAwmP/0PAZAKkyY8zQ/+DDwMzAGQDJv2PwYtjAJ0DRgP/ASwDYomMgYNvwdsDjwMzAIEsA2IBiAGDYwGZhxmDMwEAZANiB4AHh0MDOcIw4/8CAGQC5AEAAQKf5BCAwEIDIAA0CAARFAQ0CAA8ZANlxgEAMAEAAMSoBCfoAgv/gDEBgADGQHgEHEwGPzMB/4MgT//gZAABPDMGP+EsAAV/ADZEtsBkAAI/Mwf/6fbAAIEsAAEIGA+2w+ggJfQCN/8AcIM2wDGAyAG+AgD/xj/AZAABfCEBsQ+0yAAGRpmDf4Q2wDGHgTAAH4QCbszMIwB2wDmMwGQCcAbKwAMBtsA3DGQCcA7CYAMPP8AyDGQCdAT/QA4EIIAwBZABxH4ABAAAACGIACX0ACgIAB5YACgIADxkA//////89ApwFCgIAAV8FDxkAAS8Dn9IPCBP+FAcJAgAvHz82EAgf/+YQAT/+f4CaEAcPzBAGD7IQAQ8XEQsPfAABAWIRD5QRBgGtEA0CAB/g+BEIDwIAr1AAAAAAAA=="
                                       [iVar14 + 0x334];
                  uVar10 = 0;
                  if ((pcVar2 != (char *)0x0) && (uVar10 = 0, uVar13 != 0)) {
                    iVar14 = 0;
                    do {
                      uVar10 = iVar14 * 0x1a;
                      iVar11 = 0;
                      do {
                        uVar4 = iVar11 + (200 - iVar3) / 2 + iVar6;
                        if ((uVar4 < 200) &&
                           (((int)(uint)(byte)pcVar2[(int)uVar10 >> 3] >> (~uVar10 & 7) & 1U) != 0))
                        {
                          FUN_ram_4201f246((int)(uVar4 * 0x10000) >> 0x10,
                                           (iVar14 + 0xa7) * 0x10000 >> 0x10,0);
                        }
                        iVar11 = iVar11 + 1;
                        uVar10 = uVar10 + 1;
                      } while (iVar11 < (int)uVar13);
                      iVar14 = iVar14 + 1;
                      uVar10 = uVar13;
                    } while (iVar14 != 0x1a);
                  }
                  goto LAB_ram_4201bdec;
                }
                iVar14 = iVar14 + 1;
                puVar8 = puVar8 + 1;
              } while (iVar14 != 0x14);
              uVar10 = 0;
LAB_ram_4201bdec:
              iVar6 = iVar6 + uVar10;
            }
            pbVar1 = pbVar1 + 1;
          }
        }
        else {
          (*(code *)&SUB_ram_400106ac)
                    (local_80,0x40,"space in the plan for insight.",
                     *(undefined4 *)
                      (
                      "HwABAJ0vP/8BAABPAAAAARcAAG///8AAAAcZAAJP8AAADxkAAk/4AAAfGQACH/x8AARv//4AAD/gRwEAbwH+AAB/gBkAAF8A/wAAf34AAV/4fwAA/uEAAW/+P4AA/HBLAABvBz+AAPxgGQAAoQOfgAD8x/////wZAQaHAKEBn4AA/N/////+GQEVwDwADxkAPW/P/////AN9AAAGcwAGAgABfQAPGQD/////DiIB/C4EMmDADAkABDMEEwHcBA8ZAAYUAFgEBTIA2YH4fMN8HgHj8Dw+AfAZAMjMxsN2MwBgwAxjAxgZAMn5hsDDY2GAYMAMYAAZAFGBhnDDYBkAODgA+DIA2oGGHMNgfwBgwAwOAbgZAJoGw2BgAGDADANkANiBhsZnYDGAeMAPYwM4MgDI/YZ8P2AfADBwBj4BZAANAgAE4QANAgAPGQD/VlDAAAAAA1MJCiYCDxkAIMl4wPD4eD8AHj8H48H0AcnMwZmMzGcAMzmM5mMmAsmGww2BhsMAYbDYbDajAn+AwwzhhsM+GQACnDn8wwB/MNhv5jIAmA2AwwBgMNhsBhkA2ADG2ZmMxmcAMbDM5jN9ANkAfHDw+Hw/AB8wx+PhrwAMAgAPigL/VgsCAAt3ARUwMwoPGQAWBVEABjIAkgH7DHh8/eDx+BwABhkAnAM7DMzGMGGZzBkAnwYbDYbAMGMNhhkAAR9wGQAEL/wcGQAEL4AGGQABoQM5nMbGMHmZhjhlAAaWAI0B+Px8fBww8RkAAdIFBgIABjIADxkAIAoCAAdLAAoCAA8ZAP//GxE+OwLDYAAKcACACAABEAAEPwIRIBkATCAACiAZAPIcZQGRM04jEAAjgeY5kQPcYBzIgZ+AAPzAPJYCSgqpJIAAJACJSFEBEpAkKBkA8wQglAPEOqkngAAjAIlJygES8CTlZADzA5QCCkqpJAAAIICJSkoBEoAlJRkA8QRkAZE6rjMQAHcAZjnEANJgHOIBZAABlQARCAYAMAAABGAQHwIZAAAQGHkQFwwZAAYCABUg/AhROAgGYBFNAGVwDABjihAZAEIQCAIgGQBXIBAAJEoZAPcAHmIgPcZoDjKgIDzGIEAIMgDYkiARKVQJSqAgESkggBkAQvIgES8ZADjvIQAZANaCIBEoVAlJQCARCCAAZADnOAZjMA0mVAkxQHAQxjEZAAbDAAECAAbIAAEPAAoCAA/6AAIAjREBGQAPTxABXwMfgAD+BBACLx+ANhAHD2gQAi/8f5oQCBQ/LwsIAgAvAf7+EAgPMBEGHw9JEQIf+JQRCAGtEA0CAF3AAAAAfxYAAvgRDwIAr1AAAAAAAA=="
                      + iStack_cc * 4 + 0x114));
          FUN_ram_4201b730(0xa8,local_80);
        }
      }
    }
    if (*(char *)(gp + -0x788) == '\0') {
      FUN_ram_4201f108(0,199);
      return;
    }
  }
  FUN_ram_4201ef22();
  *(undefined1 *)(gp + -0x788) = 0;
  return;
}

