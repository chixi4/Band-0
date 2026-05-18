
undefined4
FUN_ram_4206e662(undefined4 param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_30 [16];
  
  if (param_2 < 2) {
    uVar1 = 0xffffffa2;
    if ((param_3 & 0xf) == 0) {
      if (param_2 == 0) {
        iVar7 = param_6 + param_3;
        for (; param_6 != iVar7; param_6 = param_6 + 0x10) {
          FUN_ram_4039c11e(auStack_30,param_5);
          FUN_ram_4206e44c(param_1,param_5,param_6);
          iVar3 = 0;
          do {
            pbVar2 = (byte *)(param_6 + iVar3);
            pbVar4 = (byte *)(param_4 + iVar3);
            iVar3 = iVar3 + 1;
            *pbVar2 = *pbVar4 ^ *pbVar2;
          } while (iVar3 != 0x10);
          FUN_ram_4039c11e(param_4,auStack_30,0x10);
          param_5 = param_5 + 0x10;
        }
      }
      else {
        iVar7 = 0;
        while( true ) {
          iVar3 = param_6 - iVar7;
          if (param_3 + iVar7 == 0) break;
          iVar6 = 0;
          do {
            pbVar5 = (byte *)((param_5 - iVar7) + iVar6);
            pbVar2 = (byte *)(param_4 + iVar6);
            pbVar4 = (byte *)(iVar3 + iVar6);
            iVar6 = iVar6 + 1;
            *pbVar4 = *pbVar5 ^ *pbVar2;
          } while (iVar6 != 0x10);
          FUN_ram_4206e44c(param_1,iVar3,iVar3);
          FUN_ram_4039c11e(param_4,iVar3,0x10);
          iVar7 = iVar7 + -0x10;
        }
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffa4;
  }
  return uVar1;
}

