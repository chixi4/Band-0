
undefined4 FUN_ram_4207fb5a(int param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar1 = *param_2;
    if ((uVar1 & 0xfeff) == 0x400) {
      uVar1 = uVar1 >> 8;
    }
    if ((uVar1 & 0xff) == 4) {
      *(undefined2 *)(gp + -0xae) = 4;
      uVar2 = 0x3fcc2f84;
    }
    else {
      if ((uVar1 & 0xff) != 5) {
        return 0xffffffff;
      }
      *(undefined2 *)(gp + -0xae) = 5;
      uVar2 = 0x3fcc2fac;
    }
  }
  else {
    if (param_1 != 1) {
      FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc4d8);
      return 0xffffffff;
    }
    if (*param_2 == 4) {
      *(undefined2 *)(gp + -0xb0) = 4;
      uVar2 = 0x3fcc2f34;
    }
    else {
      if (*param_2 != 5) {
        return 0xffffffff;
      }
      *(undefined2 *)(gp + -0xb0) = 5;
      uVar2 = 0x3fcc2f5c;
    }
  }
  FUN_ram_4039c11e(uVar2,param_2,0x28);
  return 0;
}

