
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4207ef24(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4207d9c4();
  if (iVar1 == 0) {
    if ((_DAT_ram_3fcc2ffc == 0) ||
       (iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x124))
                          (&DAT_ram_3c0c14a8,1,*(int *)(gp + -0xb4) + 0x410), iVar1 == 0)) {
      iVar1 = FUN_ram_4207ec1c();
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      FUN_ram_4207a038(1,0x102,2,
                       "AAAD0P//uAER/sgO4f9X//+VblVVVVaq///9MQB/AL//wFAVVzIACGD9VW9VqlcfH9/8CqqQaqqq//9C+D//MgAIYeVdb///ls0FEy/6AB8DMgALYdV9b///1aQCEj8yAC/9CzIAC8L2/W///+V/////0L8yAC/4DzIAC7P//W////Vv/5v/gFgCL/4vMgAQY/1b/5f/4zIAL///MgAQMf5Vv24BAooCDzIAEGKW/9VVX//LAH////wAAAAAXgEIkf/9b/+W//lVXykAQQAAAAMJAA8yAAmB/r//lv//pr8pAJ8AAAAD/VVQFVUyAAkT/8EBz/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                       ,iVar1);
    }
  }
  FUN_ram_4207a038(1,1,1,&DAT_ram_3c0fe890,iVar1);
  FUN_ram_4207eec2();
  return iVar1;
}

