
undefined4 FUN_ram_4207d5a8(int param_1,undefined1 param_2,int param_3,undefined2 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *apuStack_24 [4];
  
  if (param_1 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe830,&DAT_ram_3c0c426c,0xbbe);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar2 = FUN_ram_4207503a(apuStack_24,0x18,9,param_1);
  if (iVar2 == 0) {
    if (param_3 == 1) {
      FUN_ram_4207bd06(param_1,(int)(uint)(ushort)param_4[2] >> 2 & 0xf);
    }
    FUN_ram_4207a038(1,0x400,2,
                     "BwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                    );
    uVar3 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x2f9) != '\0') {
      **(uint **)(iVar2 + 0x24) = **(uint **)(iVar2 + 0x24) | 1;
    }
    *apuStack_24[0] = param_2;
    apuStack_24[0][1] = (char)param_3;
    apuStack_24[0][2] = (char)*param_4;
    puVar1 = apuStack_24[0] + 3;
    if (param_3 == 1) {
      apuStack_24[0][3] = (char)param_4[1];
      apuStack_24[0][4] = (char)((ushort)param_4[1] >> 8);
      puVar1 = apuStack_24[0] + 5;
    }
    apuStack_24[0] = puVar1;
    *apuStack_24[0] = (char)param_4[2];
    apuStack_24[0][1] = (char)((ushort)param_4[2] >> 8);
    apuStack_24[0][2] = (char)param_4[3];
    apuStack_24[0][3] = (char)((ushort)param_4[3] >> 8);
    puVar1 = apuStack_24[0] + 4;
    if (param_3 == 0) {
      apuStack_24[0][4] = (char)param_4[4];
      apuStack_24[0][5] = (char)((ushort)param_4[4] >> 8);
      puVar1 = apuStack_24[0] + 6;
    }
    apuStack_24[0] = puVar1;
    *(undefined4 *)(iVar2 + 0x14) = 0x90018;
    if (param_3 == 1) {
      iVar4 = *(int *)(((ushort)param_4[2] & 0x3c) + param_1 + 0x268);
      if (iVar4 != 0) {
        *(int *)(iVar4 + 0x1c) = iVar2;
      }
      *(uint *)(*(int *)(iVar2 + 0x24) + 0x14) = *(uint *)(*(int *)(iVar2 + 0x24) + 0x14) | 0x800;
    }
    uVar3 = FUN_ram_4207d494(param_1);
  }
  return uVar3;
}

