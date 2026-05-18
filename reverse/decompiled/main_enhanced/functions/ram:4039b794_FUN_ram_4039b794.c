
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4039b794(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe7a0,&DAT_ram_3c0c426c,0x672);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pcVar8 = *(char **)(*(int *)(param_2 + 4) + 4);
  if (*pcVar8 != -0x78) {
    return 0;
  }
  if ((pcVar8[1] & 3U) == 3) {
    bVar1 = pcVar8[0x1e];
  }
  else {
    bVar1 = pcVar8[0x18];
  }
  uVar10 = bVar1 & 0xf;
  if ((bVar1 & 8) == 0) {
    puVar4 = *(uint **)((uVar10 + 0x98) * 4 + param_1 + 8);
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    uVar7 = *puVar4;
    if ((uVar7 & 4) == 0) {
      return 0;
    }
    if (((*(ushort *)(pcVar8 + 0x16) & 0xf) == 0) && ((pcVar8[1] & 4U) == 0)) {
      uVar2 = *(ushort *)(pcVar8 + 0x16) >> 4;
      uVar5 = (uint)uVar2;
      if ((pcVar8[4] & 1U) != 0) {
        FUN_ram_4207c5d8(puVar4,uVar5);
        return 0;
      }
      bVar3 = false;
      puVar4[5] = puVar4[5] + 1;
      if (((**(uint **)(param_2 + 0x24) & 0x10) != 0) && ((uVar7 & 0x40) != 0)) {
        *puVar4 = uVar7 & 0xffffffbf;
        bVar3 = true;
      }
      while( true ) {
        if ((ushort)puVar4[3] == uVar5) {
          if ((short)puVar4[2] != 0) {
            (*(code *)&SUB_ram_40011f80)(param_1,param_2);
            (*(code *)&SUB_ram_40011f88)(puVar4,param_1);
            return 1;
          }
          *(ushort *)(puVar4 + 3) = (ushort)((uVar5 + 1) * 0x100000 >> 0x14);
          return 0;
        }
        uVar9 = (uVar5 + 0x1000) - (uint)(ushort)puVar4[3];
        uVar7 = uVar9 & 0xfff;
        if (uVar7 < *(ushort *)((int)puVar4 + 0xe)) break;
        if ((uVar9 & 0x800) == 0) {
          (*(code *)&SUB_ram_40011f90)
                    (param_1,puVar4,(uVar5 + 0x1001) - (uint)*(ushort *)((int)puVar4 + 0xe) & 0xfff)
          ;
        }
        else if (bVar3) {
          (*(code *)&SUB_ram_40011f84)(param_1,puVar4);
          *(ushort *)(puVar4 + 3) = *(ushort *)((int)puVar4 + 10);
          if (((uVar5 + 0x1000) - (uint)*(ushort *)((int)puVar4 + 10) & 0x800) != 0) {
            *(ushort *)(puVar4 + 3) =
                 (short)(uVar5 + 0x1001) - *(short *)((int)puVar4 + 0xe) & 0xfff;
          }
          (*(code *)&SUB_ram_40011fa8)((char)puVar4[8],uVar10,(short)puVar4[3],0x40);
          bVar3 = false;
        }
        else {
          if (((**(uint **)(param_2 + 0x24) & 0x10) != 0) || ((*puVar4 & 0x40) == 0)) {
            _DAT_ram_3fcc2a08 = _DAT_ram_3fcc2a08 + 1;
            goto LAB_ram_4039b822;
          }
          (*(code *)&SUB_ram_40011f84)(param_1,puVar4);
          *(ushort *)(puVar4 + 3) = uVar2;
        }
      }
      iVar6 = uVar7 * 4;
      if (*(int *)(puVar4[6] + iVar6) == 0) {
        if ((short)puVar4[2] == 0) {
          (*(code *)&SUB_ram_40011fb4)(300000);
        }
        uVar2 = *(ushort *)(param_2 + 0x16);
        *(int *)(puVar4[6] + iVar6) = param_2;
        *(short *)(puVar4 + 2) = (short)puVar4[2] + 1;
        puVar4[1] = puVar4[1] + (uint)uVar2;
        return 1;
      }
    }
    else {
      FUN_ram_4207a038(1,0x400,2,
                       "AgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                      );
    }
  }
  else {
    FUN_ram_4207a038(1,0x400,2,
                     "DzIACgGJAgwCAA8yAAgc9ywAAgIADzIACBPwygELAgAPMgAJDWcGAQIADzIACRIAtgMPAgAXP/AADy0AFwECADHwAAEIAA8CABdP8AAAHy4AFwMyAAYOAg8CABIh8ADhAw8CABgv8AEsAR4NxgBS9v/5f/t0ABHgBwAa/LcAEfYVAAgCAKTlv/l/1W/////RMgAMgwcMAgCj1f/5f/lW////wDIAHPjnBwwCAKNW//1v/5X////BMgBT9D///+UiDgYCACH+VQEA41f///5b//1v//v///+CMgBs8H///9AAVAEGMgDR+V///V+qVV///wP/0EgBT+AAAAMyAAlR5W/qlVWEABEAAQCbv//QAAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                     ,uVar10);
  }
LAB_ram_4039b822:
  (*(code *)&SUB_ram_40011fa0)(param_2);
  return 1;
}

