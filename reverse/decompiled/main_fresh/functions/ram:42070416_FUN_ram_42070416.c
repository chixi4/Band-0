
int FUN_ram_42070416(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                    int param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((((param_4 == 0 && param_5 == 0) || (param_6 != 0)) && (*(int *)(param_1 + 0x70) == 0)) &&
     (iVar1 = FUN_ram_4206f070(param_4,param_5,param_6,*(undefined4 *)(param_1 + 4),param_7),
     iVar1 == 0)) {
    iVar1 = FUN_ram_4206d7ce(1,*(undefined4 *)(param_1 + 4));
    if (iVar1 != 0) {
      iVar2 = FUN_ram_4206d7ce(1,*(undefined4 *)(param_1 + 4));
      if (iVar2 != 0) {
        iVar3 = FUN_ram_4206f8f4(param_1,param_2,param_3,param_7,iVar1);
        if ((iVar3 == 0) && (iVar3 = FUN_ram_4206f864(param_1,iVar1,iVar2), iVar3 == 0)) {
          iVar3 = FUN_ram_4206b28c(iVar2,param_7,*(undefined4 *)(param_1 + 4));
          if (iVar3 == 0) {
            FUN_ram_4039c11e(param_7,iVar1,*(undefined4 *)(param_1 + 4));
            iVar3 = 0;
          }
          else {
            iVar3 = -0x4300;
          }
        }
        FUN_ram_4206d7fc(iVar1,*(undefined4 *)(param_1 + 4));
        FUN_ram_4206d7fc(iVar2,*(undefined4 *)(param_1 + 4));
        if (iVar3 == 0) {
          return 0;
        }
        (*(code *)&SUB_ram_40010488)(param_7,0x21,*(undefined4 *)(param_1 + 4));
        return iVar3;
      }
      FUN_ram_4206d7d4(iVar1);
    }
    iVar1 = -0x10;
  }
  else {
    iVar1 = -0x4080;
  }
  return iVar1;
}

