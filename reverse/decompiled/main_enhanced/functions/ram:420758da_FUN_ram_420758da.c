
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_420758da(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,uint param_7,uint param_8)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ushort uVar13;
  uint *puVar14;
  int iVar15;
  undefined1 *apuStack_44 [4];
  
  iVar15 = _DAT_ram_3fcc4014;
  FUN_ram_420891ce();
  puVar2 = (undefined1 *)FUN_ram_42079324();
  iVar1 = 0;
  iVar3 = FUN_ram_420794ea(*puVar2);
  if ((iVar3 != 0) && ((*(uint *)(iVar3 + 8) & 0x80) != 0)) {
    iVar1 = 3;
  }
  iVar4 = FUN_ram_420742c0(1);
  iVar5 = FUN_ram_42073a14(1);
  uVar9 = (uint)*(byte *)(iVar15 + 0x13d);
  uVar7 = 10;
  if (uVar9 < 8) {
    uVar7 = uVar9 + 2 & 0xff;
  }
  iVar8 = 0;
  if (8 < uVar9) {
    iVar8 = uVar9 - 6;
  }
  uVar9 = 0;
  if (_DAT_ram_3fcc4064 != (ushort *)0x0) {
    uVar9 = (uint)*_DAT_ram_3fcc4064;
  }
  uVar10 = 0;
  if (_DAT_ram_3fcc4040 != (ushort *)0x0) {
    uVar10 = (uint)*_DAT_ram_3fcc4040;
  }
  uVar11 = 0;
  if (_DAT_ram_3fcc402c != (ushort *)0x0) {
    uVar11 = (uint)*_DAT_ram_3fcc402c;
  }
  iVar12 = 0;
  if ((_DAT_ram_3fcc408c != 0) && (*(int *)(_DAT_ram_3fcc408c + 4) != 0)) {
    iVar12 = *(byte *)(_DAT_ram_3fcc408c + 8) + 10;
  }
  iVar1 = FUN_ram_42079edc(apuStack_44,0x18,
                           iVar4 + iVar5 + iVar1 + 0x22 + uVar7 + iVar8 + uVar9 + uVar10 + uVar11 +
                           iVar12);
  if (iVar1 == 0) {
    uVar13 = 0;
    if (_DAT_ram_3fcc4064 != (ushort *)0x0) {
      uVar13 = *_DAT_ram_3fcc4064;
    }
    FUN_ram_4207a038(1,0x40,2,
                     "XqUkAYWValVVVWqVWhcFAgIAAzIABCYCcv//+VVVf6kyAHFalVVVquVV/QcCLgAHXgEi/5WKAvwE///+VVX/6lVVqpVqpValVVb/9TIABAIAFf6mAWL6r///6VrjAlWVv///qgAJDwIACgIMBAJGAA8yABMy////PAQCXAQJwwEPAgAQBHoEDwIAFwuRAQ8CABABoBEPKAAQBgIACZEBVoAAAAC/HAACAgAb+BMAAY4JAhsAAjIAFAsNAAQCAAwyAAn8B1SAAAAAAioABAIACDIAIfQA8wQGawEvgACXAAAPMgALVAKqQAA/XQADAgANMgAILQFjgAf/9AAvKgAEAgAPMgABBfsAwoAH//0AH////r///nQBEfoyAAGoCiP6v8gACMUI8hWAB///AA/QA9Af/4AAL//4AP4AB//4AL4AB////QABv/0AAAAtAQSEAQQyAPIJAB/4AAAC//gA8AAA//gAsAAA///gAAAfMgAX/+UEAzIA9goCAB/gAAAAv/gAwAAAP/gAgAAAP/9AAAADMgAEyQADMgDzCgAAH4AAAAAv+ABAAAAP+AAAAAAv/gAAAAAyABbqggQEMgDzDQVvAAL4AA/4AAGkAAv4AAGgAA/8AB/wAL+gAKr7AAPJAAIsAfEM0AB//QAP/wAL+AAP/wAH+AAP/gAP9AC//AA/9AEBuQ0CSwEDkAH0CtAB//wAP//AA/gAL/+AA/gAP/9AC/AB//8yABP/pRK1////gAaqQAA/0AMyABF/OACif/+AC/AC//8AL2QAByUKAlgCw9AD//gAf//QAvgAvwYAh4AL4AFVVQAfMgACyQACvAIBMgBxv//gAvgA/wYAhb//wAvgAAAAMgACoRMT+jIAHwsyABAB/Qgj/+oyAB+/MgAQAbYLIq6qLAEo//8yAAKcAAGWABADIBkDyAAB+wABxgEHMgBBf//QAwYAAQABMcAL4JwDBDIAAZcACWQABJABET9eATG//8CQAQYyAAGXAAkyALP9AB//QAf4AB//ADIAJ/QAkAECWwIJMgDC/wAH/QAP+AAC+AALMgAx/AA/JgID4gkBvAUI+gBh/0AAAAAftgISDzIAkf0ABVAAv/QAFR0CAVsCCmQAJMAAGgMSLzIAkv8AAAAA//wAADIAAS4BCWQAgfAAAAH/+ADgWAO1v//AC//AAAAH//0yAAPtAwVeAZH//gAAC//4APi8AwEyAHT4AAAv//9AZAAS/2QABwIAgflW///4AP+VDAgBAgBx5Vv////5VQwAApcAAQgACQIAFfhRAA8CAAAW/voJBgIADzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU///..." /* TRUNCATED STRING LITERAL */
                     ,uVar13);
    uVar6 = 1;
  }
  else {
    *(undefined2 *)(iVar1 + 0x14) = 0x18;
    iVar15 = iVar15 + 0x13d;
    *apuStack_44[0] = 0;
    apuStack_44[0][1] = (char)param_6;
    puVar2 = apuStack_44[0] + 2;
    if (param_6 != 0) {
      puVar2 = (undefined1 *)FUN_ram_4039c11e(puVar2,param_5,param_6);
    }
    uVar6 = (*(code *)&SUB_ram_40012054)(puVar2 + param_6,iVar15);
    apuStack_44[0] = (undefined1 *)FUN_ram_42073fa4(uVar6,iVar15);
    apuStack_44[0] = (undefined1 *)(*(code *)&SUB_ram_40012164)(apuStack_44[0],&DAT_ram_3fcc4004);
    if (_DAT_ram_3fcc4064 != (ushort *)0x0) {
      apuStack_44[0] = (undefined1 *)FUN_ram_420739ea();
    }
    if (_DAT_ram_3fcc4040 != (ushort *)0x0) {
      apuStack_44[0] = (undefined1 *)FUN_ram_420739ea(apuStack_44[0]);
    }
    apuStack_44[0] = (undefined1 *)FUN_ram_42073f82(apuStack_44[0],iVar3);
    if ((_DAT_ram_3fcc408c != 0) && (*(int *)(_DAT_ram_3fcc408c + 4) != 0)) {
      apuStack_44[0] =
           (undefined1 *)
           FUN_ram_4207b3d4(apuStack_44[0],_DAT_ram_3fcc408c + 1,*(int *)(_DAT_ram_3fcc408c + 4),
                            *(undefined1 *)(_DAT_ram_3fcc408c + 8));
    }
    apuStack_44[0] = (undefined1 *)(*(code *)&SUB_ram_400120bc)(apuStack_44[0],1);
    apuStack_44[0] = (undefined1 *)FUN_ram_4207423e(apuStack_44[0],1);
    puVar14 = *(uint **)(iVar1 + 4);
    uVar13 = *(ushort *)(iVar1 + 0x14);
    uVar7 = (int)apuStack_44[0] - (puVar14[1] + (uint)uVar13);
    *(short *)(iVar1 + 0x16) = (short)(uVar7 * 0x10000 >> 0x10);
    *puVar14 = *puVar14 | 0x80000000;
    *puVar14 = *puVar14 | 0x40000000;
    *puVar14 = *puVar14 & 0xdfffffff;
    *puVar14 = ((uint)uVar13 + (uVar7 & 0xffff) & 0xfff) << 0xc | *puVar14 & 0xff000fff;
    (*(code *)&SUB_ram_40012098)(param_1,iVar1,0x40,0x10,param_2,param_3,param_4);
    (*(code *)&SUB_ram_40011fc8)(param_1,iVar1,7,0x30,param_8);
    (*(code *)&SUB_ram_40012000)(iVar1,5);
    iVar15 = *(int *)(iVar1 + 0x24);
    *(uint *)(iVar15 + 0x10) = *(uint *)(iVar15 + 0x10) & 0xfffdffff | (param_8 & 1) << 0x11;
    *(int *)(iVar15 + 0x14) = 1 << (param_7 & 0x1f);
    uVar6 = (*(code *)&SUB_ram_40011ed8)(iVar1);
  }
  return uVar6;
}

