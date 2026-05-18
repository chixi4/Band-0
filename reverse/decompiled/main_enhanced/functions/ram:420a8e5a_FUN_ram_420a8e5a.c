
/* WARNING: Type propagation algorithm not settling */

int FUN_ram_420a8e5a(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int aiStack_3c [3];
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  
  aiStack_3c[0] = 0;
  aiStack_3c[1] = 0;
  iStack_40 = param_2;
  iVar1 = FUN_ram_4206e970(&iStack_40,param_2 + param_3,&iStack_44,0x30);
  if (iVar1 != 0) {
LAB_ram_420a8e8a:
    return iVar1 + -0x3d00;
  }
  iVar2 = iStack_40 + iStack_44;
  iVar1 = FUN_ram_4206ea58(&iStack_40,iVar2,&iStack_48);
  if (iVar1 != 0) goto LAB_ram_420a8e8a;
  if (iStack_48 != 0) {
    return -0x3d80;
  }
  iVar1 = FUN_ram_420a8c20(&iStack_40,iVar2,aiStack_3c,auStack_2c,aiStack_3c + 1);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_ram_4206e970(&iStack_40,iVar2,&iStack_44,4);
  if (iVar1 != 0) goto LAB_ram_420a8e8a;
  if (iStack_44 == 0) {
    return -0x3d60;
  }
  iVar1 = FUN_ram_420a85d4(aiStack_3c[0]);
  if (iVar1 == 0) {
    return -0x3c80;
  }
  iVar1 = FUN_ram_420a861e(param_1,iVar1);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (aiStack_3c[0] == 1) {
    aiStack_3c[2] = *param_1;
    uStack_30 = param_1[1];
    iVar1 = FUN_ram_420a8740(aiStack_3c + 2);
    uVar3 = 0;
    if (iVar1 == 1) {
      uVar3 = uStack_30;
    }
    iVar1 = FUN_ram_420707ba(uVar3,iStack_40,iStack_44);
  }
  else {
    if (1 < aiStack_3c[0] - 2U) {
      return -0x3c80;
    }
    iVar1 = FUN_ram_420a8cae(auStack_2c,param_1);
    if (iVar1 != 0) goto LAB_ram_420a8f38;
    iVar1 = FUN_ram_420a8ce6(param_1,iStack_40,iStack_44,param_4,param_5);
  }
  if (iVar1 == 0) {
    if (param_2 + param_3 != iStack_40 + iStack_44) {
      return -0x3d66;
    }
    return 0;
  }
LAB_ram_420a8f38:
  FUN_ram_420a85ae(param_1);
  return iVar1;
}

