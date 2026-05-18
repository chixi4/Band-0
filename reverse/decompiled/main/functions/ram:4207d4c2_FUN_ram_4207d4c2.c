
undefined4 FUN_ram_4207d4c2(int param_1,undefined1 param_2,undefined1 param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *apuStack_24 [4];
  
  if (param_1 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe838,&DAT_ram_3c0c426c,0xbf3);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar3 = FUN_ram_4207503a(apuStack_24,0x18,6,param_1);
  if (iVar3 == 0) {
    FUN_ram_4207a038(1,0x400,2,
                     "AAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                    );
    uVar4 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x2f9) != '\0') {
      **(uint **)(iVar3 + 0x24) = **(uint **)(iVar3 + 0x24) | 1;
    }
    *apuStack_24[0] = param_2;
    apuStack_24[0][1] = param_3;
    uVar1 = *param_4;
    uVar2 = param_4[1];
    apuStack_24[0][2] = (char)uVar2;
    apuStack_24[0][3] = (byte)(((uint)uVar1 << 0xc) >> 8) | (byte)(uVar2 >> 8);
    apuStack_24[0][4] = (char)param_4[2];
    apuStack_24[0][5] = (char)(param_4[2] >> 8);
    apuStack_24[0] = apuStack_24[0] + 6;
    *(undefined4 *)(iVar3 + 0x14) = 0x60018;
    uVar4 = FUN_ram_4207d494(param_1);
  }
  return uVar4;
}

