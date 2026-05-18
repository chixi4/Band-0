
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42075684(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  
  uStack_2c = 0;
  if ((param_1 != (int *)0x0) && (iVar5 = *param_1, iVar5 != 0)) {
    (*(code *)&SUB_ram_40011fd0)(_DAT_ram_3fcc4014 != iVar5,auStack_28);
    iVar1 = FUN_ram_42079edc(&uStack_2c,0x18,0);
    if (iVar1 == 0) {
      FUN_ram_4207a038(1,0x40,2,
                       "+ValMgBR5VZVXqUkAYWValVVVWqVWhcFAgIAAzIABCYCcv//+VVVf6kyAHFalVVVquVV/QcCLgAHXgEi/5WKAvwE///+VVX/6lVVqpVqpValVVb/9TIABAIAFf6mAWL6r///6VrjAlWVv///qgAJDwIACgIMBAJGAA8yABMy////PAQCXAQJwwEPAgAQBHoEDwIAFwuRAQ8CABABoBEPKAAQBgIACZEBVoAAAAC/HAACAgAb+BMAAY4JAhsAAjIAFAsNAAQCAAwyAAn8B1SAAAAAAioABAIACDIAIfQA8wQGawEvgACXAAAPMgALVAKqQAA/XQADAgANMgAILQFjgAf/9AAvKgAEAgAPMgABBfsAwoAH//0AH////r///nQBEfoyAAGoCiP6v8gACMUI8hWAB///AA/QA9Af/4AAL//4AP4AB//4AL4AB////QABv/0AAAAtAQSEAQQyAPIJAB/4AAAC//gA8AAA//gAsAAA///gAAAfMgAX/+UEAzIA9goCAB/gAAAAv/gAwAAAP/gAgAAAP/9AAAADMgAEyQADMgDzCgAAH4AAAAAv+ABAAAAP+AAAAAAv/gAAAAAyABbqggQEMgDzDQVvAAL4AA/4AAGkAAv4AAGgAA/8AB/wAL+gAKr7AAPJAAIsAfEM0AB//QAP/wAL+AAP/wAH+AAP/gAP9AC//AA/9AEBuQ0CSwEDkAH0CtAB//wAP//AA/gAL/+AA/gAP/9AC/AB//8yABP/pRK1////gAaqQAA/0AMyABF/OACif/+AC/AC//8AL2QAByUKAlgCw9AD//gAf//QAvgAvwYAh4AL4AFVVQAfMgACyQACvAIBMgBxv//gAvgA/wYAhb//wAvgAAAAMgACoRMT+jIAHwsyABAB/Qgj/+oyAB+/MgAQAbYLIq6qLAEo//8yAAKcAAGWABADIBkDyAAB+wABxgEHMgBBf//QAwYAAQABMcAL4JwDBDIAAZcACWQABJABET9eATG//8CQAQYyAAGXAAkyALP9AB//QAf4AB//ADIAJ/QAkAECWwIJMgDC/wAH/QAP+AAC+AALMgAx/AA/JgID4gkBvAUI+gBh/0AAAAAftgISDzIAkf0ABVAAv/QAFR0CAVsCCmQAJMAAGgMSLzIAkv8AAAAA//wAADIAAS4BCWQAgfAAAAH/+ADgWAO1v//AC//AAAAH//0yAAPtAwVeAZH//gAAC//4APi8AwEyAHT4AAAv//9AZAAS/2QABwIAgflW///4AP+VDAgBAgBx5Vv////5VQwAApcAAQgACQIAFfhRAA8CAAAW/voJBgIADzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIA..." /* TRUNCATED STRING LITERAL */
                      );
      uVar2 = 1;
    }
    else {
      iVar4 = *(int *)(*(int *)(iVar1 + 4) + 4);
      (*(code *)&SUB_ram_40010488)(iVar4,0,0x18);
      puVar3 = *(uint **)(iVar1 + 4);
      *(undefined4 *)(iVar1 + 0x14) = 0x18;
      *puVar3 = *puVar3 | 0x80000000;
      *puVar3 = *puVar3 | 0x40000000;
      *puVar3 = *puVar3 & 0xdfffffff;
      *puVar3 = *puVar3 & 0xff000fff | 0x18000;
      uVar2 = FUN_ram_420923f6(1);
      (*(code *)&SUB_ram_40012098)(param_1,iVar1,0x48,0x10,uVar2,iVar5 + 0x9c,auStack_28);
      (*(code *)&SUB_ram_40011fc8)(param_1,iVar1,7,8,0);
      *(byte *)(iVar4 + 1) = *(byte *)(iVar4 + 1) & 0xef;
      iVar5 = (*(code *)&SUB_ram_40011f94)();
      if (iVar5 == 0) {
        *(undefined4 *)(iVar1 + 0x20) = 0;
        uVar2 = 0;
        *_DAT_ram_3fcc416c = iVar1;
        _DAT_ram_3fcc416c = (int *)(iVar1 + 0x20);
      }
      else {
        uVar2 = (*(code *)&SUB_ram_40011ed8)(iVar1);
      }
    }
    return uVar2;
  }
  FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe430,&DAT_ram_3c0c4114,0x6d7);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

