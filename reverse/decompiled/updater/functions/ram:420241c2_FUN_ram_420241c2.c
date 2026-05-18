
undefined4
FUN_ram_420241c2(undefined4 param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_40 [24];
  
  if (param_2 < 2) {
    if (param_3 != 0) {
      if ((param_3 & 0xf) != 0) {
        return 0xffffffde;
      }
      if (param_2 == 0) {
        iVar8 = param_5 + param_3;
        do {
          FUN_ram_40399daa(auStack_40,param_5);
          FUN_ram_42023bea(param_1,param_5,param_6);
          iVar4 = 0;
          do {
            pbVar3 = (byte *)(param_6 + iVar4);
            pbVar5 = (byte *)(param_4 + iVar4);
            iVar4 = iVar4 + 1;
            *pbVar3 = *pbVar5 ^ *pbVar3;
          } while (iVar4 != 0x10);
          param_5 = param_5 + 0x10;
          FUN_ram_40399daa(param_4,auStack_40,0x10);
          param_6 = param_6 + 0x10;
        } while (param_5 != iVar8);
      }
      else {
        uVar7 = 0;
        iVar8 = param_4;
        do {
          iVar2 = param_6 + uVar7;
          iVar4 = 0;
          do {
            pbVar6 = (byte *)(param_5 + uVar7 + iVar4);
            pbVar3 = (byte *)(iVar8 + iVar4);
            pbVar5 = (byte *)(iVar2 + iVar4);
            iVar4 = iVar4 + 1;
            *pbVar5 = *pbVar6 ^ *pbVar3;
          } while (iVar4 != 0x10);
          uVar7 = uVar7 + 0x10;
          FUN_ram_42023630(param_1,iVar2,iVar2);
          iVar8 = iVar2;
        } while (param_3 != uVar7);
        FUN_ram_40399daa(param_4,iVar2,0x10);
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffdf;
  }
  return uVar1;
}

