
undefined4 FUN_ram_42026160(undefined4 param_1)

{
  char *unaff_s0;
  int iVar1;
  int in_a4;
  int in_a5;
  
  if (in_a4 == in_a5) {
    if (*unaff_s0 != '\0') {
      FUN_ram_42026132();
    }
    iVar1 = FUN_ram_403a3150(*(undefined4 *)(unaff_s0 + 4),&DAT_ram_3fcb6b68,1);
    param_1 = 0;
    if (iVar1 != 0) {
      param_1 = 0x11;
    }
  }
  return param_1;
}

