
int FUN_ram_4202ff36(int *param_1,int param_2,byte *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_38 [12];
  
  if (param_4 != 0) {
    piVar4 = param_1 + 1;
    uVar2 = FUN_ram_42024bb6(piVar4);
    iVar3 = FUN_ram_4202f906(param_1);
    iVar1 = -0x4e80;
    if (iVar3 == 2) {
      if (param_4 != uVar2) {
        return -0x4f80;
      }
      iVar1 = FUN_ram_42024bc8(param_2,param_3,param_4);
      if (iVar1 != 0) {
        return iVar1;
      }
      FUN_ram_42024774(param_2 + 8);
      if ((*param_1 == 9) && (iVar1 = FUN_ram_42024b08(param_2,param_4 * 8 + -1,0), iVar1 != 0)) {
        return iVar1;
      }
      iVar3 = FUN_ram_42024a98(param_2 + 0x10,1);
      iVar1 = 0;
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    iVar3 = FUN_ram_4202f906(param_1);
    if (iVar3 != 1) {
      return iVar1;
    }
    if (*param_3 == 0) {
      if (param_4 == 1) {
        iVar1 = FUN_ram_4202faa0(param_2);
        return iVar1;
      }
    }
    else {
      uVar6 = uVar2 + 1;
      if (uVar6 <= param_4) {
        iVar1 = FUN_ram_42024c0c(param_2,param_3 + 1,uVar2);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_ram_42024a98(param_2 + 0x10,1);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar5 = (uint)*param_3;
        if (uVar5 == 4) {
          if (uVar2 * 2 + 1 == param_4) {
            iVar1 = FUN_ram_42024c0c(param_2 + 8,param_3 + uVar6,uVar2);
            return iVar1;
          }
        }
        else if (((uVar5 - 2 & 0xff) < 2) && (uVar6 == param_4)) {
          iVar1 = FUN_ram_42024ae6(piVar4,0);
          iVar3 = param_2 + 8;
          if ((iVar1 == 1) && (iVar1 = FUN_ram_42024ae6(piVar4,1), iVar1 == 1)) {
            FUN_ram_4202476a(auStack_38);
            iVar1 = FUN_ram_4202f5e8(param_1,iVar3,param_2);
            if ((((iVar1 == 0) && (iVar1 = FUN_ram_4202502c(auStack_38,piVar4,1), iVar1 == 0)) &&
                (iVar1 = FUN_ram_42024cba(auStack_38,2), iVar1 == 0)) &&
               ((iVar1 = FUN_ram_42025944(iVar3,iVar3,auStack_38,piVar4,0), iVar1 == 0 &&
                (uVar2 = FUN_ram_42024ae6(iVar3,0), (uVar5 & 1) != uVar2)))) {
              iVar1 = FUN_ram_42025026(iVar3,piVar4,iVar3);
            }
            FUN_ram_42024774(auStack_38);
            return iVar1;
          }
          return -0x4e80;
        }
      }
    }
  }
  return -0x4f80;
}

