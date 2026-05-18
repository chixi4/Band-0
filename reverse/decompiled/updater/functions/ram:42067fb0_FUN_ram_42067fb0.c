
int FUN_ram_42067fb0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iStack_34;
  undefined1 auStack_30 [4];
  int iStack_2c;
  int iStack_28;
  
  if (param_3 == 0) {
    return -0x3d00;
  }
  FUN_ram_42068242(&iStack_2c);
  pcVar3 = (char *)(param_3 + -1 + param_2);
  if (*pcVar3 != '\0') goto LAB_ram_4206809a;
  iVar1 = FUN_ram_4206824e(&iStack_2c,0x3c073554,0x3c073534,param_2,0,0,auStack_30);
  if (iVar1 == 0) {
    iStack_34 = iStack_2c;
    iVar1 = FUN_ram_42066de0(1);
    if (iVar1 == 0) {
      FUN_ram_420685ba(&iStack_2c);
      return -0x3c80;
    }
    iVar1 = FUN_ram_42066e2a(param_1,iVar1);
    if (iVar1 == 0) {
      uVar2 = FUN_ram_420674dc(*param_1,param_1[1]);
      iVar1 = FUN_ram_4202c69c(uVar2,iStack_34,iStack_28);
      if (iVar1 != 0) {
        FUN_ram_42066dba(param_1);
      }
    }
  }
  else if (iVar1 == -0x1080) {
    if (*pcVar3 != '\0') {
LAB_ram_4206809a:
      FUN_ram_420685ba(&iStack_2c);
      iVar1 = FUN_ram_42066de0(1);
      if (iVar1 == 0) {
        return -0x3c80;
      }
      iVar1 = FUN_ram_42066e2a(param_1,iVar1);
      if (iVar1 != 0) {
        return iVar1;
      }
      iStack_34 = param_2;
      uVar2 = FUN_ram_420674dc(*param_1,param_1[1]);
      iVar1 = FUN_ram_4202c69c(uVar2,iStack_34,param_3);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_ram_42066dba(param_1);
      if (iVar1 == -0x62) {
        iStack_34 = param_2;
        iVar1 = FUN_ram_42067be4(&iStack_34,param_2 + param_3,param_1);
        return iVar1;
      }
      return iVar1;
    }
    iVar1 = FUN_ram_4206824e(&iStack_2c,0x3c073590,0x3c073574,param_2,0,0,auStack_30);
    if (iVar1 == 0) {
      iStack_34 = iStack_2c;
      iVar1 = FUN_ram_42067be4(&iStack_34,iStack_28 + iStack_2c,param_1);
    }
    else if (iVar1 == -0x1080) goto LAB_ram_4206809a;
  }
  FUN_ram_420685ba(&iStack_2c);
  return iVar1;
}

