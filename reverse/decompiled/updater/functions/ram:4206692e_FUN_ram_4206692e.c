
int FUN_ram_4206692e(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                    undefined4 param_6)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint *puVar8;
  byte *pbStack_68;
  undefined4 uStack_64;
  byte local_60 [15];
  undefined1 uStack_51;
  byte abStack_50 [28];
  
  if (param_3 == 0) {
    FUN_ram_40399daa(local_60,0x3c079af8,0x10);
    uStack_51 = 1;
  }
  else {
    pbStack_68 = (byte *)0x3c079af8;
    uStack_64 = 0x10;
    iVar1 = FUN_ram_42021e74(param_1,param_2,1,&pbStack_68,&uStack_64,local_60);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar7 = 0;
    while( true ) {
      puVar4 = (undefined4 *)(param_4 + uVar7 * 4);
      puVar8 = (uint *)(uVar7 * 4 + param_5);
      if (param_3 - 1U <= uVar7) break;
      iVar1 = FUN_ram_42021e74(param_1,param_2,1,puVar4,puVar8,abStack_50);
      if (iVar1 != 0) {
        return iVar1;
      }
      FUN_ram_420668ee(local_60);
      iVar1 = 0;
      pbVar2 = local_60;
      do {
        pbVar5 = abStack_50 + iVar1;
        iVar1 = iVar1 + 1;
        *pbVar2 = *pbVar5 ^ *pbVar2;
        pbVar2 = pbVar2 + 1;
      } while (iVar1 != 0x10);
      uVar7 = uVar7 + 1;
    }
    uVar7 = *puVar8;
    if (0xf < uVar7) {
      pbVar2 = (byte *)FUN_ram_42022974(*puVar4,uVar7);
      if (pbVar2 == (byte *)0x0) {
        return -1;
      }
      iVar1 = 0;
      pbVar5 = pbVar2 + *puVar8;
      if (0xf < (int)*puVar8) {
        do {
          pbVar6 = local_60 + iVar1;
          iVar1 = iVar1 + 1;
          pbVar5[-0x10] = *pbVar6 ^ pbVar5[-0x10];
          pbVar5 = pbVar5 + 1;
        } while (iVar1 != 0x10);
      }
      pbStack_68 = pbVar2;
      iVar1 = FUN_ram_42021e74(param_1,param_2,1,&pbStack_68,puVar8,param_6);
      FUN_ram_42022954(pbVar2,*puVar8);
      return iVar1;
    }
    FUN_ram_420668ee(local_60);
    abStack_50[0] = 0;
    abStack_50[1] = 0;
    abStack_50[2] = 0;
    abStack_50[3] = 0;
    abStack_50[4] = 0;
    abStack_50[5] = 0;
    abStack_50[6] = 0;
    abStack_50[7] = 0;
    abStack_50[8] = 0;
    abStack_50[9] = 0;
    abStack_50[10] = 0;
    abStack_50[0xb] = 0;
    abStack_50[0xc] = 0;
    abStack_50[0xd] = 0;
    abStack_50[0xe] = 0;
    abStack_50[0xf] = 0;
    iVar3 = FUN_ram_40399daa(abStack_50,*puVar4,uVar7);
    abStack_50[uVar7] = 0x80;
    iVar1 = 0;
    pbVar2 = local_60;
    do {
      pbVar5 = (byte *)(iVar3 + iVar1);
      iVar1 = iVar1 + 1;
      *pbVar2 = *pbVar5 ^ *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (iVar1 != 0x10);
  }
  uStack_64 = 0x10;
  pbStack_68 = local_60;
  iVar1 = FUN_ram_42021e74(param_1,param_2,1,&pbStack_68,&uStack_64,param_6);
  return iVar1;
}

