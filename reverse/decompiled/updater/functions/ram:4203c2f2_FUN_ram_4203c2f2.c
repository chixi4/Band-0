
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203c2f2(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (_DAT_ram_3fcdfdd8 != (int *)0x0) {
    return 0;
  }
  if (param_1 == (int *)0x0) {
    (*(code *)&SUB_ram_4001065c)(0x3c072bd4);
  }
  else {
    if (*param_1 == 8) {
      uVar2 = 0xdeadbeaf;
      if (param_1[0x77] == -0x21524151) {
        _DAT_ram_3fcdfdd8 = param_1;
        return 0;
      }
      uVar1 = 0x3c072c3c;
    }
    else {
      uVar2 = 8;
      uVar1 = 0x3c072bf0;
    }
    FUN_ram_42066d66(uVar1,uVar2);
  }
  return 0x102;
}

