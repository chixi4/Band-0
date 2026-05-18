
void FUN_ram_42028e3e(int *param_1)

{
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((uint *)*param_1 == (uint *)0x0) {
    return;
  }
  if (param_1[1] == 0) goto LAB_ram_42028e72;
  uVar1 = *(uint *)*param_1;
  if (uVar1 == 9) {
LAB_ram_42028ea8:
    FUN_ram_4202abb6();
  }
  else if (uVar1 < 10) {
    if (uVar1 == 5) {
      FUN_ram_4202a988();
    }
    else {
      if (uVar1 == 8) goto LAB_ram_42028ea8;
      if (uVar1 == 3) {
        FUN_ram_4202ad1e();
      }
    }
  }
  else if ((uVar1 == 10) || (uVar1 == 0xb)) {
    FUN_ram_4202949e();
  }
  FUN_ram_420293a0(param_1[1]);
LAB_ram_42028e72:
  if (param_1[2] != 0) {
    FUN_ram_420293c8(param_1[2],(uint)*(byte *)(*param_1 + 5) << 1);
  }
  FUN_ram_420293a6(param_1,0xc);
  return;
}

