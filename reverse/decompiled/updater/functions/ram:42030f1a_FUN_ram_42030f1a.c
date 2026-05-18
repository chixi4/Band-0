
int FUN_ram_42030f1a(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  FUN_ram_4202f9c2();
  FUN_ram_4202f93a(param_1);
  *param_1 = param_2;
  if (param_2 == 3) {
    param_1[2] = 0x80001;
    param_1[1] = 0x3c078794;
    param_1[6] = 0x80001;
    param_1[0xe] = 0x80001;
    param_1[8] = 0x80001;
    param_1[10] = 0x80001;
    param_1[5] = 0x3c078774;
    param_1[9] = 0x3c078734;
    param_1[0xd] = 0x3c078714;
    param_1[0xc] = 0x10001;
    param_1[0xb] = 0x3c0787b4;
    param_1[7] = 0x3c078754;
    iVar1 = FUN_ram_42024bac(param_1 + 1);
    param_1[0xf] = iVar1;
    iVar1 = FUN_ram_42024bac(param_1 + 0xd);
    param_1[0x10] = iVar1;
    param_1[0x11] = 1;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
LAB_ram_42030fc2:
    iVar1 = 0;
  }
  else {
    if (param_2 != 9) {
      *param_1 = 0;
      return -0x4e80;
    }
    param_1[0x12] = (int)&LAB_ram_42020eb2;
    iVar1 = FUN_ram_42024a98(param_1 + 3,0x1db42);
    if (iVar1 == 0) {
      piVar2 = param_1 + 1;
      iVar1 = FUN_ram_42024a98(piVar2,1);
      if (((iVar1 == 0) && (iVar1 = FUN_ram_42024c6c(piVar2,0xff), iVar1 == 0)) &&
         (iVar1 = FUN_ram_4202505a(piVar2,piVar2,0x13), iVar1 == 0)) {
        iVar1 = FUN_ram_42024bac(piVar2);
        param_1[0xf] = iVar1;
        iVar1 = FUN_ram_42024c0c(param_1 + 0xd,0x3c078704,0x10);
        if (((iVar1 == 0) && (iVar1 = FUN_ram_42024b08(param_1 + 0xd,0xfc,1), iVar1 == 0)) &&
           ((iVar1 = FUN_ram_42024a98(param_1 + 7,9), iVar1 == 0 &&
            (iVar1 = FUN_ram_42024a98(param_1 + 0xb,1), iVar1 == 0)))) {
          FUN_ram_42024774(param_1 + 9);
          param_1[0x10] = 0xfe;
          goto LAB_ram_42030fc2;
        }
      }
    }
    FUN_ram_4202f9c2(param_1);
  }
  return iVar1;
}

