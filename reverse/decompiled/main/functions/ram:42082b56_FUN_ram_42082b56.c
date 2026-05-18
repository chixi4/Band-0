
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42082b56(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (byte *)0x0) {
    if (*param_1 < 0x50) {
      param_1[1] = 0;
      iVar2 = (*(code *)&SUB_ram_40012084)();
      if (iVar2 == 0) {
        param_1[1] = param_1[1] | 1;
      }
      if ((*param_1 != 0x31) || (param_1[8] != 2)) {
        param_1[1] = param_1[1] | 2;
      }
      if ((param_1[1] & 3) == 3) {
        iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x44))();
        *(int *)(param_1 + 0x10) = iVar2;
        if (iVar2 == 0) {
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
          FUN_ram_4207a038(1,2,2,
                           "/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                          );
          return 0x101;
        }
      }
      bVar1 = param_1[1];
      if ((bVar1 & 1) == 0) {
        iVar2 = FUN_ram_4207fe18(param_1);
        if ((bVar1 & 2) == 0) {
          return 0;
        }
      }
      else {
        iVar2 = FUN_ram_4208353e();
        if (iVar2 == 0) {
          iVar3 = (*(code *)&SUB_ram_40012088)();
          if (((iVar3 != 3) && (*param_1 != 0x26)) && (*param_1 != 0)) {
            FUN_ram_42083512();
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
            return 0x3001;
          }
          iVar3 = FUN_ram_4208390a();
          if (((iVar3 != 0) && (*param_1 != 2)) && (*param_1 != 0x1a)) {
            FUN_ram_42083512();
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
            return 0x3014;
          }
          iVar3 = (*(code *)&SUB_ram_40011c5c)(6,param_1);
          if (iVar3 != 0) {
            FUN_ram_4207a038(1,2,2,
                             "///9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                             ,*param_1);
            FUN_ram_42083512();
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
            return 0x3012;
          }
          FUN_ram_42083512();
          if ((bVar1 & 2) == 0) {
            return 0;
          }
          iVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x3c))
                            (*(undefined4 *)(param_1 + 0x10),0xffffffff);
          if (iVar3 == 1) {
            iVar2 = *(int *)(param_1 + 0xc);
          }
        }
      }
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
      return iVar2;
    }
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
  }
  return 0x102;
}

