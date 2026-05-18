
int FUN_ram_42067be4(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  
  iStack_34 = 0;
  uStack_30 = 0;
  iVar1 = FUN_ram_4202b91a(param_1,param_2,&iStack_38,0x30);
  if (iVar1 == 0) {
    iVar4 = *param_1 + iStack_38;
    iVar1 = FUN_ram_4206744e(param_1,iVar4,&iStack_34,&iStack_2c,&uStack_30);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_4202bb54(param_1,iVar4,&iStack_38);
    if (iVar1 == 0) {
      if (iVar4 != *param_1 + iStack_38) {
        return -0x3b66;
      }
      iVar1 = FUN_ram_42066de0(iStack_34);
      if (iVar1 == 0) {
        return -0x3c80;
      }
      iVar1 = FUN_ram_42066e2a(param_3,iVar1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (iStack_34 == 1) {
        uVar2 = FUN_ram_420674dc(*param_3,param_3[1]);
        iVar3 = FUN_ram_4202c69c(uVar2,*param_1,iVar4 - *param_1);
        if (iVar3 == 0) {
          *param_1 = iVar4;
          return 0;
        }
        iVar1 = -0x3b00;
        if (iVar3 + 0x6cU < 0xd) {
          iVar1 = iVar3 + -0x3b00;
        }
      }
      else {
        iVar1 = -0x3c80;
        if (iStack_34 - 2U < 2) {
          if ((uStack_30 & 0xfffffffb) == 9) {
            if (iStack_2c != 0 || iStack_28 != 0) {
              iVar1 = -0x3d00;
              goto LAB_ram_42067cb6;
            }
            iVar1 = FUN_ram_4206709c(param_3);
          }
          else {
            iVar1 = FUN_ram_420674fc(&iStack_2c,param_3);
          }
          if (iVar1 == 0) {
            iVar1 = FUN_ram_4206713a(param_3,*param_1,iVar4 - *param_1);
            *param_1 = iVar4;
            if (iVar1 == 0) {
              return 0;
            }
          }
        }
      }
LAB_ram_42067cb6:
      FUN_ram_42066dba(param_3);
      return iVar1;
    }
    iVar4 = -0x3b00;
  }
  else {
    iVar4 = -0x3d00;
  }
  return iVar1 + iVar4;
}

