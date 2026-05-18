
int FUN_ram_4202cffc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,uint *param_6,undefined4 param_7,undefined4 param_8,
                    uint param_9)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_480 [64];
  byte abStack_440 [1036];
  
  if ((((*(int *)(param_1 + 0x70) == 1) && (uVar2 = *(uint *)(param_1 + 4), uVar2 - 0x10 < 0x3f1))
      && (iVar3 = FUN_ram_4202be78(*(undefined4 *)(param_1 + 0x74)), iVar3 != 0)) &&
     (iVar8 = iVar3 + 1, (uint)(iVar8 * 2) <= uVar2)) {
    iVar4 = FUN_ram_4202c89e(param_1,param_2,param_3,param_7,abStack_440);
    if (iVar4 == 0) {
      pbVar9 = abStack_440 + iVar8;
      iVar10 = (uVar2 - 1) - iVar3;
      pbVar1 = abStack_440 + 1;
      iVar4 = FUN_ram_4202be88(pbVar1,iVar3,pbVar9,iVar10,*(undefined4 *)(param_1 + 0x74));
      if ((iVar4 == 0) &&
         (iVar4 = FUN_ram_4202be88(pbVar9,iVar10,pbVar1,iVar3,*(undefined4 *)(param_1 + 0x74)),
         iVar4 == 0)) {
        iVar4 = -0x4080;
        iVar10 = FUN_ram_42028dc8(*(undefined4 *)(param_1 + 0x74));
        if ((iVar10 != 0) &&
           (iVar4 = FUN_ram_420290ee(iVar10,param_4,param_5,auStack_480), iVar4 == 0)) {
          pbVar1 = pbVar1 + iVar3;
          iVar10 = FUN_ram_4202be34(abStack_440[0]);
          FUN_ram_42027c12(auStack_480,pbVar1,iVar3);
          iVar5 = FUN_ram_4202be34();
          uVar7 = 0xffffffff;
          iVar12 = 0;
          for (iVar11 = 0; uVar2 + iVar8 * -2 != iVar11; iVar11 = iVar11 + 1) {
            uVar6 = FUN_ram_4202be34(pbVar1[iVar11 + iVar3]);
            uVar7 = uVar7 & ~uVar6;
            iVar12 = iVar12 + (uVar7 & 1);
          }
          iVar8 = FUN_ram_4202be34(pbVar1[iVar12 + iVar3] ^ 1);
          if ((iVar5 == 0 && iVar10 == 0) && iVar8 == 0) {
            uVar2 = uVar2 - (int)(pbVar1 + iVar12 + iVar3 + (1 - (int)abStack_440));
            if (param_9 < uVar2) {
              iVar4 = -0x4400;
            }
            else {
              *param_6 = uVar2;
              if (uVar2 != 0) {
                FUN_ram_40399daa(param_8);
              }
            }
          }
          else {
            iVar4 = -0x4100;
          }
        }
      }
    }
    FUN_ram_420293a6(abStack_440,0x400);
    FUN_ram_420293a6(auStack_480,0x40);
    return iVar4;
  }
  return -0x4080;
}

