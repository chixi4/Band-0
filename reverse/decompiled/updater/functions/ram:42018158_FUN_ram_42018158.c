
undefined4 FUN_ram_42018158(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (-1 < param_1) {
    uVar1 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
    uVar2 = 0x102;
    if ((uVar1 & 1) != 0) {
      FUN_ram_40394d60(0x102);
      if (*(int *)(gp + -0x534) == 3) {
        *(undefined4 *)(gp + -0x534) = 0;
      }
      FUN_ram_40394d8e();
      FUN_ram_4207b962(*(undefined4 *)(gp + -0x540),param_1,*(undefined4 *)(gp + -0x534));
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x102;
}

