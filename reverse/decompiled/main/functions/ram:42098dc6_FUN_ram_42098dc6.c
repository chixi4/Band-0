
undefined4 FUN_ram_42098dc6(int param_1,undefined1 *param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((((*(uint *)(*(int *)(param_1 + 0x60) + 0x14) & 2) != 0) &&
       (uVar1 = 0, (*(uint *)(*(int *)(param_1 + 0x60) + 0x18) & 0x4000c00) != 0)) &&
      (uVar1 = 0, 2 < param_3)) && (*(int *)(*(int *)(param_1 + 4) + 0x188) - 1U < 2)) {
    *param_2 = 0xf4;
    param_2[1] = 1;
    param_2[2] = 0x20;
    uVar1 = 3;
  }
  return uVar1;
}

