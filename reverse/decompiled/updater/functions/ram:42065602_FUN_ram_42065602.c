
undefined4 FUN_ram_42065602(int param_1,undefined1 *param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 0x1f0) & 0x4000c00) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x200) - 1U < 2) {
      cVar1 = *(char *)(param_1 + 0x204);
      uVar2 = 0xffffffff;
      if (2 < param_3) {
        *param_2 = 0xf4;
        param_2[1] = 1;
        param_2[2] = (-(cVar1 == '\0') & 0xc0U) + 0x60;
        return 3;
      }
    }
  }
  return uVar2;
}

