
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420826c8(uint param_1,undefined2 *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  if (param_1 < 0xb) {
    iVar4 = param_1 + 8;
    if ((*(char *)(param_1 + 0x3fcc4058) == '\0') && (*(int *)(iVar4 * 4 + 0x3fcc400c) != 0)) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      *(undefined4 *)(iVar4 * 4 + 0x3fcc400c) = 0;
    }
    if ((param_2 == (undefined2 *)0x0) && (param_3 == 0)) goto LAB_ram_42082738;
    *(char *)(param_1 + 0x3fcc4058) = (char)param_4;
    if (param_4 == 0) {
      iVar4 = iVar4 * 4;
      iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(param_3 + 2);
      *(int *)(iVar4 + 0x3fcc400c) = iVar2;
      if (iVar2 == 0) {
        pcVar3 = 
        "MgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
        ;
        goto LAB_ram_4208277e;
      }
      goto LAB_ram_4208280a;
    }
  }
  else {
    if (0xe < param_1) {
      return 1;
    }
    uVar1 = param_1 - 0xb & 0xff;
    if (uVar1 == 0) {
      DAT_ram_3fcc41d4 = 1;
    }
    iVar4 = uVar1 + 0x8c;
    if ((*(char *)(uVar1 + 0x3fcc424c) == '\0') && (*(int *)(iVar4 * 4 + 0x3fcc400c) != 0)) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      *(undefined4 *)(iVar4 * 4 + 0x3fcc400c) = 0;
    }
    if ((param_2 == (undefined2 *)0x0) && (param_3 == 0)) {
LAB_ram_42082738:
      *(undefined4 *)(iVar4 * 4 + 0x3fcc400c) = 0;
      return 0;
    }
    *(char *)(uVar1 + 0x3fcc424c) = (char)param_4;
    if (param_4 == 0) {
      iVar4 = iVar4 * 4;
      iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(param_3 + 2);
      *(int *)(iVar4 + 0x3fcc400c) = iVar2;
      if (iVar2 == 0) {
        pcVar3 = 
        "/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
        ;
LAB_ram_4208277e:
        FUN_ram_4207a038(1,2,2,pcVar3);
        return 1;
      }
LAB_ram_4208280a:
      FUN_ram_4039c11e(iVar2 + 2,param_2,param_3);
      **(undefined2 **)(iVar4 + 0x3fcc400c) = (short)param_3;
      return 0;
    }
  }
  *(undefined2 **)(iVar4 * 4 + 0x3fcc400c) = param_2;
  *param_2 = (short)param_3;
  return 0;
}

