
undefined4 FUN_ram_4203973a(int param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar1 = *param_2;
    if ((uVar1 & 0xfeff) == 0x400) {
      uVar1 = uVar1 >> 8;
    }
    if ((uVar1 & 0xff) == 4) {
      *(undefined2 *)(gp + -0x2b2) = 4;
      uVar2 = 0x3fcb3efc;
    }
    else {
      if ((uVar1 & 0xff) != 5) {
        return 0xffffffff;
      }
      *(undefined2 *)(gp + -0x2b2) = 5;
      uVar2 = 0x3fcb3f24;
    }
  }
  else {
    if (param_1 != 1) {
      FUN_ram_42033fd8(1,4,4,0x3c07b240);
      return 0xffffffff;
    }
    if (*param_2 == 4) {
      *(undefined2 *)(gp + -0x2b4) = 4;
      uVar2 = 0x3fcb3eac;
    }
    else {
      if (*param_2 != 5) {
        return 0xffffffff;
      }
      *(undefined2 *)(gp + -0x2b4) = 5;
      uVar2 = 0x3fcb3ed4;
    }
  }
  FUN_ram_40399daa(uVar2,param_2,0x28);
  return 0;
}

