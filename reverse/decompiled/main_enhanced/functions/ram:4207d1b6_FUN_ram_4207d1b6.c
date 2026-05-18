
void FUN_ram_4207d1b6(int param_1,char *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe7d8,&DAT_ram_3c0c426c,0x9fa);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*param_2 == -0x23) {
    param_2 = param_2 + 4;
  }
  bVar1 = *(byte *)(param_1 + 0x163);
  uVar3 = 0;
  if (bVar1 != 0) {
    do {
      if (((int)(uint)(byte)param_2[((int)uVar3 >> 3) + 8] >> (uVar3 & 7) & 1U) != 0) {
        pbVar2 = (byte *)(param_1 + 0x164);
        do {
          if ((*pbVar2 & 0x7f) == uVar3) {
            *pbVar2 = *pbVar2 | 0x80;
          }
          pbVar2 = pbVar2 + 1;
        } while ((int)(pbVar2 + (-0x164 - param_1)) < (int)(uint)bVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x7f);
    return;
  }
  FUN_ram_4207a038(1,0x20,2,
                   "AR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                  );
  return;
}

