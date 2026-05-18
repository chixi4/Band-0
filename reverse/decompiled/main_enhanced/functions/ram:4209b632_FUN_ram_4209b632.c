
undefined4 FUN_ram_4209b632(int param_1,undefined1 *param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((*(uint *)(param_1 + 4) & 0x4000c00) != 0) && (uVar1 = 0, *(int *)(param_1 + 0x50) - 1U < 2)
      ) && (uVar1 = 0xffffffff, 2 < param_3)) {
    *param_2 = 0xf4;
    param_2[1] = 1;
    param_2[2] = 0x20;
    uVar1 = 3;
  }
  return uVar1;
}

