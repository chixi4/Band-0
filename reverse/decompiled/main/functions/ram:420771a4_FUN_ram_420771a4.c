
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420771a4(void)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  
  iVar6 = _DAT_ram_3fcc4018;
  iVar9 = _DAT_ram_3fcc4014;
  if (_DAT_ram_3fcc4018 == 0) {
    return 0x3007;
  }
  if ((*(byte *)(_DAT_ram_3fcc4018 + 0x129) & 1) != 0) {
    return 0;
  }
  uVar10 = (uint)DAT_ram_3fcc4198;
  if ((DAT_ram_3fcc271c & 1) != 0) {
    DAT_ram_3fcc271c = DAT_ram_3fcc271c | 2;
    return 0;
  }
  if (*(int *)(*(int *)(gp + -0xb4) + 0x368) + 1U < 2) {
    FUN_ram_4207e956(0);
  }
  thunk_FUN_ram_42094d76((*(ushort *)(*(int *)(gp + -0xb4) + 0x3f8) / 100) * 0x19000);
  FUN_ram_420925f0(1,0,&DAT_ram_3fcc41c8,1,(int)uVar10 >> 5 & 1,DAT_ram_3fcc4194);
  if ((*(uint *)(*(int *)(gp + -0xb4) + 0x3fc) & 0xffff00) == 0) {
    *(undefined1 *)(*(int *)(iVar6 + 0xec) + 0x2f9) = 0;
  }
  else {
    *(undefined1 *)(*(int *)(iVar6 + 0xec) + 0x2f9) = 1;
  }
  bVar8 = true;
  if (iVar9 != 0) {
    bVar8 = *(uint *)(iVar9 + 0x98) < 2;
  }
  iVar7 = FUN_ram_42079402();
  if (!bVar8) {
    uVar3 = *(undefined1 *)(iVar9 + 0x12a);
    *(undefined1 *)(iVar6 + 299) = 0;
    *(undefined1 *)(iVar6 + 0x12a) = uVar3;
    if (iVar7 == 1) {
      cVar1 = DAT_ram_3fcc425e;
      cVar2 = DAT_ram_3fcc4264;
      if (iVar6 == _DAT_ram_3fcc4018) {
        cVar1 = DAT_ram_3fcc425a;
        cVar2 = DAT_ram_3fcc4262;
      }
    }
    else {
      cVar1 = DAT_ram_3fcc425f;
      cVar2 = DAT_ram_3fcc4265;
      if (iVar6 == _DAT_ram_3fcc4018) {
        cVar1 = DAT_ram_3fcc425b;
        cVar2 = DAT_ram_3fcc4263;
      }
    }
    if ((cVar2 == '\x03') && (cVar1 == '\x02')) {
      if (*(char *)(iVar9 + 299) == '\0') {
        FUN_ram_420793da(iVar6 + 0x12a);
      }
      else {
        *(char *)(iVar6 + 299) = *(char *)(iVar9 + 299);
      }
    }
    goto LAB_ram_42077382;
  }
  iVar9 = *(int *)(gp + -0xb4);
  if (iVar7 == 1) {
    cVar1 = *(char *)(iVar9 + 0x3f3);
  }
  else {
    cVar1 = *(char *)(iVar9 + 0x508);
  }
  *(char *)(iVar6 + 0x12a) = cVar1;
  if (iVar7 == 1) {
    cVar2 = DAT_ram_3fcc425e;
    cVar5 = DAT_ram_3fcc4264;
    if (_DAT_ram_3fcc4018 == iVar6) {
      cVar2 = DAT_ram_3fcc425a;
      cVar5 = DAT_ram_3fcc4262;
    }
    if ((cVar5 != '\x03') || (cVar2 != '\x02')) goto LAB_ram_42077368;
    cVar2 = *(char *)(iVar9 + 0x3fc);
LAB_ram_420772ba:
    *(char *)(iVar6 + 299) = '\x02' - (cVar2 == '\x01');
    if (cVar1 == '\x0e') goto LAB_ram_420772d0;
LAB_ram_420772fa:
    iVar9 = FUN_ram_4208bb92(*(undefined1 *)(iVar6 + 0x12a));
    if (iVar9 == 0) {
      *(undefined1 *)(iVar6 + 299) = 0;
      FUN_ram_4207a038(1,0x4001,2,
                       "MgDzDQVvAAL4AA/4AAGkAAv4AAGgAA/8AB/wAL+gAKr7AAPJAAIsAfEM0AB//QAP/wAL+AAP/wAH+AAP/gAP9AC//AA/9AEBuQ0CSwEDkAH0CtAB//wAP//AA/gAL/+AA/gAP/9AC/AB//8yABP/pRK1////gAaqQAA/0AMyABF/OACif/+AC/AC//8AL2QAByUKAlgCw9AD//gAf//QAvgAvwYAh4AL4AFVVQAfMgACyQACvAIBMgBxv//gAvgA/wYAhb//wAvgAAAAMgACoRMT+jIAHwsyABAB/Qgj/+oyAB+/MgAQAbYLIq6qLAEo//8yAAKcAAGWABADIBkDyAAB+wABxgEHMgBBf//QAwYAAQABMcAL4JwDBDIAAZcACWQABJABET9eATG//8CQAQYyAAGXAAkyALP9AB//QAf4AB//ADIAJ/QAkAECWwIJMgDC/wAH/QAP+AAC+AALMgAx/AA/JgID4gkBvAUI+gBh/0AAAAAftgISDzIAkf0ABVAAv/QAFR0CAVsCCmQAJMAAGgMSLzIAkv8AAAAA//wAADIAAS4BCWQAgfAAAAH/+ADgWAO1v//AC//AAAAH//0yAAPtAwVeAZH//gAAC//4APi8AwEyAHT4AAAv//9AZAAS/2QABwIAgflW///4AP+VDAgBAgBx5Vv////5VQwAApcAAQgACQIAFfhRAA8CAAAW/voJBgIADzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                      );
    }
  }
  else {
    cVar2 = DAT_ram_3fcc425f;
    cVar5 = DAT_ram_3fcc4265;
    if (_DAT_ram_3fcc4018 == iVar6) {
      cVar2 = DAT_ram_3fcc425b;
      cVar5 = DAT_ram_3fcc4263;
    }
    if ((cVar5 == '\x03') && (cVar2 == '\x02')) {
      cVar2 = *(char *)(iVar9 + 0x507);
      goto LAB_ram_420772ba;
    }
LAB_ram_42077368:
    *(undefined1 *)(iVar6 + 299) = 0;
    if (cVar1 == '\x0e') {
LAB_ram_420772d0:
      *(undefined1 *)(iVar6 + 0x13c) = 1;
      *(undefined1 *)(iVar6 + 299) = 0;
      FUN_ram_42079058(iVar6,1,1);
      FUN_ram_4207c1cc(iVar6);
      FUN_ram_42080070(1,1,1);
      if (*(char *)(iVar6 + 299) != '\0') goto LAB_ram_420772fa;
    }
  }
  FUN_ram_42079418();
  FUN_ram_42079510(iVar6 + 0x12a);
LAB_ram_42077382:
  if ((_DAT_ram_3fcc3018 & 0x100) != 0) {
    iVar9 = *(int *)(gp + -0xb4);
    sVar4 = *(short *)(iVar9 + 0x50e);
    *(bool *)(iVar6 + 0x210) = sVar4 != 0;
    *(short *)(iVar6 + 0x212) = sVar4;
    bVar8 = false;
    if ((*(char *)(iVar9 + 0x510) != '\0') && (sVar4 != 0)) {
      bVar8 = *(char *)(iVar9 + 0x3f4) != '\0';
    }
    *(bool *)(iVar6 + 0x211) = bVar8;
  }
  FUN_ram_420767d2(&DAT_ram_3fcc4004);
  *(undefined1 *)(gp + -400) = 0;
  *(byte *)(iVar6 + 0x129) = *(byte *)(iVar6 + 0x129) | 1;
  _DAT_ram_3fcc2744 = 0;
  _DAT_ram_3fcc274c = 0;
  _DAT_ram_3fcc2748 = &DAT_ram_3fcc2744;
  _DAT_ram_3fcc2750 = 0;
  _DAT_ram_3fcc2758 = 0;
  _DAT_ram_3fcc2754 = &DAT_ram_3fcc2750;
  FUN_ram_4208344a(0xc,0,0);
  return 0;
}

