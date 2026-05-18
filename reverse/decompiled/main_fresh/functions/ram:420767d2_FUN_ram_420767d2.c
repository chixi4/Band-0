
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420767d2(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [12];
  char cStack_48;
  
  iVar7 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(gp + -0xb4);
  uVar8 = *(undefined4 *)(iVar7 + 0xec);
  FUN_ram_42076798();
  iVar5 = _DAT_ram_3fcc4018;
  bVar1 = *(byte *)(*(int *)(gp + -0xb4) + 0x3f4);
  if (bVar1 < 5) {
    if (bVar1 < 2) goto LAB_ram_4207686e;
  }
  else if (1 < (byte)(bVar1 - 6)) goto LAB_ram_4207686e;
  if (_DAT_ram_3fcc4018 != 0) {
    iVar4 = *(int *)(_DAT_ram_3fcc4018 + 0xec);
    *(uint *)(_DAT_ram_3fcc4018 + 0xa4) = *(uint *)(_DAT_ram_3fcc4018 + 0xa4) | 0x10;
    *(undefined1 *)(iVar5 + 0xa8) = 3;
    *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) | 1;
  }
  if (_DAT_ram_3fcc4178 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe5c0,"e yourself an exit time before social plans.",
                     0x1c8);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*(int *)(iVar5 + 0x124) != 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe5c8,"e yourself an exit time before social plans.",
                     0x1c9);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar3 = (**(code **)(_DAT_ram_3fcc4178 + 0x1c))();
  *(undefined4 *)(iVar5 + 0x124) = uVar3;
LAB_ram_4207686e:
  (*(code *)&SUB_ram_40011fd0)(1,auStack_5c);
  FUN_ram_42079958(iVar7 + 0x104);
  *(undefined2 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(iVar7 + 0x98) = 5;
  thunk_FUN_ram_42092c00(0x420661ec,4,0);
  thunk_FUN_ram_42092c00(0x42066372,10,0);
  if (DAT_ram_3fcc2740 == '\0') {
    DAT_ram_3fcc2741 = 0;
    _DAT_ram_3fcc2738 = FUN_ram_42075da0(uVar8,auStack_54);
    DAT_ram_3fcc2741 = 1;
    _DAT_ram_3fcc273c = FUN_ram_42075da0(uVar8,auStack_54);
    DAT_ram_3fcc2740 = '\x01';
    iVar5 = *(int *)(*(int *)(&DAT_ram_3fcc2738 + (uint)DAT_ram_3fcc2741 * 4) + 4);
    if ((**(uint **)(*(int *)(&DAT_ram_3fcc2738 + (uint)DAT_ram_3fcc2741 * 4) + 0x24) & 0x40000) ==
        0) {
      cVar6 = (char)*(undefined4 *)(iVar5 + 4) + '\x18';
    }
    else {
      cVar6 = (char)*(undefined4 *)(iVar5 + 4) + ' ';
    }
    DAT_ram_3fcc275c = (cStack_48 - cVar6) - (char)*(undefined4 *)(iVar2 + 0x368);
  }
  if ((_DAT_ram_3fcc2738 == 0) || (_DAT_ram_3fcc273c == 0)) {
    FUN_ram_4207a038(1,0x20040,2,
                     "8wQGawEvgACXAAAPMgALVAKqQAA/XQADAgANMgAILQFjgAf/9AAvKgAEAgAPMgABBfsAwoAH//0AH////r///nQBEfoyAAGoCiP6v8gACMUI8hWAB///AA/QA9Af/4AAL//4AP4AB//4AL4AB////QABv/0AAAAtAQSEAQQyAPIJAB/4AAAC//gA8AAA//gAsAAA///gAAAfMgAX/+UEAzIA9goCAB/gAAAAv/gAwAAAP/gAgAAAP/9AAAADMgAEyQADMgDzCgAAH4AAAAAv+ABAAAAP+AAAAAAv/gAAAAAyABbqggQEMgDzDQVvAAL4AA/4AAGkAAv4AAGgAA/8AB/wAL+gAKr7AAPJAAIsAfEM0AB//QAP/wAL+AAP/wAH+AAP/gAP9AC//AA/9AEBuQ0CSwEDkAH0CtAB//wAP//AA/gAL/+AA/gAP/9AC/AB//8yABP/pRK1////gAaqQAA/0AMyABF/OACif/+AC/AC//8AL2QAByUKAlgCw9AD//gAf//QAvgAvwYAh4AL4AFVVQAfMgACyQACvAIBMgBxv//gAvgA/wYAhb//wAvgAAAAMgACoRMT+jIAHwsyABAB/Qgj/+oyAB+/MgAQAbYLIq6qLAEo//8yAAKcAAGWABADIBkDyAAB+wABxgEHMgBBf//QAwYAAQABMcAL4JwDBDIAAZcACWQABJABET9eATG//8CQAQYyAAGXAAkyALP9AB//QAf4AB//ADIAJ/QAkAECWwIJMgDC/wAH/QAP+AAC+AALMgAx/AA/JgID4gkBvAUI+gBh/0AAAAAftgISDzIAkf0ABVAAv/QAFR0CAVsCCmQAJMAAGgMSLzIAkv8AAAAA//wAADIAAS4BCWQAgfAAAAH/+ADgWAO1v//AC//AAAAH//0yAAPtAwVeAZH//gAAC//4APi8AwEyAHT4AAAv//9AZAAS/2QABwIAgflW///4AP+VDAgBAgBx5Vv////5VQwAApcAAQgACQIAFfhRAA8CAAAW/voJBgIADzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1..." /* TRUNCATED STRING LITERAL */
                    );
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc2720);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc2720);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(0x3fcc2720,0x420662a2,0);
  thunk_FUN_ram_42094d80();
  _DAT_ram_3fcc2714 = thunk_FUN_ram_42094d8a();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(0x3fcc2720,_DAT_ram_3fcc2714,0);
  return;
}

