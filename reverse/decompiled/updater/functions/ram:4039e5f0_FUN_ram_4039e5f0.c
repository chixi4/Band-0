
undefined4 FUN_ram_4039e5f0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 + -0xff28000 < (undefined4 *)0x40000) {
    if (*(int *)(param_2 + 0x20) == 0) {
      uVar1 = 0x3fcb0f18;
      goto LAB_ram_4039e60a;
    }
  }
  else if (*(int *)(param_2 + 0x20) == 0) {
    return 0x102;
  }
  uVar1 = 0x3fcb12b8;
LAB_ram_4039e60a:
  *param_1 = uVar1;
  uVar1 = FUN_ram_4201ae9e();
  return uVar1;
}

