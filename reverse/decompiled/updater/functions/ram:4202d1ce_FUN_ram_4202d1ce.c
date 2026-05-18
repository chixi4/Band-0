
int FUN_ram_4202d1ce(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                    undefined4 param_5,undefined4 param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte local_430 [11];
  undefined1 auStack_425 [1013];
  
  iVar6 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 0x70) == 0) {
    iVar1 = -0x4080;
    if (iVar6 - 0x10U < 0x3f1) {
      iVar1 = FUN_ram_4202c89e();
      if (iVar1 == 0) {
        uVar8 = iVar6 - 0xb;
        uVar7 = param_7;
        if (uVar8 < param_7) {
          uVar7 = uVar8;
        }
        uVar3 = FUN_ram_4202be34(local_430[0]);
        iVar2 = 2;
        uVar4 = FUN_ram_4202be34(local_430[1] ^ 2);
        uVar9 = 0;
        iVar1 = 0;
        do {
          uVar5 = FUN_ram_4202be34(local_430[iVar2]);
          uVar9 = uVar9 | ~uVar5;
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + (~uVar9 & 1);
        } while (iVar6 != iVar2);
        uVar5 = FUN_ram_4202be46(iVar1,8);
        uVar5 = uVar3 | uVar4 | ~uVar9 | uVar5;
        uVar3 = (iVar6 - iVar1) - 3U & ~uVar5 | uVar7 & uVar5;
        uVar4 = FUN_ram_4202be46(uVar7,uVar3);
        FUN_ram_42027d74(uVar5 | uVar4,auStack_425,uVar8);
        iVar1 = -(~uVar5 & uVar4 & 0x4400 | uVar5 & 0x4100);
        uVar8 = uVar3 & ~uVar4 | uVar7 & uVar4;
        FUN_ram_42027c38(local_430 + (iVar6 - uVar7),uVar7,uVar7 - uVar8);
        if (param_7 != 0) {
          FUN_ram_40399daa(param_6,local_430 + (iVar6 - uVar7),uVar7);
        }
        *param_4 = uVar8;
      }
      FUN_ram_420293a6(local_430,0x400);
    }
  }
  else {
    iVar1 = -0x4080;
  }
  return iVar1;
}

