
int FUN_ram_4203443c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iStack_28;
  undefined4 auStack_24 [4];
  
  iStack_28 = 0;
  iVar2 = FUN_ram_4204beee("key point.",1,auStack_24);
  iVar1 = 0x1c;
  if (iVar2 == 0) {
    iVar1 = FUN_ram_4204c2c8(auStack_24[0],param_2,0,&iStack_28);
    if ((iVar1 == 0) && (param_3 != 0)) {
      iVar2 = 0x17;
      if ((param_1 != 7) &&
         (((iVar2 = param_1, param_1 != 8 && (iVar2 = 0x10, param_1 != 3)) &&
          (iVar2 = 0xe, param_1 != 6)))) {
        iVar2 = 0x58;
      }
      iVar1 = 0x110c;
      if (iStack_28 == iVar2) {
        iVar1 = FUN_ram_4204c2c8(auStack_24[0],param_2,param_3,&iStack_28);
      }
    }
    FUN_ram_4204c3d0(auStack_24[0]);
  }
  return iVar1;
}

