
undefined4 FUN_ram_4202ffe2(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  if (param_3 == 4) {
    *param_1 = 0x20;
    uVar2 = (*(code *)&SUB_ram_40011940)(param_2);
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  else if (param_3 == 0x10) {
    *param_1 = 0x80;
    FUN_ram_4039c11e(param_1 + 1);
  }
  else {
    if (param_3 != 2) {
      return 3;
    }
    *param_1 = 0x10;
    uVar1 = (*(code *)&SUB_ram_40011938)();
    *(undefined2 *)(param_1 + 2) = uVar1;
  }
  return 0;
}

