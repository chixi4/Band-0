
int FUN_ram_420301f2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [32];
  
  iVar1 = FUN_ram_4202f906();
  if (iVar1 == 1) {
    FUN_ram_4202f918(auStack_58);
    FUN_ram_4202f08e(auStack_40,4);
    iVar1 = FUN_ram_4202fcf4(param_1,auStack_58,param_3,param_4,param_7);
    if (((iVar1 == 0) &&
        (iVar1 = FUN_ram_4202fcf4(param_1,param_2,param_5,param_6,param_7), iVar1 == 0)) &&
       (iVar1 = FUN_ram_4202fad4(param_1,param_2,auStack_58,param_2,auStack_40), iVar1 == 0)) {
      iVar1 = FUN_ram_4202f2d8(param_1,param_2);
    }
    FUN_ram_4202f0b6(auStack_40,4);
    FUN_ram_4202f596(auStack_58);
  }
  else {
    iVar1 = -0x4e80;
  }
  return iVar1;
}

