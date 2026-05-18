
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42074d72(int *param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  byte bVar8;
  short sVar9;
  uint *puVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iStack_38;
  short *psStack_34;
  
  iVar14 = *param_1;
  iStack_38 = -1;
  iVar12 = (int)param_2 >> 0x10;
  uVar13 = param_2 & 0xffff;
  if (*(int *)(iVar14 + 0x120) == 0) {
    iVar4 = FUN_ram_4208937a();
    if ((iVar4 == 0) || (DAT_ram_3fcc41bc != '\x06')) {
      if ((*(int *)(iVar14 + 0x120) != 0) || (DAT_ram_3fcc41bc != '\b')) goto LAB_ram_42074e72;
      if (_DAT_ram_3fcc4244 == (ushort *)0x0) goto LAB_ram_42074eb0;
      DAT_ram_3fcc4238 = 1;
      iVar4 = *_DAT_ram_3fcc4244 + 6;
      sVar11 = 1;
LAB_ram_42074e6a:
      bVar2 = false;
    }
    else {
      if (iVar12 == 0) {
        iVar5 = (**(code **)(_DAT_ram_3fcc4178 + 0x48))
                          (param_1 + 1,uVar13,&iStack_38,6,6,*(code **)(_DAT_ram_3fcc4178 + 0x48));
        if (iVar5 != 0) {
          iVar4 = iStack_38 + 6;
          sVar11 = 0;
          bVar1 = false;
          bVar3 = false;
          uVar7 = 0x18;
          bVar2 = true;
          goto LAB_ram_42074e1a;
        }
        if (iStack_38 == -1) {
          FUN_ram_42089514(&DAT_ram_3fcc4004,0,0x100);
          return 0;
        }
        goto LAB_ram_42074eb0;
      }
      iVar4 = 6;
      sVar11 = 0;
      bVar2 = true;
    }
    bVar1 = false;
  }
  else {
LAB_ram_42074e72:
    if (uVar13 - 2 < 2) {
      if (*(int *)(iVar14 + 0xb0) != 0) {
        if (iVar12 == 0) {
          iVar4 = 0x88;
          uVar7 = 0x1c;
        }
        else {
          iVar4 = 6;
          uVar7 = 0x18;
        }
        sVar11 = 0;
        bVar2 = false;
        iVar5 = 0;
        bVar1 = true;
        bVar3 = true;
        goto LAB_ram_42074e1a;
      }
      if (uVar13 != 3) {
LAB_ram_42074eb0:
        iVar4 = 6;
        sVar11 = 0;
        goto LAB_ram_42074e6a;
      }
    }
    else if (uVar13 < 3) {
      if ((uVar13 != 1) || (DAT_ram_3fcc41bc != '\x02')) goto LAB_ram_42074eb0;
      bVar1 = true;
      iVar4 = 6;
      sVar11 = 0;
      bVar2 = false;
      goto LAB_ram_42074e6e;
    }
    iVar4 = 6;
    sVar11 = 0;
    bVar2 = false;
    bVar1 = true;
  }
LAB_ram_42074e6e:
  iVar5 = 0;
  uVar7 = 0x18;
  bVar3 = false;
LAB_ram_42074e1a:
  iVar4 = FUN_ram_42079edc(&psStack_34,uVar7,iVar4);
  if (iVar4 == 0) {
    FUN_ram_4207a038(1,0x40,2,
                     "LgAHXgEi/5WKAvwE///+VVX/6lVVqpVqpValVVb/9TIABAIAFf6mAWL6r///6VrjAlWVv///qgAJDwIACgIMBAJGAA8yABMy////PAQCXAQJwwEPAgAQBHoEDwIAFwuRAQ8CABABoBEPKAAQBgIACZEBVoAAAAC/HAACAgAb+BMAAY4JAhsAAjIAFAsNAAQCAAwyAAn8B1SAAAAAAioABAIACDIAIfQA8wQGawEvgACXAAAPMgALVAKqQAA/XQADAgANMgAILQFjgAf/9AAvKgAEAgAPMgABBfsAwoAH//0AH////r///nQBEfoyAAGoCiP6v8gACMUI8hWAB///AA/QA9Af/4AAL//4AP4AB//4AL4AB////QABv/0AAAAtAQSEAQQyAPIJAB/4AAAC//gA8AAA//gAsAAA///gAAAfMgAX/+UEAzIA9goCAB/gAAAAv/gAwAAAP/gAgAAAP/9AAAADMgAEyQADMgDzCgAAH4AAAAAv+ABAAAAP+AAAAAAv/gAAAAAyABbqggQEMgDzDQVvAAL4AA/4AAGkAAv4AAGgAA/8AB/wAL+gAKr7AAPJAAIsAfEM0AB//QAP/wAL+AAP/wAH+AAP/gAP9AC//AA/9AEBuQ0CSwEDkAH0CtAB//wAP//AA/gAL/+AA/gAP/9AC/AB//8yABP/pRK1////gAaqQAA/0AMyABF/OACif/+AC/AC//8AL2QAByUKAlgCw9AD//gAf//QAvgAvwYAh4AL4AFVVQAfMgACyQACvAIBMgBxv//gAvgA/wYAhb//wAvgAAAAMgACoRMT+jIAHwsyABAB/Qgj/+oyAB+/MgAQAbYLIq6qLAEo//8yAAKcAAGWABADIBkDyAAB+wABxgEHMgBBf//QAwYAAQABMcAL4JwDBDIAAZcACWQABJABET9eATG//8CQAQYyAAGXAAkyALP9AB//QAf4AB//ADIAJ/QAkAECWwIJMgDC/wAH/QAP+AAC+AALMgAx/AA/JgID4gkBvAUI+gBh/0AAAAAftgISDzIAkf0ABVAAv/QAFR0CAVsCCmQAJMAAGgMSLzIAkv8AAAAA//wAADIAAS4BCWQAgfAAAAH/+ADgWAO1v//AC//AAAAH//0yAAPtAwVeAZH//gAAC//4APi8AwEyAHT4AAAv//9AZAAS/2QABwIAgflW///4AP+VDAgBAgBx5Vv////5VQwAApcAAQgACQIAFfhRAA8CAAAW/voJBgIADzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb//..." /* TRUNCATED STRING LITERAL */
                    );
  }
  else {
    *(undefined2 *)(iVar4 + 0x14) = 0x18;
    sVar9 = 1;
    if ((!bVar1) && (sVar9 = 3, !bVar2)) {
      sVar9 = sVar11 << 1;
    }
    *(short *)((int)param_1 + 0x3b2) = sVar9;
    *psStack_34 = sVar9;
    psStack_34[1] = (short)param_2;
    if (((bVar2) && (DAT_ram_3fcc4250 != '\0')) && (uVar13 == 1)) {
      sVar9 = (DAT_ram_3fcc4251 != '\0') + 0x7e;
    }
    else {
      sVar9 = (short)(param_2 >> 0x10);
    }
    psStack_34[2] = sVar9;
    if ((bVar3) && (iVar12 == 0)) {
      uVar7 = *(undefined4 *)(iVar14 + 0xb0);
      psStack_34[3] = -0x7ff0;
      FUN_ram_4039c11e(psStack_34 + 4,uVar7,0x80);
      *(undefined2 *)(iVar4 + 0x16) = 0x88;
      *(int *)(*(int *)(iVar4 + 4) + 4) = *(int *)(*(int *)(iVar4 + 4) + 4) + 0x1c;
      pbVar6 = (byte *)(*(code *)&SUB_ram_40011ff4)(param_1,iVar4);
      *(int *)(*(int *)(iVar4 + 4) + 4) = *(int *)(*(int *)(iVar4 + 4) + 4) + -0x18;
      iVar12 = _DAT_ram_3fcc4018;
      puVar10 = *(uint **)(iVar4 + 0x24);
      if (pbVar6 == (byte *)0x0) {
        uVar13 = puVar10[4] & 0xfffff0ff;
      }
      else {
        *puVar10 = *puVar10 | 1;
        bVar8 = *pbVar6;
        if (iVar12 == iVar14) {
          bVar8 = bVar8 | 0x40;
        }
        *(byte *)(puVar10 + 4) = bVar8;
        uVar13 = puVar10[4] & 0xfffff0ff | (**(uint **)(pbVar6 + 0xa0) & 0xf) << 8;
      }
      puVar10[4] = uVar13;
    }
    else {
      *(undefined2 *)(iVar4 + 0x16) = 6;
    }
    iVar12 = iStack_38;
    if ((bVar2) && (iVar5 != 0)) {
      FUN_ram_4039c11e(psStack_34 + 3,iVar5,iStack_38);
      *(short *)(iVar4 + 0x16) = *(short *)(iVar4 + 0x16) + (short)iVar12;
    }
    if (sVar11 != 0) {
      FUN_ram_4039c11e(psStack_34 + 3,_DAT_ram_3fcc4244 + 1,*_DAT_ram_3fcc4244);
      *(ushort *)(iVar4 + 0x16) = *_DAT_ram_3fcc4244 + *(short *)(iVar4 + 0x16);
    }
  }
  return iVar4;
}

