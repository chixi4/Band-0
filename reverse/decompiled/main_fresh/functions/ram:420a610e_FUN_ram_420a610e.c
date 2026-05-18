
void FUN_ram_420a610e(int *param_1)

{
  int iVar1;
  undefined4 extraout_a3;
  
  FUN_ram_420a47c2(param_1,param_1[0x12]);
  iVar1 = (**(code **)(param_1[0xe] + 0x18))
                    (param_1,param_1[0x2a] + 4,*(undefined1 *)(*param_1 + 8),extraout_a3,*param_1,
                     *(code **)(param_1[0xe] + 0x18));
  if (iVar1 != 0) {
    return;
  }
  param_1[0x2c] = 0x10;
  param_1[0x2b] = 0x16;
  *(undefined1 *)param_1[0x2a] = 0x14;
  if (*(char *)param_1[0xe] == '\0') {
    iVar1 = param_1[1] + 1;
  }
  else {
    if (*(char *)(*param_1 + 8) != '\0') goto LAB_ram_420a615a;
    iVar1 = 0xf;
  }
  param_1[1] = iVar1;
LAB_ram_420a615a:
  (*(code *)&SUB_ram_40010488)(param_1 + 0x2e,0,8);
  param_1[0x10] = param_1[0x12];
  param_1[0xb] = param_1[0xd];
  FUN_ram_420a49cc(param_1,1);
  return;
}

