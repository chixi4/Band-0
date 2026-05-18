
undefined4 FUN_ram_420300b4(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  
  if (param_3 == 2) {
    *param_1 = 0x10;
    uVar1 = (*(code *)&SUB_ram_40011938)(param_2);
    *(undefined2 *)(param_1 + 2) = uVar1;
  }
  else {
    if (param_3 != 0x10) {
      return 3;
    }
    *param_1 = 0x80;
    FUN_ram_4039c11e(param_1 + 1);
  }
  return 0;
}

