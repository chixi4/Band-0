
undefined4 FUN_ram_42047e9c(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (-1 < param_1) {
    uVar1 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
    uVar2 = 0x102;
    if ((uVar1 & 1) != 0) {
      FUN_ram_40396966(0x102);
      if (*(int *)(gp + -0x444) == 3) {
        *(undefined4 *)(gp + -0x444) = 0;
      }
      FUN_ram_40396994();
      FUN_ram_420b5fe0(*(undefined4 *)(gp + -0x450),param_1,*(undefined4 *)(gp + -0x444));
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x102;
}

