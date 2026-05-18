
undefined4
FUN_ram_4204e20c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack00000000;
  undefined4 in_stack_00000020;
  
  uStack00000000 = 0;
  iVar1 = FUN_ram_4204d8d8(param_1,param_2,0xff,param_3,&stack0x0000001c,&stack0x00000020,0xff);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = in_stack_00000020._1_1_;
    }
  }
  else {
    uVar2 = 0x1102;
  }
  return uVar2;
}

