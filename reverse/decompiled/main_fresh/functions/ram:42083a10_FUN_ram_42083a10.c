
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42083a10(int *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (_DAT_ram_3fcdfdd8 != (int *)0x0) {
    return 0;
  }
  if (param_1 == (int *)0x0) {
    (*(code *)&SUB_ram_4001065c)("do not need to hold everyone.");
  }
  else {
    if (*param_1 == 8) {
      uVar2 = 0xdeadbeaf;
      if (param_1[0x77] == -0x21524151) {
        _DAT_ram_3fcdfdd8 = param_1;
        return 0;
      }
      pcVar1 = &DAT_ram_3c0c4798;
    }
    else {
      uVar2 = 8;
      pcVar1 = ".";
    }
    FUN_ram_4209fb1c(pcVar1,uVar2);
  }
  return 0x102;
}

