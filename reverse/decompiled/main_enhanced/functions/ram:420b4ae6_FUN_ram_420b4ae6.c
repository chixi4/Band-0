
undefined4 FUN_ram_420b4ae6(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 1) {
    uVar2 = *(uint *)(gp + -0x6c8) & 0xfff00000;
  }
  else {
    uVar2 = *(uint *)(gp + -0x6c8);
    if (((uVar2 & 8) != 0) && (param_1 == 4)) {
      *(uint *)(gp + -0x6c8) = uVar2 & 0xfffffff7;
      *(undefined4 *)(gp + -0x6d0) = 0;
      *(undefined4 *)(gp + -0x6cc) = 0;
      return 0;
    }
    if (((uVar2 & 4) == 0) || (param_1 != 7)) {
      if (((uVar2 & 0xc0) == 0) || (param_1 != 8)) {
        return 0x103;
      }
      uVar1 = 0xfff3f;
    }
    else {
      *(ushort *)(gp + -0x6c6) = *(ushort *)(gp + -0x6c6) & 0xf;
      uVar1 = 0xffffb;
    }
    uVar2 = uVar2 & 0xfffff & uVar1 | *(uint *)(gp + -0x6c8) & 0xfff00000;
  }
  *(uint *)(gp + -0x6c8) = uVar2;
  return 0;
}

