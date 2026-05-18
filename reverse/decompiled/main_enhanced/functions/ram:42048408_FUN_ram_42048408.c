
undefined4 FUN_ram_42048408(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(gp + -0x440) == 0) {
    uVar1 = 0x103;
  }
  else {
    uVar1 = 0x102;
    if (-1 < param_1) {
      uVar2 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
      uVar1 = 0x102;
      if ((uVar2 & 1) != 0) {
        FUN_ram_40396966(0x102);
        FUN_ram_42047f06(param_1);
        if (*(int *)(gp + -0x440) != 0) {
          puVar3 = (undefined4 *)(*(int *)(gp + -0x440) + param_1 * 8);
          *puVar3 = param_2;
          puVar3[1] = param_3;
        }
        uVar1 = FUN_ram_42011566(*(undefined4 *)(gp + -0x43c));
        FUN_ram_420b5fe0(*(undefined4 *)(gp + -0x450),param_1,uVar1);
        FUN_ram_40396994();
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

