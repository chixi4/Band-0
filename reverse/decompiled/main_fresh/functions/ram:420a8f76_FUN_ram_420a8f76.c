
/* WARNING: Type propagation algorithm not settling */

int FUN_ram_420a8f76(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_40;
  int aiStack_3c [3];
  undefined4 uStack_30;
  undefined1 auStack_2c [20];
  
  aiStack_3c[0] = 0;
  aiStack_3c[1] = 0;
  iVar1 = FUN_ram_4206e970(param_1,param_2,&local_40,0x30);
  if (iVar1 == 0) {
    iVar3 = *param_1 + local_40;
    iVar1 = FUN_ram_420a8c20(param_1,iVar3,aiStack_3c,auStack_2c,aiStack_3c + 1);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_4206ebaa(param_1,iVar3,&local_40);
    if (iVar1 == 0) {
      if (iVar3 != *param_1 + local_40) {
        return -0x3b66;
      }
      iVar1 = FUN_ram_420a85d4(aiStack_3c[0]);
      if (iVar1 == 0) {
        return -0x3c80;
      }
      iVar1 = FUN_ram_420a861e(param_3,iVar1);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (aiStack_3c[0] == 1) {
        aiStack_3c[2] = *param_3;
        uStack_30 = param_3[1];
        iVar1 = FUN_ram_420a8740(aiStack_3c + 2);
        uVar4 = 0;
        if (iVar1 == 1) {
          uVar4 = uStack_30;
        }
        iVar2 = FUN_ram_4206f6f2(uVar4,*param_1,iVar3 - *param_1);
        if (iVar2 == 0) {
          *param_1 = iVar3;
          return 0;
        }
        iVar1 = -0x3b00;
        if (iVar2 + 0x6cU < 0xd) {
          iVar1 = iVar2 + -0x3b00;
        }
      }
      else {
        iVar1 = -0x3c80;
        if ((aiStack_3c[0] - 2U < 2) && (iVar1 = FUN_ram_420a8cae(auStack_2c,param_3), iVar1 == 0))
        {
          iVar1 = FUN_ram_420a890c(param_3,*param_1,iVar3 - *param_1);
          *param_1 = iVar3;
          if (iVar1 == 0) {
            return 0;
          }
        }
      }
      FUN_ram_420a85ae(param_3);
      return iVar1;
    }
    iVar3 = -0x3b00;
  }
  else {
    iVar3 = -0x3d00;
  }
  return iVar1 + iVar3;
}

