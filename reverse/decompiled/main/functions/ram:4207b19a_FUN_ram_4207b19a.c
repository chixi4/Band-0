
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207b19a(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_2c [12];
  int iStack_20;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((iVar1 != 0) && (0x13 < *(byte *)(iVar1 + 1))) {
    if ((_DAT_ram_3fcc4234 == 0) || (*(code **)(_DAT_ram_3fcc4234 + 4) == (code *)0x0)) {
      FUN_ram_4207a038(1,0x80,2,
                       "/8CQAQYyAAGXAAkyALP9AB//QAf4AB//ADIAJ/QAkAECWwIJMgDC/wAH/QAP+AAC+AALMgAx/AA/JgID4gkBvAUI+gBh/0AAAAAftgISDzIAkf0ABVAAv/QAFR0CAVsCCmQAJMAAGgMSLzIAkv8AAAAA//wAADIAAS4BCWQAgfAAAAH/+ADgWAO1v//AC//AAAAH//0yAAPtAwVeAZH//gAAC//4APi8AwEyAHT4AAAv//9AZAAS/2QABwIAgflW///4AP+VDAgBAgBx5Vv////5VQwAApcAAQgACQIAFfhRAA8CAAAW/voJBgIADzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                      );
    }
    else {
      uVar2 = *(byte *)(iVar1 + 1) + 2;
      iVar1 = (**(code **)(_DAT_ram_3fcc4234 + 4))(iVar1,uVar2 & 0xff,auStack_2c);
      if (iVar1 == 0) {
        if ((_DAT_ram_3fcc4234 != 0) && (*(code **)(_DAT_ram_3fcc4234 + 0xc) != (code *)0x0)) {
          (**(code **)(_DAT_ram_3fcc4234 + 0xc))(*(undefined4 *)(param_1 + 0x38),uVar2);
        }
        DAT_ram_3fcc41c0 = 10;
        DAT_ram_3fcc41be = 10;
        DAT_ram_3fcc41bc = 7;
        if (iStack_20 != 0x1000) {
          DAT_ram_3fcc41bc = 7;
          DAT_ram_3fcc41be = 10;
          DAT_ram_3fcc41c0 = 10;
          return 1;
        }
        DAT_ram_3fcc41bd = 0xb;
        *(undefined1 *)(param_1 + 0x60) = 8;
        return 1;
      }
    }
  }
  return 0;
}

