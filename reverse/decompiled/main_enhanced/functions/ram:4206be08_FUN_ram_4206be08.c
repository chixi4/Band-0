
undefined4 FUN_ram_4206be08(int param_1,undefined1 param_2,int param_3,uint param_4)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 uStack_44;
  byte local_40 [8];
  undefined8 uStack_38;
  
  uStack_44 = 0;
  if (param_4 == 0) {
    uVar2 = 0xffffffec;
  }
  else {
    pbVar6 = (byte *)(param_1 + 0x168);
    (*(code *)&SUB_ram_40010488)(pbVar6,0,0x10);
    (*(code *)&SUB_ram_40010488)((byte *)(param_1 + 0x178),0,0x10);
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined1 *)(param_1 + 0x188) = param_2;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x154) = 0;
    if (param_4 == 0xc) {
      FUN_ram_4039c11e(pbVar6,param_3,0xc);
      *(undefined1 *)(param_1 + 0x177) = 1;
    }
    else {
      local_40[0] = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[3] = 0;
      local_40[4] = 0;
      local_40[5] = 0;
      local_40[6] = 0;
      local_40[7] = 0;
      uStack_38 = (*(code *)&SUB_ram_400108c8)(param_4 << 3,param_4 >> 0x1d);
      pbVar7 = local_40;
      do {
        uVar8 = param_4;
        if (0x10 < param_4) {
          uVar8 = 0x10;
        }
        uVar5 = 0;
        pbVar4 = pbVar6;
        do {
          pbVar3 = (byte *)(param_3 + uVar5);
          uVar5 = uVar5 + 1;
          *pbVar4 = *pbVar3 ^ *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (uVar8 != uVar5);
        param_4 = param_4 - uVar8;
        FUN_ram_4206b804(param_1,pbVar6,pbVar6);
        param_3 = param_3 + uVar8;
        pbVar4 = pbVar6;
      } while (param_4 != 0);
      do {
        bVar1 = *pbVar7;
        pbVar3 = pbVar4 + 1;
        pbVar7 = pbVar7 + 1;
        *pbVar4 = *pbVar4 ^ bVar1;
        pbVar4 = pbVar3;
      } while ((byte *)(param_1 + 0x178) != pbVar3);
      FUN_ram_4206b804(param_1,pbVar6,pbVar6);
    }
    uVar2 = FUN_ram_4206ab3c(param_1,pbVar6,0x10,param_1 + 0x158,&uStack_44);
  }
  return uVar2;
}

