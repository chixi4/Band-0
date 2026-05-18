
undefined4 FUN_ram_42018094(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (-1 < param_1) {
    uVar1 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
    uVar2 = 0x102;
    if (((uVar1 & 1) != 0) && (param_2 < 6)) {
      FUN_ram_40394d60(0x102);
      iVar3 = **(int **)(gp + -0x540) + (param_1 + 0x1c) * 4;
      *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffc7f | (param_2 & 7) << 7;
      uVar5 = *(uint *)(gp + -0x528);
      uVar4 = *(uint *)(gp + -0x524);
      uVar6 = (*(code *)&SUB_ram_400108c0)(1,0,param_1);
      uVar1 = (uint)((ulonglong)uVar6 >> 0x20);
      if (param_2 - 1 < 3) {
        uVar5 = uVar5 | (uint)uVar6;
        uVar4 = uVar4 | uVar1;
      }
      else {
        uVar5 = ~(uint)uVar6 & uVar5;
        uVar4 = ~uVar1 & uVar4;
      }
      *(uint *)(gp + -0x528) = uVar5;
      *(uint *)(gp + -0x524) = uVar4;
      FUN_ram_40394d8e();
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x102;
}

