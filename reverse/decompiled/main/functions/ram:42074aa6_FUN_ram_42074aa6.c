
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42074aa6(int *param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  ushort uVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined2 *puStack_24;
  
  if ((param_1 == (int *)0x0) || (iVar15 = *param_1, iVar15 == 0)) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe498,&DAT_ram_3c0c4114,0xf3c);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar3 = FUN_ram_420742c0(4);
  iVar4 = FUN_ram_42073a14(4);
  uVar12 = (uint)*(byte *)(iVar15 + 0x13d);
  if (uVar12 < 8) {
    uVar12 = uVar12 + 8 & 0xff;
  }
  else {
    if (uVar12 != 8) {
      uVar13 = uVar12 - 6 & 0xffff;
      uVar12 = 0x10;
      goto LAB_ram_42074b1a;
    }
    uVar12 = 0x10;
  }
  uVar13 = 0;
LAB_ram_42074b1a:
  iVar14 = 5;
  if (*(char *)(iVar15 + 0x210) == '\0') {
    iVar14 = 0;
  }
  uVar6 = 0;
  if (_DAT_ram_3fcc406c != (ushort *)0x0) {
    uVar6 = (uint)*_DAT_ram_3fcc406c;
  }
  uVar7 = 0;
  if (_DAT_ram_3fcc4034 != (ushort *)0x0) {
    uVar7 = (uint)*_DAT_ram_3fcc4034;
  }
  iVar10 = 0;
  if ((_DAT_ram_3fcc4098 != 0) && (*(int *)(_DAT_ram_3fcc4098 + 4) != 0)) {
    iVar10 = *(byte *)(_DAT_ram_3fcc4098 + 8) + 10;
  }
  iVar16 = 7;
  if (param_2 != 0x1e) {
    iVar16 = 0;
  }
  uVar12 = iVar16 + iVar10 + uVar7 + uVar6 + iVar14 + uVar12 + uVar13 + iVar3 + iVar4 + 100 & 0xffff
  ;
  iVar3 = FUN_ram_42079edc(&puStack_24,0x18,uVar12);
  if (iVar3 == 0) {
    FUN_ram_4207a038(1,0x40,2,
                     "f6kyAHFalVVVquVV/QcCLgAHXgEi/5WKAvwE///+VVX/6lVVqpVqpValVVb/9TIABAIAFf6mAWL6r///6VrjAlWVv///qgAJDwIACgIMBAJGAA8yABMy////PAQCXAQJwwEPAgAQBHoEDwIAFwuRAQ8CABABoBEPKAAQBgIACZEBVoAAAAC/HAACAgAb+BMAAY4JAhsAAjIAFAsNAAQCAAwyAAn8B1SAAAAAAioABAIACDIAIfQA8wQGawEvgACXAAAPMgALVAKqQAA/XQADAgANMgAILQFjgAf/9AAvKgAEAgAPMgABBfsAwoAH//0AH////r///nQBEfoyAAGoCiP6v8gACMUI8hWAB///AA/QA9Af/4AAL//4AP4AB//4AL4AB////QABv/0AAAAtAQSEAQQyAPIJAB/4AAAC//gA8AAA//gAsAAA///gAAAfMgAX/+UEAzIA9goCAB/gAAAAv/gAwAAAP/gAgAAAP/9AAAADMgAEyQADMgDzCgAAH4AAAAAv+ABAAAAP+AAAAAAv/gAAAAAyABbqggQEMgDzDQVvAAL4AA/4AAGkAAv4AAGgAA/8AB/wAL+gAKr7AAPJAAIsAfEM0AB//QAP/wAL+AAP/wAH+AAP/gAP9AC//AA/9AEBuQ0CSwEDkAH0CtAB//wAP//AA/gAL/+AA/gAP/9AC/AB//8yABP/pRK1////gAaqQAA/0AMyABF/OACif/+AC/AC//8AL2QAByUKAlgCw9AD//gAf//QAvgAvwYAh4AL4AFVVQAfMgACyQACvAIBMgBxv//gAvgA/wYAhb//wAvgAAAAMgACoRMT+jIAHwsyABAB/Qgj/+oyAB+/MgAQAbYLIq6qLAEo//8yAAKcAAGWABADIBkDyAAB+wABxgEHMgBBf//QAwYAAQABMcAL4JwDBDIAAZcACWQABJABET9eATG//8CQAQYyAAGXAAkyALP9AB//QAf4AB//ADIAJ/QAkAECWwIJMgDC/wAH/QAP+AAC+AALMgAx/AA/JgID4gkBvAUI+gBh/0AAAAAftgISDzIAkf0ABVAAv/QAFR0CAVsCCmQAJMAAGgMSLzIAkv8AAAAA//wAADIAAS4BCWQAgfAAAAH/+ADgWAO1v//AC//AAAAH//0yAAPtAwVeAZH//gAAC//4APi8AwEyAHT4AAAv//9AZAAS/2QABwIAgflW///4AP+VDAgBAgBx5Vv////5VQwAApcAAQgACQIAFfhRAA8CAAAW/voJBgIADzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIA..." /* TRUNCATED STRING LITERAL */
                     ,uVar12);
  }
  else {
    *(undefined2 *)(iVar3 + 0x14) = 0x18;
    uVar2 = (*(code *)&SUB_ram_40012130)(param_1);
    uVar8 = 0;
    *puStack_24 = uVar2;
    puStack_24[1] = (short)param_2;
    if (param_2 == 0) {
      uVar8 = *(undefined2 *)((int)param_1 + 0x26);
    }
    puStack_24[2] = uVar8;
    uVar5 = (*(code *)&SUB_ram_40012054)(puStack_24 + 3);
    puStack_24 = (undefined2 *)FUN_ram_42073fa4(uVar5,(int)param_1 + 0x73);
    if (((byte)(*(char *)(iVar15 + 0x13c) - 2U) < 2) &&
       ((byte)(*(char *)((int)param_1 + 0x31) - 2U) < 2)) {
      *(undefined1 *)puStack_24 = 0x2a;
      *(undefined1 *)((int)puStack_24 + 1) = 1;
      bVar11 = (byte)(_DAT_ram_3fcc4020 >> 0x13) & 2;
      if ((_DAT_ram_3fcc4020 & 0x200000) != 0) {
        bVar11 = bVar11 | 4;
      }
      *(byte *)(puStack_24 + 1) = bVar11;
      puStack_24 = (undefined2 *)((int)puStack_24 + 3);
    }
    if (((*(uint *)(iVar15 + 300) & 0x80000) != 0) && ((param_1[3] & 0x40U) != 0)) {
      puStack_24 = (undefined2 *)FUN_ram_4207d256(puStack_24,param_1);
      puStack_24 = (undefined2 *)FUN_ram_4207d3fc(puStack_24,param_1);
    }
    if ((*(char *)(iVar15 + 0x210) != '\0') &&
       (uVar1 = *(ushort *)((int)param_1 + 0x332), uVar1 != 0)) {
      uVar9 = *(ushort *)(iVar15 + 0x212);
      if (uVar1 < *(ushort *)(iVar15 + 0x212)) {
        uVar9 = uVar1;
      }
      *(ushort *)((int)param_1 + 0x332) = uVar9;
      puStack_24 = (undefined2 *)FUN_ram_420745f0(puStack_24,param_1);
    }
    puStack_24 = (undefined2 *)FUN_ram_4207414a(puStack_24,param_1);
    if (((*(uint *)(iVar15 + 0xa4) & 0x2000) != 0) && ((param_1[3] & 2U) != 0)) {
      puStack_24 = (undefined2 *)(*(code *)&SUB_ram_400120c0)(puStack_24,0);
    }
    if ((param_1[3] & 0xc0U) == 0xc0) {
      puStack_24 = (undefined2 *)FUN_ram_4207d294(puStack_24,param_1);
      puStack_24 = (undefined2 *)FUN_ram_4207d43a(puStack_24,param_1);
    }
    if (_DAT_ram_3fcc406c != (ushort *)0x0) {
      puStack_24 = (undefined2 *)FUN_ram_420739ea(puStack_24);
    }
    if (param_2 == 0x1e) {
      puStack_24 = (undefined2 *)FUN_ram_42073a4e(puStack_24,param_1);
    }
    puStack_24 = (undefined2 *)FUN_ram_4207406e(puStack_24,&DAT_ram_3fcc4004);
    if ((_DAT_ram_3fcc4098 != 0) && (*(int *)(_DAT_ram_3fcc4098 + 4) != 0)) {
      puStack_24 = (undefined2 *)
                   FUN_ram_4207b3d4(puStack_24,_DAT_ram_3fcc4098 + 1,*(int *)(_DAT_ram_3fcc4098 + 4)
                                    ,*(undefined1 *)(_DAT_ram_3fcc4098 + 8));
    }
    puStack_24 = (undefined2 *)(*(code *)&SUB_ram_400120bc)(puStack_24,4);
    puStack_24 = (undefined2 *)FUN_ram_4207423e(puStack_24,4);
    uVar13 = (int)puStack_24 - (*(int *)(*(int *)(iVar3 + 4) + 4) + (uint)*(ushort *)(iVar3 + 0x14))
    ;
    *(short *)(iVar3 + 0x16) = (short)(uVar13 * 0x10000 >> 0x10);
    if (uVar12 < (uVar13 & 0xffff)) {
      FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe4a0,&DAT_ram_3c0c4114,0xff6);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  return iVar3;
}

