
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42037852(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = FUN_ram_420377a4();
    return uVar1;
  }
  if (*param_1 != 0x20221122) {
    (*(code *)&SUB_ram_40010698)("nities fit the main line.");
    return 0x10a;
  }
  if (param_1[0x13] != -0x5a5a5a5b) {
    (*(code *)&SUB_ram_40010698)(&DAT_ram_3c0c2924);
    return 0x102;
  }
  _DAT_ram_3fcdfec8 = param_1;
  uVar1 = FUN_ram_420377a4();
  return uVar1;
}

