
undefined4
FUN_ram_4202b040(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,byte param_5,
                undefined1 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte local_50 [16];
  byte abStack_40 [6];
  undefined1 auStack_3a [6];
  undefined4 uStack_34;
  
  FUN_ram_4202d766(param_1,0x10);
  FUN_ram_4202d766(param_2,0x10);
  FUN_ram_4202d766(param_7,6);
  FUN_ram_4202d766(param_8,6);
  FUN_ram_4202d766(param_3,7);
  FUN_ram_4202d766(param_4,7);
  local_50[0] = param_5;
  local_50[1] = param_6;
  FUN_ram_4039c11e(local_50 + 2,param_3,7);
  FUN_ram_4039c11e(local_50 + 9,param_4,7);
  FUN_ram_4202d766(local_50,0x10);
  iVar1 = 0;
  do {
    pbVar4 = (byte *)(param_2 + iVar1);
    pbVar3 = local_50 + iVar1;
    pbVar2 = (byte *)(param_9 + iVar1);
    iVar1 = iVar1 + 1;
    *pbVar2 = *pbVar4 ^ *pbVar3;
  } while (iVar1 != 0x10);
  iVar1 = FUN_ram_4202af72(param_1,param_9,param_9);
  if (iVar1 == 0) {
    FUN_ram_4039c11e(abStack_40,param_8,6);
    FUN_ram_4039c11e(auStack_3a,param_7,6);
    uStack_34 = 0;
    FUN_ram_4202d766(abStack_40,0x10);
    iVar1 = 0;
    do {
      pbVar3 = (byte *)(param_9 + iVar1);
      pbVar2 = abStack_40 + iVar1;
      iVar1 = iVar1 + 1;
      *pbVar3 = *pbVar2 ^ *pbVar3;
    } while (iVar1 != 0x10);
    iVar1 = FUN_ram_4202af72(param_1,param_9,param_9);
    if (iVar1 == 0) {
      FUN_ram_4202d766(param_9,0x10);
      return 0;
    }
  }
  return 0x11;
}

