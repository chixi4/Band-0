
undefined4 FUN_ram_42035f54(byte *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  if (param_3 != 0) {
    if (param_2 == 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 == 0 && *(int *)(param_1 + 0x54) == 0) {
      return 0;
    }
    iVar5 = *(int *)(param_1 + 0x44);
    *(int *)(param_1 + 0x50) = iVar2 + -1;
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - (uint)(iVar2 == 0);
    if (iVar5 != 0) {
      uVar4 = 0x10 - iVar5;
      if (param_3 < uVar4) {
        FUN_ram_42037000(param_1 + iVar5 + 0x30,param_3,param_2,param_3);
        *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + param_3;
        return 1;
      }
      FUN_ram_42037000(param_1 + iVar5 + 0x30,uVar4,param_2,uVar4);
      param_3 = (param_3 - 0x10) + iVar5;
      param_2 = param_2 + uVar4;
      param_1[0x44] = 0;
      param_1[0x45] = 0;
      param_1[0x46] = 0;
      param_1[0x47] = 0;
      pbVar1 = param_1;
      do {
        pbVar3 = pbVar1 + 1;
        *pbVar1 = *pbVar1 ^ pbVar1[0x30];
        pbVar1 = pbVar3;
      } while (pbVar3 != param_1 + 0x10);
      FUN_ram_42035c8e(param_1,param_1,*(undefined4 *)(param_1 + 0x48));
    }
    param_2 = param_2 + param_3;
    for (; iVar2 = param_2 - param_3, 0x10 < param_3; param_3 = param_3 - 0x10) {
      iVar5 = 0;
      do {
        pbVar1 = param_1 + iVar5;
        pbVar3 = (byte *)(iVar2 + iVar5);
        iVar5 = iVar5 + 1;
        *pbVar1 = *pbVar3 ^ *pbVar1;
      } while (iVar5 != 0x10);
      FUN_ram_42035c8e(param_1,param_1,*(undefined4 *)(param_1 + 0x48));
    }
    if (param_3 != 0) {
      FUN_ram_42037000(param_1 + 0x30,param_3,iVar2,param_3);
      *(uint *)(param_1 + 0x44) = param_3;
    }
  }
  return 1;
}

