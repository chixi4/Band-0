
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207bd06(int param_1,uint param_2)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_2 * 4 + param_1;
  puVar2 = *(uint **)(iVar5 + 0x268);
  if (7 < param_2) {
    FUN_ram_4207a038(1,0x400,2,
                     "AA8CAAAW/voJBgIADzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                     ,param_2);
    return;
  }
  if (puVar2 != (uint *)0x0) {
    for (iVar6 = 0; iVar6 < (int)(uint)*(ushort *)((int)puVar2 + 0xe); iVar6 = iVar6 + 1) {
      piVar4 = (int *)(puVar2[6] + iVar6 * 4);
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        uVar1 = *(ushort *)(iVar3 + 0x16);
        *piVar4 = 0;
        puVar2[1] = puVar2[1] - (uint)uVar1;
        (*(code *)&SUB_ram_40011fa0)();
        iVar3 = ((ushort)puVar2[2] - 1) * 0x10000;
        *(short *)(puVar2 + 2) = (short)((uint)iVar3 >> 0x10);
        if (iVar3 >> 0x10 == 0) break;
      }
    }
    *puVar2 = *puVar2 & 0xffffffb9;
    thunk_EXT_FUN_ram_40011e14((char)puVar2[8]);
    FUN_ram_4207bcda((char)puVar2[8]);
    if (puVar2[6] != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    }
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(puVar2);
    *(undefined4 *)(iVar5 + 0x268) = 0;
    *(ushort *)(param_1 + 0x288) = ~(ushort)(1 << (param_2 & 0x1f)) & *(ushort *)(param_1 + 0x288);
  }
  return;
}

