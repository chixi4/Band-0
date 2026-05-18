
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42075da0(int *param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  undefined4 local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined1 auStack_28 [12];
  
  uStack_38 = 0xffffffff;
  uStack_34 = 0xffff;
  iStack_3c = 0;
  iVar10 = *(int *)(gp + -0xb4);
  if ((param_1 != (int *)0x0) && (iVar9 = *param_1, iVar9 != 0)) {
    puVar4 = (undefined1 *)FUN_ram_4207940a();
    iVar3 = 0;
    iVar5 = FUN_ram_420794ea(*puVar4);
    if ((iVar5 != 0) && ((*(uint *)(iVar5 + 8) & 0x80) != 0)) {
      iVar3 = 3;
    }
    if (*(int *)(iVar9 + 0x124) != 0) {
      (**(code **)(_DAT_ram_3fcc4178 + 0x2c))(&iStack_3c);
    }
    uVar7 = (uint)*(byte *)(iVar9 + 0x13d);
    uVar6 = 10;
    if (uVar7 < 8) {
      uVar6 = uVar7 + 2 & 0xff;
    }
    iVar9 = 0;
    if (8 < uVar7) {
      iVar9 = uVar7 - 6;
    }
    iVar5 = 0;
    if ((DAT_ram_3fcc41a7 == '\x01') && (DAT_ram_3fcc41a8 != '\0')) {
      iVar5 = 5;
    }
    uVar7 = 0;
    if (_DAT_ram_3fcc423c != (ushort *)0x0) {
      uVar7 = (uint)*_DAT_ram_3fcc423c;
    }
    iVar10 = iVar5 + iVar9 + iStack_3c + 0xa1 + *(int *)(iVar10 + 0x368) + iVar3 + uVar6 + uVar7;
    if ((_DAT_ram_3fcc4088 != 0) && (*(int *)(_DAT_ram_3fcc4088 + 4) != 0)) {
      iVar10 = iVar10 + *(byte *)(_DAT_ram_3fcc4088 + 8) + 10;
    }
    iVar3 = FUN_ram_420742c0(0);
    iVar9 = FUN_ram_42073a14(0);
    iVar9 = iVar10 + iVar3 + iVar9;
    iVar10 = FUN_ram_42079f38(&local_40,0x18,iVar9);
    if (iVar10 == 0) {
      FUN_ram_4207a038(1,0x40,2,
                       "v///qgAJDwIACgIMBAJGAA8yABMy////PAQCXAQJwwEPAgAQBHoEDwIAFwuRAQ8CABABoBEPKAAQBgIACZEBVoAAAAC/HAACAgAb+BMAAY4JAhsAAjIAFAsNAAQCAAwyAAn8B1SAAAAAAioABAIACDIAIfQA8wQGawEvgACXAAAPMgALVAKqQAA/XQADAgANMgAILQFjgAf/9AAvKgAEAgAPMgABBfsAwoAH//0AH////r///nQBEfoyAAGoCiP6v8gACMUI8hWAB///AA/QA9Af/4AAL//4AP4AB//4AL4AB////QABv/0AAAAtAQSEAQQyAPIJAB/4AAAC//gA8AAA//gAsAAA///gAAAfMgAX/+UEAzIA9goCAB/gAAAAv/gAwAAAP/gAgAAAP/9AAAADMgAEyQADMgDzCgAAH4AAAAAv+ABAAAAP+AAAAAAv/gAAAAAyABbqggQEMgDzDQVvAAL4AA/4AAGkAAv4AAGgAA/8AB/wAL+gAKr7AAPJAAIsAfEM0AB//QAP/wAL+AAP/wAH+AAP/gAP9AC//AA/9AEBuQ0CSwEDkAH0CtAB//wAP//AA/gAL/+AA/gAP/9AC/AB//8yABP/pRK1////gAaqQAA/0AMyABF/OACif/+AC/AC//8AL2QAByUKAlgCw9AD//gAf//QAvgAvwYAh4AL4AFVVQAfMgACyQACvAIBMgBxv//gAvgA/wYAhb//wAvgAAAAMgACoRMT+jIAHwsyABAB/Qgj/+oyAB+/MgAQAbYLIq6qLAEo//8yAAKcAAGWABADIBkDyAAB+wABxgEHMgBBf//QAwYAAQABMcAL4JwDBDIAAZcACWQABJABET9eATG//8CQAQYyAAGXAAkyALP9AB//QAf4AB//ADIAJ/QAkAECWwIJMgDC/wAH/QAP+AAC+AALMgAx/AA/JgID4gkBvAUI+gBh/0AAAAAftgISDzIAkf0ABVAAv/QAFR0CAVsCCmQAJMAAGgMSLzIAkv8AAAAA//wAADIAAS4BCWQAgfAAAAH/+ADgWAO1v//AC//AAAAH//0yAAPtAwVeAZH//gAAC//4APi8AwEyAHT4AAAv//9AZAAS/2QABwIAgflW///4AP+VDAgBAgBx5Vv////5VQwAApcAAQgACQIAFfhRAA8CAAAW/voJBgIADzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D..." /* TRUNCATED STRING LITERAL */
                       ,iVar9);
    }
    else {
      *(undefined2 *)(iVar10 + 0x14) = 0x18;
      FUN_ram_4207543c(iVar10,local_40,param_2,param_1);
      uVar1 = *(ushort *)(iVar10 + 0x16);
      if (iVar9 < (int)(uint)uVar1) {
        FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe4d0,&DAT_ram_3c0c4114,0x15f8);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar8 = *(uint **)(iVar10 + 4);
      uVar2 = *(ushort *)(iVar10 + 0x14);
      *puVar8 = *puVar8 | 0x80000000;
      *puVar8 = *puVar8 | 0x40000000;
      *puVar8 = *puVar8 & 0xdfffffff;
      *puVar8 = ((uint)uVar1 + (uint)uVar2 & 0xfff) << 0xc | *puVar8 & 0xff000fff;
      uStack_30 = uStack_38;
      uStack_2c = uStack_34;
      (*(code *)&SUB_ram_40011fd0)(1,auStack_28);
      (*(code *)&SUB_ram_40012098)(param_1,iVar10,0x80,0x10,auStack_28,&uStack_30);
      (*(code *)&SUB_ram_40011fc8)(param_1,iVar10,7,0x10,0);
      (*(code *)&SUB_ram_40012000)(iVar10,4);
      *(undefined4 *)(*(int *)(iVar10 + 0x24) + 0x14) = 0x10;
    }
    return iVar10;
  }
  FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe4c8,&DAT_ram_3c0c4114,0x1573);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

