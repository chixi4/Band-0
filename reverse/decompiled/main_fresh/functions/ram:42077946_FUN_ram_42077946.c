
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42077946(int *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar7;
  ushort uVar8;
  undefined2 uVar9;
  bool bVar10;
  byte *pbVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined *puVar17;
  char *pcVar18;
  undefined1 uVar19;
  code *pcVar20;
  byte *pbVar21;
  char cVar22;
  int iVar23;
  byte *pbVar24;
  int iVar25;
  byte *pbVar26;
  undefined4 uVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  uint uVar31;
  byte *pbVar32;
  int *piVar33;
  byte *pbStack_dc;
  uint uStack_c8;
  undefined1 auStack_c4 [8];
  undefined4 uStack_bc;
  undefined1 auStack_b8 [2];
  undefined1 uStack_b6;
  undefined2 uStack_b4;
  undefined1 uVar6;
  
  if ((param_1 == (int *)0x0) || (iVar12 = *param_1, iVar12 == 0)) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe598,"e yourself an exit time before social plans.",
                     0x9ee);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  (*(code *)&SUB_ram_40011fd0)(_DAT_ram_3fcc4014 != iVar12,auStack_c4);
  uVar31 = (uint)*(ushort *)(param_2 + 0x16);
  param_1[0xaa] = *(int *)(*(int *)(param_2 + 0x24) + 4);
  iVar23 = *(int *)(*(int *)(param_2 + 4) + 4);
  pbVar32 = (byte *)(iVar23 + 0x18);
  pbVar21 = pbVar32 + uVar31;
  if (param_3 == 0x80) {
    uVar27 = 0;
LAB_ram_42077be6:
    if (((_DAT_ram_3fcc4020 & 0x80) == 0) && (param_3 == 0x50)) {
      return;
    }
    FUN_ram_4207a29c(param_1,param_2,&uStack_bc,uVar27,param_4);
    return;
  }
  if ((int)param_3 < 0x81) {
    if (param_3 == 0x40) {
      _DAT_ram_3fcc29f0 = _DAT_ram_3fcc29f0 + 1;
      if (*(int *)(iVar12 + 0x98) != 5) {
        return;
      }
      bVar13 = 0;
      pbVar26 = (byte *)0x0;
      pbVar30 = (byte *)0x0;
      pbVar28 = (byte *)0x0;
      for (; 1 < (int)pbVar21 - (int)pbVar32; pbVar32 = pbVar32 + pbVar32[1] + 2) {
        bVar7 = pbVar32[1];
        if ((int)pbVar21 - (int)pbVar32 <= (int)(bVar7 + 1)) {
          return;
        }
        bVar1 = *pbVar32;
        pbVar24 = pbVar30;
        pbVar29 = pbVar28;
        if (bVar1 == 3) {
          bVar13 = pbVar32[2];
        }
        else if (bVar1 < 4) {
          pbVar29 = pbVar32;
          if ((bVar1 != 0) && (pbVar29 = pbVar28, bVar1 == 1)) {
            pbVar26 = pbVar32;
          }
        }
        else {
          pbVar24 = pbVar32;
          if ((bVar1 != 0x32) && (pbVar24 = pbVar30, bVar1 == 0xdd)) {
            iVar14 = FUN_ram_42076184(pbVar32);
            if (iVar14 == 0) {
              iVar14 = FUN_ram_42076152(pbVar32);
              if ((iVar14 != 0) && (_DAT_ram_3fcc40c8 != (code *)0x0)) {
                (*_DAT_ram_3fcc40c8)(_DAT_ram_3fcc40cc,1,iVar23 + 10,pbVar32,param_4);
              }
            }
            else if (_DAT_ram_3fcc409c != (code *)0x0) {
              (*_DAT_ram_3fcc409c)(1,iVar23 + 10,pbVar32 + 7,pbVar32 + 10,bVar7 - 8 & 0xff,param_4);
            }
          }
        }
        pbVar30 = pbVar24;
        pbVar28 = pbVar29;
      }
      if (pbVar26 == (byte *)0x0) {
        return;
      }
      if (0xf < pbVar26[1]) {
        return;
      }
      if ((pbVar30 != (byte *)0x0) && ((int)(0xf - (uint)pbVar26[1]) < (int)(uint)pbVar30[1])) {
        return;
      }
      if (pbVar28 == (byte *)0x0) {
        return;
      }
      uVar31 = (uint)pbVar28[1];
      if (0x20 < uVar31) {
        return;
      }
      if ((bVar13 != 0) && (*(byte *)(iVar12 + 0x12a) != bVar13)) {
        return;
      }
      iVar14 = *(int *)(gp + -0xb4);
      if (*(char *)(iVar14 + 0x3f5) == '\x01') {
        if (uVar31 == 0) {
          return;
        }
      }
      else if (uVar31 == 0) goto LAB_ram_42077d38;
      if (uVar31 != *(uint *)(iVar14 + 0x368)) {
        return;
      }
      iVar14 = FUN_ram_4039c0e0(pbVar28 + 2,iVar14 + 0x36c,uVar31);
      if (iVar14 != 0) {
        return;
      }
LAB_ram_42077d38:
      if (((_DAT_ram_3fcc4020 & 0x8000000) != 0) && (uVar31 == 0)) {
        return;
      }
      uStack_c8 = 0;
      FUN_ram_420838aa(&uStack_c8);
      if ((uStack_c8 & 1) == 0) {
        uStack_bc = param_4;
        FUN_ram_4039c11e(auStack_b8,iVar23 + 10,6);
        FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fbc60);
        FUN_ram_4208344a(0x10,&uStack_bc,0xc);
      }
      uVar27 = 0;
      if (pbVar30 == (byte *)0x0) {
        for (iVar14 = 0; iVar14 < (int)(uint)pbVar26[1]; iVar14 = iVar14 + 1) {
          if ((0x16 < (pbVar26[iVar14 + 2] & 0x7f)) ||
             ((1 << (pbVar26[iVar14 + 2] & 0x1f) & 0x400814U) == 0)) {
            uVar27 = 0;
            goto LAB_ram_42077da4;
          }
        }
        uVar27 = 1;
      }
LAB_ram_42077da4:
      (*(code *)&SUB_ram_40012128)(*(undefined4 *)(iVar12 + 0xec),iVar23 + 10,uVar27);
      return;
    }
    if (0x40 < (int)param_3) {
      uVar27 = 1;
      if (param_3 != 0x50) {
        return;
      }
      goto LAB_ram_42077be6;
    }
    if ((param_3 & 0xffffffdf) != 0) {
      return;
    }
    DAT_ram_3fcc29f3 = DAT_ram_3fcc29f3 + '\x01';
    FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fbca8);
    if (*(int *)(iVar12 + 0x98) != 5) {
      return;
    }
    iVar14 = FUN_ram_4039c0e0(iVar23 + 0x10,auStack_c4,6);
    if (iVar14 != 0) {
      return;
    }
    if (param_3 == 0x20) {
      if (uVar31 < 10) {
        return;
      }
      bVar10 = true;
      uVar27 = 0x30;
      iVar14 = 10;
    }
    else {
      if (uVar31 < 4) {
        return;
      }
      uVar27 = 0x10;
      iVar14 = 4;
      bVar10 = false;
    }
    iVar14 = thunk_FUN_ram_4208c19c(0,pbVar32 + iVar14,uVar31 - iVar14);
    if (iVar14 == 0) {
      return;
    }
    uVar31 = (uint)*(byte *)(iVar14 + 1);
    if (0x20 < uVar31) {
      return;
    }
    if (uVar31 != 0) {
      if (uVar31 != *(uint *)(*(int *)(gp + -0xb4) + 0x368)) {
        return;
      }
      iVar14 = FUN_ram_4039c0e0(iVar14 + 2,*(int *)(gp + -0xb4) + 0x36c);
      if (iVar14 != 0) {
        return;
      }
    }
    iVar25 = iVar23 + 10;
    iVar14 = (*(code *)&SUB_ram_40011f9c)(iVar25);
    if ((iVar14 != 0) || (bVar10)) {
      uVar31 = param_1[3];
      if ((uVar31 & 0x2000000) == 0) {
        param_1[3] = uVar31 | 0x2000000;
        if (((*(int **)(iVar12 + 0xec) != param_1) && (*(char *)((int)param_1 + 0x2f9) != '\0')) &&
           (*(short *)((int)param_1 + 0x26) != 0)) {
          if ((uVar31 & 0x1000001) == 1) {
            FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fbd24);
            if (*(char *)((int)param_1 + 0x2fa) == '\0') {
              param_1[0xc0] = 0;
              param_1[0xe8] = _DAT_ram_6004d000;
              FUN_ram_42076c64(iVar25,1);
              FUN_ram_42075b46(param_1,uVar27,0x1e);
              FUN_ram_420777ba(param_1);
              return;
            }
            FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fbd74);
            FUN_ram_42075b46(param_1,uVar27,0x1e);
            return;
          }
          if ((uVar31 & 0x1000001) == 0x1000001) {
            piVar33 = param_1 + 0x4f;
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_1 + 0xc1);
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_1 + 0xc6);
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(piVar33);
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(piVar33);
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(piVar33,0x420662ac,param_1);
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(piVar33,2000,1);
            thunk_EXT_FUN_ram_40011e74((char)param_1[0x4d]);
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))
                      (*(undefined4 *)(&DAT_ram_3fcc4008 + (*(byte *)(param_1 + 0x4d) + 0x4c) * 4));
            *(undefined4 *)(&DAT_ram_3fcc4008 + (*(byte *)(param_1 + 0x4d) + 0x4c) * 4) = 0;
            FUN_ram_42079dd8(param_1);
            if ((((*(ushort *)(param_1 + 0x57) & 0x4000) != 0) &&
                (cVar22 = *(char *)(iVar12 + 0x216), *(char *)(iVar12 + 0x216) = cVar22 + -1,
                cVar22 == '\x01')) && ((*(uint *)(iVar12 + 300) & 0x1000000) != 0)) {
              uVar15 = FUN_ram_42079402();
              FUN_ram_42080070(1,2,uVar15);
              FUN_ram_4207c908(iVar12 + 0x12a);
            }
            if ((param_1[3] & 0x40U) == 0) {
              if (*(char *)((int)param_1 + 0x3b6) != '\0') {
                *(undefined1 *)((int)param_1 + 0x3b6) = 0;
                if (*(char *)(iVar12 + 0x214) != '\0') {
                  *(char *)(iVar12 + 0x214) = *(char *)(iVar12 + 0x214) + -1;
                }
              }
            }
            else {
              FUN_ram_4207c6ec(param_1);
            }
            iVar14 = FUN_ram_4207d8c6(iVar12);
            if (0 < iVar14) {
              DAT_ram_3fcc41d4 = 1;
            }
            _DAT_ram_3fcc4170 =
                 ~(ushort)(1 << (*(ushort *)((int)param_1 + 0x26) & 0x1f)) & _DAT_ram_3fcc4170;
            *(undefined1 *)((int)param_1 + 0x136) = 1;
            iVar14 = _DAT_ram_6004d000;
            *(undefined2 *)((int)param_1 + 0x26) = 0;
            param_1[0x54] = iVar14;
            FUN_ram_42079936(param_1 + 0x42,0);
            param_1[3] = 0x3820020;
          }
        }
        pbVar32 = (byte *)(iVar23 + 0x22);
        if (!bVar10) {
          pbVar32 = (byte *)(iVar23 + 0x1c);
        }
        pbStack_dc = (byte *)0x0;
        pbVar30 = (byte *)0x0;
        pbVar26 = (byte *)0x0;
        pbVar28 = (byte *)0x0;
        do {
          if ((int)pbVar21 - (int)pbVar32 < 2) {
            uVar19 = 0;
            if (*(char *)(*(int *)(gp + -0xb4) + 0x3f4) != '\0') {
              uVar19 = *(undefined1 *)(iVar12 + 0x211);
            }
            *(undefined1 *)(param_1 + 0xcd) = uVar19;
            if (pbVar30 == (byte *)0x0) {
              return;
            }
            if (0xf < pbVar30[1]) {
              return;
            }
            if ((pbVar28 != (byte *)0x0) && ((int)(0xf - (uint)pbVar30[1]) < (int)(uint)pbVar28[1]))
            {
              return;
            }
            uVar19 = *(undefined1 *)(iVar12 + 0x12a);
            *(undefined1 *)(param_1 + 0x2b) = 0;
            *(undefined1 *)((int)param_1 + 0xab) = uVar19;
            if (pbVar26 == (byte *)0x0) {
              if (*(char *)((int)param_1 + 0x3b6) == '\0') {
                *(undefined1 *)((int)param_1 + 0x3b6) = 1;
                *(char *)(iVar12 + 0x214) = *(char *)(iVar12 + 0x214) + '\x01';
              }
              FUN_ram_4207c908((int)param_1 + 0xab);
              uVar15 = 0;
            }
            else {
              bVar13 = 0x1e;
              if (*pbVar26 != 0xdd) {
                bVar13 = 0x1a;
              }
              if (pbVar26[1] < bVar13) {
                return;
              }
              param_1[3] = param_1[3] | 0x40;
              (*(code *)&SUB_ram_4001206c)(param_1);
              FUN_ram_4207cf1e(param_1,pbVar26);
              uVar15 = 1;
            }
            iVar23 = FUN_ram_4207d8c6(iVar12);
            if (0 < iVar23) {
              DAT_ram_3fcc41d4 = 1;
            }
            bVar13 = (*(code *)&SUB_ram_40012074)(param_1,pbVar30,pbVar28,0xf);
            if ((char)bVar13 < '\0') {
              return;
            }
            iVar23 = (*(code *)&SUB_ram_40012078)(param_1);
            uVar16 = 0;
            if (iVar23 == 0) {
              uVar16 = uVar15;
            }
            (*(code *)&SUB_ram_4001207c)(param_1,uVar16);
            if (((_DAT_ram_3fcc4020 & 0x20) != 0) && (bVar13 < 0x30)) {
              return;
            }
            if (*(int **)(iVar12 + 0xec) != param_1) {
              if (((*(uint *)(iVar12 + 0xa4) & 0x2000) == 0) || (pbStack_dc == (byte *)0x0)) {
                uVar31 = param_1[3] & 0xfffffffd;
              }
              else {
                uVar31 = param_1[3] | 2;
              }
              param_1[3] = uVar31;
            }
            FUN_ram_42087078(param_1,param_4,2);
            FUN_ram_4208808a(param_1,uVar27);
            return;
          }
          bVar13 = pbVar32[1];
          uVar31 = (uint)bVar13;
          if ((int)pbVar21 - (int)pbVar32 <= (int)(uVar31 + 1)) {
            return;
          }
          bVar7 = *pbVar32;
          pbVar24 = pbVar26;
          pbVar29 = pbVar32;
          pbVar11 = pbStack_dc;
          if (bVar7 != 0x32) {
            pbVar29 = pbVar28;
            if (bVar7 < 0x33) {
              pbVar24 = pbVar32;
              if (bVar7 != 0x2d) {
                if (bVar7 == 0x30) {
                  if (uVar31 < 0x3f) goto LAB_ram_42078420;
                  *(undefined1 *)(param_1 + 0xc) = 0;
                  pcVar18 = 
                  "sAAA///gAAAfMgAX/+UEAzIA9goCAB/gAAAAv/gAwAAAP/gAgAAAP/9AAAADMgAEyQADMgDzCgAAH4AAAAAv+ABAAAAP+AAAAAAv/gAAAAAyABbqggQEMgDzDQVvAAL4AA/4AAGkAAv4AAGgAA/8AB/wAL+gAKr7AAPJAAIsAfEM0AB//QAP/wAL+AAP/wAH+AAP/gAP9AC//AA/9AEBuQ0CSwEDkAH0CtAB//wAP//AA/gAL/+AA/gAP/9AC/AB//8yABP/pRK1////gAaqQAA/0AMyABF/OACif/+AC/AC//8AL2QAByUKAlgCw9AD//gAf//QAvgAvwYAh4AL4AFVVQAfMgACyQACvAIBMgBxv//gAvgA/wYAhb//wAvgAAAAMgACoRMT+jIAHwsyABAB/Qgj/+oyAB+/MgAQAbYLIq6qLAEo//8yAAKcAAGWABADIBkDyAAB+wABxgEHMgBBf//QAwYAAQABMcAL4JwDBDIAAZcACWQABJABET9eATG//8CQAQYyAAGXAAkyALP9AB//QAf4AB//ADIAJ/QAkAECWwIJMgDC/wAH/QAP+AAC+AALMgAx/AA/JgID4gkBvAUI+gBh/0AAAAAftgISDzIAkf0ABVAAv/QAFR0CAVsCCmQAJMAAGgMSLzIAkv8AAAAA//wAADIAAS4BCWQAgfAAAAH/+ADgWAO1v//AC//AAAAH//0yAAPtAwVeAZH//gAAC//4APi8AwEyAHT4AAAv//9AZAAS/2QABwIAgflW///4AP+VDAgBAgBx5Vv////5VQwAApcAAQgACQIAFfhRAA8CAAAW/voJBgIADzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                  ;
LAB_ram_42078444:
                  FUN_ram_4207a038(1,4,2,pcVar18);
                  pbVar24 = pbVar26;
                  pbVar11 = pbStack_dc;
                }
                else {
                  pbVar24 = pbVar26;
                  if (bVar7 == 1) {
                    pbVar30 = pbVar32;
                  }
                }
              }
            }
            else if (bVar7 == 0xdd) {
              if (3 < uVar31) {
                if (*(int *)(pbVar32 + 2) == 0x1f25000) {
                  if (0x3e < uVar31) {
                    pcVar18 = 
                    "AAAAv/gAwAAAP/gAgAAAP/9AAAADMgAEyQADMgDzCgAAH4AAAAAv+ABAAAAP+AAAAAAv/gAAAAAyABbqggQEMgDzDQVvAAL4AA/4AAGkAAv4AAGgAA/8AB/wAL+gAKr7AAPJAAIsAfEM0AB//QAP/wAL+AAP/wAH+AAP/gAP9AC//AA/9AEBuQ0CSwEDkAH0CtAB//wAP//AA/gAL/+AA/gAP/9AC/AB//8yABP/pRK1////gAaqQAA/0AMyABF/OACif/+AC/AC//8AL2QAByUKAlgCw9AD//gAf//QAvgAvwYAh4AL4AFVVQAfMgACyQACvAIBMgBxv//gAvgA/wYAhb//wAvgAAAAMgACoRMT+jIAHwsyABAB/Qgj/+oyAB+/MgAQAbYLIq6qLAEo//8yAAKcAAGWABADIBkDyAAB+wABxgEHMgBBf//QAwYAAQABMcAL4JwDBDIAAZcACWQABJABET9eATG//8CQAQYyAAGXAAkyALP9AB//QAf4AB//ADIAJ/QAkAECWwIJMgDC/wAH/QAP+AAC+AALMgAx/AA/JgID4gkBvAUI+gBh/0AAAAAftgISDzIAkf0ABVAAv/QAFR0CAVsCCmQAJMAAGgMSLzIAkv8AAAAA//wAADIAAS4BCWQAgfAAAAH/+ADgWAO1v//AC//AAAAH//0yAAPtAwVeAZH//gAAC//4APi8AwEyAHT4AAAv//9AZAAS/2QABwIAgflW///4AP+VDAgBAgBx5Vv////5VQwAApcAAQgACQIAFfhRAA8CAAAW/voJBgIADzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                    ;
                    goto LAB_ram_42078444;
                  }
                  goto LAB_ram_42078420;
                }
                if (((5 < uVar31) && (*(int *)(pbVar32 + 2) == 0x2f25000)) &&
                   (pbVar11 = pbVar32, pbVar32[6] == 0)) goto LAB_ram_420783de;
              }
              if (((*(int *)(_DAT_ram_3fcdfaf0 + 8) == 2) && (3 < uVar31)) &&
                 (*(int *)(pbVar32 + 2) == 0x4f25000)) {
                if (0x3e < uVar31) {
                  pcVar18 = 
                  "MgDzCgAAH4AAAAAv+ABAAAAP+AAAAAAv/gAAAAAyABbqggQEMgDzDQVvAAL4AA/4AAGkAAv4AAGgAA/8AB/wAL+gAKr7AAPJAAIsAfEM0AB//QAP/wAL+AAP/wAH+AAP/gAP9AC//AA/9AEBuQ0CSwEDkAH0CtAB//wAP//AA/gAL/+AA/gAP/9AC/AB//8yABP/pRK1////gAaqQAA/0AMyABF/OACif/+AC/AC//8AL2QAByUKAlgCw9AD//gAf//QAvgAvwYAh4AL4AFVVQAfMgACyQACvAIBMgBxv//gAvgA/wYAhb//wAvgAAAAMgACoRMT+jIAHwsyABAB/Qgj/+oyAB+/MgAQAbYLIq6qLAEo//8yAAKcAAGWABADIBkDyAAB+wABxgEHMgBBf//QAwYAAQABMcAL4JwDBDIAAZcACWQABJABET9eATG//8CQAQYyAAGXAAkyALP9AB//QAf4AB//ADIAJ/QAkAECWwIJMgDC/wAH/QAP+AAC+AALMgAx/AA/JgID4gkBvAUI+gBh/0AAAAAftgISDzIAkf0ABVAAv/QAFR0CAVsCCmQAJMAAGgMSLzIAkv8AAAAA//wAADIAAS4BCWQAgfAAAAH/+ADgWAO1v//AC//AAAAH//0yAAPtAwVeAZH//gAAC//4APi8AwEyAHT4AAAv//9AZAAS/2QABwIAgflW///4AP+VDAgBAgBx5Vv////5VQwAApcAAQgACQIAFfhRAA8CAAAW/voJBgIADzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                  ;
                  goto LAB_ram_42078444;
                }
LAB_ram_42078420:
                *(byte *)(param_1 + 0xc) = bVar13 + 2;
                FUN_ram_4039c11e((int)param_1 + 0x33,pbVar32);
                pbVar24 = pbVar26;
                pbVar11 = pbStack_dc;
              }
              else if (((_DAT_ram_3fcc426c == 0) || (uVar31 < 4)) ||
                      (*(int *)(pbVar32 + 2) != 0x734fe18)) {
                iVar23 = FUN_ram_42076184(pbVar32);
                if (iVar23 == 0) {
                  iVar23 = FUN_ram_42076152(pbVar32);
                  pbVar11 = pbStack_dc;
                  if ((iVar23 != 0) && (_DAT_ram_3fcc40c8 != (code *)0x0)) {
                    (*_DAT_ram_3fcc40c8)(_DAT_ram_3fcc40cc,3,iVar25,pbVar32,param_4);
                  }
                }
                else {
                  pbVar11 = pbStack_dc;
                  if (_DAT_ram_3fcc409c != (code *)0x0) {
                    (*_DAT_ram_3fcc409c)
                              (3,iVar25,pbVar32 + 7,pbVar32 + 10,uVar31 - 8 & 0xff,param_4);
                  }
                }
              }
              else {
                (*(code *)&SUB_ram_40012068)(param_1,pbVar32 + 7,0);
                *(undefined1 *)((int)param_1 + 0x28a) = 1;
                pbVar11 = pbStack_dc;
              }
            }
            else if (bVar7 == 0xf4) {
              *(ushort *)(param_1 + 0xeb) = bVar13 + 2;
              param_1[0xea] = (int)pbVar32;
            }
            else if ((bVar7 == 0x5a) && (2 < uVar31)) {
              *(undefined2 *)((int)param_1 + 0x332) = *(undefined2 *)(pbVar32 + 2);
            }
          }
LAB_ram_420783de:
          pbStack_dc = pbVar11;
          pbVar32 = pbVar32 + pbVar32[1] + 2;
          pbVar26 = pbVar24;
          pbVar28 = pbVar29;
        } while( true );
      }
      uVar19 = *(undefined1 *)((int)param_1 + 9);
      puVar17 = &DAT_ram_3c0fbcc8;
      uVar6 = (undefined1)param_1[2];
      uVar2 = *(undefined1 *)((int)param_1 + 7);
      uVar3 = *(undefined1 *)((int)param_1 + 6);
      uVar4 = *(undefined1 *)((int)param_1 + 5);
      uVar5 = (undefined1)param_1[1];
      goto LAB_ram_42078066;
    }
    uVar15 = *(undefined4 *)(iVar12 + 0xec);
    uVar27 = 9;
    goto LAB_ram_42077ed0;
  }
  if (param_3 != 0xc0) {
    if (0xc0 < (int)param_3) {
      if (param_3 != 0xd0) {
        return;
      }
      DAT_ram_3fcc29f5 = DAT_ram_3fcc29f5 + '\x01';
      if ((*(byte *)(iVar23 + 1) & 0x40) == 0) {
        iVar14 = FUN_ram_420761be(*(undefined1 *)(iVar23 + 0x18));
        if (iVar14 != 0) {
          if (*(int **)(iVar12 + 0xec) == param_1) {
            return;
          }
          if (*(char *)((int)param_1 + 0x2f9) != '\0') {
            return;
          }
        }
        goto LAB_ram_42077bd6;
      }
      iVar14 = FUN_ram_420889aa(iVar23 + 10);
      if ((((*(byte *)(iVar23 + 1) & 3) == 0) && (iVar14 != 0)) &&
         (*(byte *)(iVar14 + 0xb9) == *(byte *)(iVar23 + 0x1b) >> 6)) {
        iVar12 = thunk_FUN_ram_420962da(_DAT_ram_3fcc4014 != iVar12);
        if (iVar12 == 0) {
          iVar12 = FUN_ram_4208cc5c(param_2);
          goto LAB_ram_420786d4;
        }
        iVar12 = *(int *)(gp + 100);
        *(byte **)(*(int *)(param_2 + 4) + 4) = pbVar32 + iVar12;
        *(short *)(param_2 + 0x16) =
             *(short *)(param_2 + 0x16) - ((short)*(undefined4 *)(gp + 0x68) + (short)iVar12);
      }
      else {
        if (*(char *)((int)param_1 + 0x2f9) == '\0') {
          return;
        }
        if ((param_1[3] & 1U) == 0) {
          return;
        }
        iVar12 = FUN_ram_4208cca2(param_2,*(undefined4 *)
                                           (&DAT_ram_3fcc4008 +
                                           (*(byte *)(param_1 + 0x4d) + 0x4c) * 4));
LAB_ram_420786d4:
        if (iVar12 != 0) {
          return;
        }
      }
      pbVar32 = *(byte **)(*(int *)(param_2 + 4) + 4);
      pbVar21 = pbVar32 + *(ushort *)(param_2 + 0x16);
LAB_ram_42077bd6:
      FUN_ram_4208d0a0(param_1,iVar23,pbVar32,pbVar21);
      return;
    }
    if (param_3 != 0xa0) {
      if (param_3 != 0xb0) {
        return;
      }
      DAT_ram_3fcc29f2 = DAT_ram_3fcc29f2 + '\x01';
      if (*(int *)(iVar12 + 0x98) != 5) {
        return;
      }
      iVar14 = FUN_ram_4039c0e0(iVar23 + 0x10,auStack_c4,6);
      if (iVar14 != 0) {
        return;
      }
      if (uVar31 < 6) {
        return;
      }
      uVar8 = *(ushort *)(iVar23 + 0x1a);
      uVar9 = *(undefined2 *)(iVar23 + 0x1c);
      if ((_DAT_ram_3fcc4020 & 0x4000000) != 0) {
        return;
      }
      if (*(short *)(iVar23 + 0x18) == 0) {
        FUN_ram_42076e8a(*(undefined4 *)(iVar12 + 0xec),iVar23,param_4,param_5,uVar8,uVar9);
        *(undefined1 *)(*(int *)(iVar12 + 0xec) + 0x2f7) = 0;
        return;
      }
      if (*(short *)(iVar23 + 0x18) != 3) {
        return;
      }
      if ((((*(byte *)(iVar23 + 1) & 8) != 0) &&
          (iVar14 = (*(code *)&SUB_ram_40011f9c)(iVar23 + 10), iVar14 != 0)) &&
         (*(byte *)(iVar14 + 0x3a4) == uVar8)) {
        FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fbc80,(ushort)*(byte *)(iVar14 + 0x3a4),iVar14);
        return;
      }
      if ((*(int **)(iVar12 + 0xec) == (int *)0x0) ||
         (iVar12 = **(int **)(iVar12 + 0xec), iVar12 == 0)) {
        FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe550,"e yourself an exit time before social plans.",
                         0x6a9);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if ((byte)(*(char *)(iVar12 + 0xa8) - 1U) < 2) {
        if (*(int *)(iVar12 + 0xb0) == 0) {
          return;
        }
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
        *(undefined4 *)(iVar12 + 0xb0) = 0;
        return;
      }
      if (((byte)(*(char *)(*(int *)(gp + -0xb4) + 0x3f4) - 6U) < 2) &&
         (*(char *)(*(int *)(gp + -0xb4) + 0x3fd) != '\0')) {
        iVar14 = (*(code *)&SUB_ram_40011f9c)(iVar23 + 10);
        if (iVar14 == 0) {
          if (uVar8 == 2) {
            return;
          }
          iVar14 = FUN_ram_42087770(iVar23 + 10);
          if (iVar14 == 0) {
            FUN_ram_4207a038(1,4,3,&DAT_ram_3c0ff80c);
            uVar15 = *(undefined4 *)(iVar12 + 0xec);
            uVar27 = 5;
            goto LAB_ram_42077ed0;
          }
          iVar12 = iVar14 + 0x13c;
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar12);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar12);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar12,0x420662ac,iVar14);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar12,2000,1);
        }
        else if (uVar8 == 1) {
          if ((*(uint *)(iVar14 + 0xc) & 1) == 0) {
            *(uint *)(iVar14 + 0xc) = *(uint *)(iVar14 + 0xc) & 0xfdffffff;
          }
          else {
            FUN_ram_4207a038(1,4,3,&DAT_ram_3c0ff824,*(undefined1 *)(iVar14 + 4),
                             *(undefined1 *)(iVar14 + 5),*(undefined1 *)(iVar14 + 6),
                             *(undefined1 *)(iVar14 + 7),*(undefined1 *)(iVar14 + 8),
                             *(undefined1 *)(iVar14 + 9));
            FUN_ram_4039c11e(&uStack_bc,iVar14 + 4,6);
            uStack_b6 = (undefined1)*(undefined2 *)(iVar14 + 0x26);
            uStack_b4 = 2;
            FUN_ram_4208344a(0xf,&uStack_bc,10);
            *(undefined1 *)(iVar14 + 0x2f9) = 0;
          }
        }
        *(char *)(iVar14 + 0x3a4) = (char)uVar8;
        *(int *)(iVar14 + 0x150) = _DAT_ram_6004d000;
        if (uVar8 == 1) {
          pcVar20 = *(code **)(_DAT_ram_3fcc4178 + 0x50);
          if (pcVar20 != (code *)0x0) {
            uVar27 = 1;
            goto LAB_ram_42077fd6;
          }
          puVar17 = &UNK_ram_3c0fe558;
        }
        else {
          if (uVar8 != 2) {
            return;
          }
          pcVar20 = *(code **)(_DAT_ram_3fcc4178 + 0x50);
          if (pcVar20 != (code *)0x0) {
            uVar27 = 2;
LAB_ram_42077fd6:
            iVar12 = (*pcVar20)(iVar23 + 0x1e,(int)pbVar21 - (iVar23 + 0x1e),uVar27,uVar9,iVar14 + 4
                               );
            if (iVar12 == 0) {
              return;
            }
            FUN_ram_4207a038(1,4,3,&DAT_ram_3c0ff864,*(undefined1 *)(iVar14 + 4),
                             *(undefined1 *)(iVar14 + 5),*(undefined1 *)(iVar14 + 6),
                             *(undefined1 *)(iVar14 + 7),*(undefined1 *)(iVar14 + 8),
                             *(undefined1 *)(iVar14 + 9));
            FUN_ram_42087eec(iVar14);
            return;
          }
          puVar17 = &DAT_ram_3c0fe578;
        }
        uVar27 = 1;
      }
      else {
        puVar17 = &DAT_ram_3c0fbc30;
        uVar27 = 4;
      }
      FUN_ram_4207a038(1,4,uVar27,puVar17);
      return;
    }
  }
  DAT_ram_3fcc29f4 = DAT_ram_3fcc29f4 + '\x01';
  if (*(int *)(iVar12 + 0x98) != 5) {
    return;
  }
  iVar14 = FUN_ram_4039c0e0(iVar23 + 4,auStack_c4,6);
  if (iVar14 != 0) {
    return;
  }
  cVar22 = '\0';
  if ((iVar12 == _DAT_ram_3fcc4018) && (cVar22 = *(char *)((int)param_1 + 0x2f9), cVar22 != '\0')) {
    if ((param_1[3] & 1U) == 0) {
      cVar22 = '\0';
    }
    else {
      if ((*(byte *)(iVar23 + 1) & 0x40) == 0) {
        uVar19 = *(undefined1 *)((int)param_1 + 9);
        puVar17 = &DAT_ram_3c0fbdb0;
        uVar6 = (undefined1)param_1[2];
        uVar2 = *(undefined1 *)((int)param_1 + 7);
        uVar3 = *(undefined1 *)((int)param_1 + 6);
        uVar4 = *(undefined1 *)((int)param_1 + 5);
        uVar5 = (undefined1)param_1[1];
LAB_ram_42078066:
        FUN_ram_4207a038(1,4,4,puVar17,uVar5,uVar4,uVar3,uVar2,uVar6,uVar19);
        return;
      }
      iVar12 = FUN_ram_4208cca2(param_2,*(undefined4 *)
                                         (&DAT_ram_3fcc4008 + (*(byte *)(param_1 + 0x4d) + 0x4c) * 4
                                         ));
      if (iVar12 != 0) {
        return;
      }
      pbVar32 = *(byte **)(*(int *)(param_2 + 4) + 4);
      pbVar21 = pbVar32 + *(ushort *)(param_2 + 0x16);
    }
  }
  if ((int)pbVar21 - (int)pbVar32 < 2) {
    return;
  }
  uVar9 = *(undefined2 *)pbVar32;
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fbe04,(char)param_1[1],*(undefined1 *)((int)param_1 + 5),
                   *(undefined1 *)((int)param_1 + 6),*(undefined1 *)((int)param_1 + 7),
                   (char)param_1[2],*(undefined1 *)((int)param_1 + 9),uVar9);
  *(undefined2 *)(param_1 + 0xec) = uVar9;
  FUN_ram_42087eec(param_1);
  if (cVar22 == '\0') {
    return;
  }
  if (DAT_ram_3fcc4260 == '\0') {
    return;
  }
  uVar15 = (*(code *)&SUB_ram_40011f9c)(&DAT_ram_3c0fab70);
  uVar27 = 6;
LAB_ram_42077ed0:
  FUN_ram_42075c60(uVar15,iVar23 + 10,uVar27);
  return;
}

