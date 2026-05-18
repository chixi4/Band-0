
undefined4 FUN_ram_42047f06(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (-1 < param_1) {
    uVar1 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
    uVar2 = 0x102;
    if ((uVar1 & 1) != 0) {
      FUN_ram_420b602c(*(undefined4 *)(gp + -0x450),param_1);
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x102;
}

