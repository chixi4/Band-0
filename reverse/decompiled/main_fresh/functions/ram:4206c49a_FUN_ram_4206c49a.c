
void FUN_ram_4206c49a(int *param_1)

{
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((uint *)*param_1 == (uint *)0x0) {
    return;
  }
  if (param_1[1] == 0) goto LAB_ram_4206c4ca;
  uVar1 = *(uint *)*param_1;
  if (uVar1 == 8) {
LAB_ram_4206c4ee:
    FUN_ram_4206dc72();
  }
  else if (uVar1 < 9) {
    if (uVar1 == 3) {
      FUN_ram_4206c936();
    }
    else if (uVar1 == 5) {
      FUN_ram_4206da44();
    }
  }
  else if (uVar1 == 9) goto LAB_ram_4206c4ee;
  FUN_ram_4206d7d4(param_1[1]);
LAB_ram_4206c4ca:
  if (param_1[2] != 0) {
    FUN_ram_4206d7fc(param_1[2],(uint)*(byte *)(*param_1 + 5) << 1);
  }
  FUN_ram_4206d7da(param_1,0xc);
  return;
}

