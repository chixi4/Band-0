
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420777ba(int param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  
  iVar1 = (*(code *)&SUB_ram_40011f98)();
  if (iVar1 == 0) {
    FUN_ram_4207a038(1,0x10004,2,
                     "+AAP/wAH+AAP/gAP9AC//AA/9AEBuQ0CSwEDkAH0CtAB//wAP//AA/gAL/+AA/gAP/9AC/AB//8yABP/pRK1////gAaqQAA/0AMyABF/OACif/+AC/AC//8AL2QAByUKAlgCw9AD//gAf//QAvgAvwYAh4AL4AFVVQAfMgACyQACvAIBMgBxv//gAvgA/wYAhb//wAvgAAAAMgACoRMT+jIAHwsyABAB/Qgj/+oyAB+/MgAQAbYLIq6qLAEo//8yAAKcAAGWABADIBkDyAAB+wABxgEHMgBBf//QAwYAAQABMcAL4JwDBDIAAZcACWQABJABET9eATG//8CQAQYyAAGXAAkyALP9AB//QAf4AB//ADIAJ/QAkAECWwIJMgDC/wAH/QAP+AAC+AALMgAx/AA/JgID4gkBvAUI+gBh/0AAAAAftgISDzIAkf0ABVAAv/QAFR0CAVsCCmQAJMAAGgMSLzIAkv8AAAAA//wAADIAAS4BCWQAgfAAAAH/+ADgWAO1v//AC//AAAAH//0yAAPtAwVeAZH//gAAC//4APi8AwEyAHT4AAAv//9AZAAS/2QABwIAgflW///4AP+VDAgBAgBx5Vv////5VQwAApcAAQgACQIAFfhRAA8CAAAW/voJBgIADzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                    );
    return;
  }
  if (*(int *)(param_1 + 0x300) == 0) {
    FUN_ram_4207a038(1,0x40,3,&DAT_ram_3c0ff8e8,*(undefined1 *)(param_1 + 4),
                     *(undefined1 *)(param_1 + 5),*(undefined1 *)(param_1 + 6),
                     *(undefined1 *)(param_1 + 7),*(undefined1 *)(param_1 + 8),
                     *(undefined1 *)(param_1 + 9));
    *(undefined1 *)(param_1 + 0x2fa) = 1;
    iVar1 = param_1 + 0x318;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar1);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar1);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar1,0x420662c0,param_1);
    iVar3 = param_1 + 0x304;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar1,0x400,0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar3);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar3);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar3,0x420662b6,param_1);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar3,200,1);
  }
  if (*(int *)(param_1 + 0x300) == 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x13c))(param_1 + 0x2fc,2);
    uVar2 = *(ushort *)(param_1 + 0x2fc) % 0xfff5;
  }
  else {
    if (*(int *)(param_1 + 0x300) == 10) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_1 + 0x318);
      FUN_ram_420776f2(param_1);
      return;
    }
    uVar2 = *(short *)(param_1 + 0x2fc) + 1;
  }
  *(ushort *)(param_1 + 0x2fc) = uVar2;
  FUN_ram_4208cfae(param_1,8,0,param_1 + 0x2fc);
  *(int *)(param_1 + 0x300) = *(int *)(param_1 + 0x300) + 1;
  return;
}

