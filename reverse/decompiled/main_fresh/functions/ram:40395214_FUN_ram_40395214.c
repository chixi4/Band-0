
void FUN_ram_40395214(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 & 0x800;
  uVar2 = param_1 >> 9 & 2 | 0x1800000 | (param_1 & 1) << 2 | (param_1 & 0x20) << 0xf |
          (uint)(uVar1 == 0) << 0x15;
  *param_2 = uVar2 | 1;
  if ((param_1 & 1) == 0) {
    *param_2 = uVar2 | 0x400001;
    if ((param_1 & 0x10800) == 0x800) {
      if ((param_1 & 0x400) != 0) {
        *param_2 = uVar2 | 0x414a51;
      }
    }
    else {
      *(ushort *)param_2 = (ushort)*param_2 & 0xc00f | 0x2f70;
    }
    if (uVar1 == 0) {
      return;
    }
  }
  else {
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    if ((param_1 & 0x400) == 0) {
      uVar1 = 0x400000;
    }
    else if ((int)(param_1 << 0xd) < 0) {
      uVar1 = 0x43fc00;
    }
    else {
      uVar1 = 0x3c000;
    }
    *param_2 = uVar2 | 1 | uVar1;
  }
  *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xf3 | 0xc;
  return;
}

