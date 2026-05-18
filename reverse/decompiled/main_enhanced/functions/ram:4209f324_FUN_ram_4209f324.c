
undefined4 FUN_ram_4209f324(int param_1,undefined1 *param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x1f0) & 0x4000c00) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if ((*(int *)(param_1 + 0x200) - 1U < 2) && (uVar1 = 0xffffffff, 2 < param_3)) {
      *param_2 = 0xf4;
      param_2[1] = 1;
      param_2[2] = 0x20;
      return 3;
    }
  }
  return uVar1;
}

