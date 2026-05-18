
int FUN_ram_4202e1ce(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 *puVar9;
  byte local_348 [48];
  undefined1 auStack_318 [32];
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2e8 [280];
  undefined1 local_1d0 [3];
  char cStack_1cd;
  undefined4 uStack_1c0;
  undefined1 uStack_1b9;
  undefined1 auStack_1b8 [400];
  
  iVar1 = -0x38;
  if (param_3 < 0x181) {
    (*(code *)&SUB_ram_40010488)(local_1d0,0,0x1a0);
    uStack_1c0 = (*(code *)&SUB_ram_400108cc)(param_3);
    uStack_1b9 = 0x30;
    FUN_ram_40399daa(auStack_1b8,param_2,param_3);
    auStack_1b8[param_3] = 0x80;
    pbVar7 = local_348 + 0x10;
    iVar1 = 0;
    do {
      pbVar7[iVar1] = (byte)iVar1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x20);
    FUN_ram_420231ac(auStack_2e8);
    iVar1 = FUN_ram_420231fe(auStack_2e8,pbVar7,0x100);
    if (iVar1 == 0) {
      iVar8 = 0;
      do {
        local_348[0] = 0;
        local_348[1] = 0;
        local_348[2] = 0;
        local_348[3] = 0;
        local_348[4] = 0;
        local_348[5] = 0;
        local_348[6] = 0;
        local_348[7] = 0;
        local_348[8] = 0;
        local_348[9] = 0;
        local_348[10] = 0;
        local_348[0xb] = 0;
        local_348[0xc] = 0;
        local_348[0xd] = 0;
        local_348[0xe] = 0;
        local_348[0xf] = 0;
        puVar9 = local_1d0;
        uVar6 = param_3 + 0x19;
        do {
          iVar1 = 0;
          pbVar3 = local_348;
          do {
            pbVar2 = puVar9 + iVar1;
            iVar1 = iVar1 + 1;
            *pbVar3 = *pbVar2 ^ *pbVar3;
            pbVar3 = pbVar3 + 1;
          } while (iVar1 != 0x10);
          puVar9 = puVar9 + 0x10;
          uVar4 = uVar6;
          if (0x10 < uVar6) {
            uVar4 = 0x10;
          }
          uVar6 = uVar6 - uVar4;
          iVar1 = FUN_ram_42024198(auStack_2e8,1,local_348,local_348);
          if (iVar1 != 0) goto LAB_ram_4202e33c;
        } while (uVar6 != 0);
        FUN_ram_40399daa(auStack_318 + iVar8,local_348,0x10);
        iVar8 = iVar8 + 0x10;
        cStack_1cd = cStack_1cd + '\x01';
      } while (iVar8 != 0x30);
      iVar1 = FUN_ram_420231fe(auStack_2e8,auStack_318,0x100);
      if (iVar1 == 0) {
        iVar8 = param_1;
        do {
          iVar1 = FUN_ram_42024198(auStack_2e8,1,auStack_2f8);
          if (iVar1 != 0) break;
          iVar5 = iVar8 + 0x10;
          FUN_ram_40399daa(iVar8,auStack_2f8,0x10);
          iVar8 = iVar5;
        } while (param_1 + 0x30 != iVar5);
      }
    }
LAB_ram_4202e33c:
    FUN_ram_420231ba(auStack_2e8);
    FUN_ram_420293a6(local_1d0,0x1a0);
    FUN_ram_420293a6(auStack_318,0x30);
    FUN_ram_420293a6(pbVar7,0x20);
    FUN_ram_420293a6(local_348,0x10);
    if (iVar1 != 0) {
      FUN_ram_420293a6(param_1,0x30);
    }
  }
  return iVar1;
}

