
uint FUN_ram_4039a06c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = *param_1;
    uVar2 = *param_2;
    if (((uVar1 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar1 | 0x7f7f7f7f) != 0xffffffff) {
LAB_ram_4039a156:
      if (uVar1 == uVar2) {
        return 0;
      }
      goto LAB_ram_4039a13a;
    }
    if (uVar1 != uVar2) break;
    uVar1 = param_1[1];
    uVar2 = param_2[1];
    if (((uVar1 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar1 | 0x7f7f7f7f) != 0xffffffff) {
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      goto LAB_ram_4039a156;
    }
    if (uVar1 != uVar2) break;
    uVar1 = param_1[2];
    uVar2 = param_2[2];
    if (((uVar1 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar1 | 0x7f7f7f7f) != 0xffffffff) {
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      if (uVar1 == uVar2) {
        return 0;
      }
      goto LAB_ram_4039a13a;
    }
    if (uVar1 != uVar2) break;
    uVar1 = param_1[3];
    uVar2 = param_2[3];
    if (((uVar1 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar1 | 0x7f7f7f7f) != 0xffffffff) {
      param_1 = param_1 + 3;
      param_2 = param_2 + 3;
      if (uVar1 == uVar2) {
        return 0;
      }
      goto LAB_ram_4039a13a;
    }
    if (uVar1 != uVar2) break;
    uVar1 = param_1[4];
    uVar2 = param_2[4];
    if (((uVar1 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar1 | 0x7f7f7f7f) != 0xffffffff) {
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
      if (uVar1 == uVar2) {
        return 0;
      }
      goto LAB_ram_4039a13a;
    }
    param_1 = param_1 + 5;
    param_2 = param_2 + 5;
  } while (uVar1 == uVar2);
  if (uVar1 << 0x10 == uVar2 << 0x10) {
    uVar1 = uVar1 >> 0x10;
    uVar2 = uVar2 >> 0x10;
    if ((uVar1 - uVar2 & 0xff) == 0) {
      return uVar1 - uVar2;
    }
  }
  else {
    uVar1 = uVar1 & 0xffff;
    uVar2 = uVar2 & 0xffff;
    if ((uVar1 - uVar2 & 0xff) == 0) {
      return uVar1 - uVar2;
    }
  }
  return (uVar1 & 0xff) - (uVar2 & 0xff);
  while (uVar2 != 0) {
LAB_ram_4039a13a:
    uVar2 = (uint)(byte)*param_1;
    uVar1 = *param_2;
    param_1 = (uint *)((int)param_1 + 1);
    param_2 = (uint *)((int)param_2 + 1);
    if (uVar2 != (byte)uVar1) break;
  }
  return uVar2 - (byte)uVar1;
}

