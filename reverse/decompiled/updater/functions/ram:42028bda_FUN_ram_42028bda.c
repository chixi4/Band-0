
undefined4
FUN_ram_42028bda(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,byte *param_5
                ,int param_6)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pbVar5 = (byte *)&local_40;
  *param_4 = 0;
  uVar9 = *(uint *)(param_1 + 0x148);
  uVar10 = uVar9 >> 0x1d | *(int *)(param_1 + 0x14c) << 3;
  uVar6 = *(uint *)(param_1 + 0x150);
  uVar8 = uVar6 >> 0x1d | *(int *)(param_1 + 0x154) << 3;
  if ((uVar9 == 0 && *(int *)(param_1 + 0x14c) == 0) && ((uVar6 & 0xf) != 0)) {
    FUN_ram_4202818a(param_1,param_1 + 0x178);
  }
  uVar2 = 0xffffffec;
  if (param_6 - 4U < 0xd) {
    if ((uVar9 & 0xf) != 0) {
      FUN_ram_4202818a(param_1,param_1 + 0x178);
    }
    FUN_ram_40399daa(param_5,param_1 + 0x158,param_6);
    if (((uVar9 | uVar6) & 0x1fffffff) != 0 || (uVar10 != 0 || uVar8 != 0)) {
      local_40 = (*(code *)&SUB_ram_400108cc)(uVar8);
      uStack_3c = (*(code *)&SUB_ram_400108cc)(uVar6 << 3);
      uStack_38 = (*(code *)&SUB_ram_400108cc)(uVar10);
      uStack_34 = (*(code *)&SUB_ram_400108cc)(uVar9 << 3);
      pbVar4 = (byte *)(param_1 + 0x178);
      pbVar3 = pbVar4;
      do {
        bVar1 = *pbVar5;
        pbVar7 = pbVar3 + 1;
        pbVar5 = pbVar5 + 1;
        *pbVar3 = *pbVar3 ^ bVar1;
        pbVar3 = pbVar7;
      } while (pbVar7 != (byte *)(param_1 + 0x188));
      FUN_ram_4202818a(param_1,pbVar4);
      pbVar5 = param_5;
      do {
        bVar1 = *pbVar4;
        pbVar3 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
        *pbVar5 = *pbVar5 ^ bVar1;
        pbVar5 = pbVar3;
      } while (pbVar3 != param_5 + param_6);
    }
    uVar2 = 0;
  }
  return uVar2;
}

