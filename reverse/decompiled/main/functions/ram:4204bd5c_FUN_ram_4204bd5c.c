
int FUN_ram_4204bd5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                    uint *param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_2c [4];
  int *piStack_28;
  uint auStack_24 [2];
  
  FUN_ram_4204eeda(auStack_2c);
  iVar1 = FUN_ram_4204bd38(param_1,&piStack_28);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*piStack_28 + 0x18))(piStack_28,param_2,param_3,auStack_24);
    if (iVar1 == 0) {
      if (param_5 != (uint *)0x0) {
        if (param_4 == 0) {
          *param_5 = auStack_24[0];
          goto LAB_ram_4204bda6;
        }
        uVar2 = *param_5;
        *param_5 = auStack_24[0];
        if (auStack_24[0] <= uVar2) {
          iVar1 = (**(code **)(*piStack_28 + 0x34))
                            (piStack_28,param_2,param_3,param_4,auStack_24[0],
                             *(code **)(*piStack_28 + 0x34));
          goto LAB_ram_4204bda6;
        }
      }
      iVar1 = 0x110c;
    }
  }
  else {
    iVar1 = 0x1107;
  }
LAB_ram_4204bda6:
  FUN_ram_4204eeea(auStack_2c);
  return iVar1;
}

