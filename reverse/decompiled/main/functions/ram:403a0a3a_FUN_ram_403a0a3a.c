
undefined4 FUN_ram_403a0a3a(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 + -0xff28000 < (undefined4 *)0x40000) {
    if (*(int *)(param_2 + 0x20) == 0) {
      uVar1 = 0x3fcb83c0;
      goto LAB_ram_403a0a54;
    }
  }
  else if (*(int *)(param_2 + 0x20) == 0) {
    return 0x102;
  }
  uVar1 = 0x3fcb87ac;
LAB_ram_403a0a54:
  *param_1 = uVar1;
  uVar1 = FUN_ram_4204ac68();
  return uVar1;
}

