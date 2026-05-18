
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207fe18(byte *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (byte *)0x0) {
    FUN_ram_4207a038(1,2,1,&DAT_ram_3c0fe9d0);
    uVar1 = 0x102;
  }
  else {
    uVar1 = 0xffffffff;
    if ((*param_1 < 0x50) && (uVar1 = 0xffffffff, *(int *)(param_1 + 4) != 0)) {
      (*(code *)&SUB_ram_40011d44)();
      uVar1 = (**(code **)(param_1 + 4))(param_1);
      (*(code *)&SUB_ram_40011d48)();
    }
  }
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  if ((param_1[1] & 2) == 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
  }
  else if ((param_1[1] & 3) == 3) {
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_ram_4207a038(1,2,2,
                       "n/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                       ,*param_1);
    }
    else {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x40))();
    }
  }
  return uVar1;
}

