
int FUN_ram_42030c94(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_ram_42030f1a(param_2,param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_ram_4202f906(param_2);
  if (iVar1 == 2) {
    if (param_1 == 9) {
      if (param_4 != 0x20) {
        return -0x4c80;
      }
      iVar3 = param_2 + 0x60;
      iVar1 = FUN_ram_42024bc8(iVar3,param_3,0x20);
      if (((iVar1 != 0) || (iVar1 = FUN_ram_42024b08(iVar3,0,0), iVar1 != 0)) ||
         ((iVar1 = FUN_ram_42024b08(iVar3,1,0), iVar1 != 0 ||
          ((iVar1 = FUN_ram_42024b08(iVar3,2,0), iVar1 != 0 ||
           (iVar1 = FUN_ram_42024b08(iVar3,0xff,0), iVar1 != 0)))))) goto LAB_ram_42030d38;
      uVar2 = 0xfe;
    }
    else {
      if (param_1 != 0xd) goto LAB_ram_42030d8c;
      if (param_4 != 0x38) {
        return -0x4c80;
      }
      iVar3 = param_2 + 0x60;
      iVar1 = FUN_ram_42024bc8(iVar3,param_3,0x38);
      if (((iVar1 != 0) || (iVar1 = FUN_ram_42024b08(iVar3,0,0), iVar1 != 0)) ||
         (iVar1 = FUN_ram_42024b08(iVar3,1,0), iVar1 != 0)) goto LAB_ram_42030d38;
      uVar2 = 0x1bf;
    }
    iVar1 = FUN_ram_42024b08(param_2 + 0x60,uVar2,1);
    iVar3 = 0;
    if (iVar1 != 0) goto LAB_ram_42030d38;
  }
  else {
LAB_ram_42030d8c:
    iVar3 = -0x4e80;
  }
  iVar1 = FUN_ram_4202f906(param_2);
  if (iVar1 == 1) {
    iVar1 = FUN_ram_42024c0c(param_2 + 0x60,param_3,param_4);
    if (iVar1 != 0) goto LAB_ram_42030d38;
  }
  else if (iVar3 != 0) {
    iVar1 = -0x4e80;
    goto LAB_ram_42030d38;
  }
  iVar1 = FUN_ram_4203040e(param_2,param_2 + 0x60);
  if (iVar1 == 0) {
    return 0;
  }
LAB_ram_42030d38:
  FUN_ram_42024774(param_2 + 0x60);
  return iVar1;
}

