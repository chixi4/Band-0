
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_4204878a(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = _DAT_ram_3fcb5550;
  if (param_1 != 0) {
    FUN_ram_42047b50();
    FUN_ram_40399aee();
    uVar2 = CONCAT44(_DAT_ram_3fcb5554,_DAT_ram_3fcb5550);
    if ((*(char *)(gp + 0x100) != '\0') &&
       (uVar2 = CONCAT44(_DAT_ram_3fcb5554,_DAT_ram_3fcb5550), param_3 != 0)) {
      if (_DAT_ram_3fcb5394 == 0) {
        FUN_ram_42047aa6();
      }
      uVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    }
  }
  _DAT_ram_3fcb5550 = uVar2;
  iVar1 = FUN_ram_4204acb6(1);
  if (iVar1 == 0) {
    if (DAT_ram_3fcb537e == '\0') {
      (*(code *)&SUB_ram_40011d50)();
    }
    else if (DAT_ram_3fcb5371 == '\x01') {
      (*(code *)&SUB_ram_40011b88)();
    }
  }
  iVar1 = FUN_ram_4039c15a();
  uVar2 = _DAT_ram_3fcb5550;
  if ((iVar1 != 0) && (param_3 != 0)) {
    FUN_ram_420479b6();
    if (DAT_ram_3fcb538a == '\0') {
      DAT_ram_3fcb538b = 1;
    }
    uVar2 = _DAT_ram_3fcb5550;
    if (DAT_ram_3fcb5371 == '\0') {
      (*(code *)&SUB_ram_40011b84)();
      return;
    }
  }
  _DAT_ram_3fcb5554 = (undefined4)((ulonglong)uVar2 >> 0x20);
  _DAT_ram_3fcb5550 = (undefined4)uVar2;
  return;
}

