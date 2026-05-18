
void FUN_ram_42069fbc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                     int param_5,uint param_6,int param_7,undefined4 param_8,undefined4 *param_9)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  
  uVar1 = 0;
  if (param_7 == 0x2a2a2a2a) {
    uVar1 = FUN_ram_420697ca(param_5,param_6);
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    param_6 = uVar1 >> 5;
    uVar1 = uVar1 & 0x1f;
  }
  iVar11 = 1;
  if (0x4f < param_6 << 5) {
    iVar11 = 3;
  }
  iVar7 = param_4 * 4;
  puVar5 = param_9 + (param_4 << iVar11);
  puVar6 = puVar5 + param_4;
  uVar2 = FUN_ram_42069ec0(param_3);
  (*(code *)&SUB_ram_40010488)(param_9,0,iVar7);
  *param_9 = 1;
  FUN_ram_42069ef2(param_9,param_9,param_8,param_4,param_3,param_4,uVar2,puVar6);
  puVar13 = param_9 + param_4;
  FUN_ram_4039c11e(puVar13,param_2,iVar7);
  puVar4 = puVar13;
  for (uVar12 = 2; (-(uint)(iVar11 != 1) & 6) + 2 != uVar12; uVar12 = uVar12 + 1) {
    FUN_ram_42069ef2(puVar4 + param_4,puVar4,puVar13,param_4,param_3,param_4,uVar2,puVar6);
    puVar4 = puVar4 + param_4;
  }
  FUN_ram_4039c11e(param_1,param_9,iVar7);
  uVar8 = 0;
  iVar9 = 0;
  while( true ) {
    do {
      FUN_ram_42069ef2(param_1,param_1,param_1,param_4,param_3,param_4,uVar2,puVar6);
      if (uVar1 == 0) {
        param_6 = param_6 - 1;
        uVar1 = 0x1f;
      }
      else {
        uVar1 = uVar1 - 1;
      }
      iVar9 = iVar9 + 1;
      uVar8 = *(uint *)(param_6 * 4 + param_5) >> (uVar1 & 0x1f) & 1 | uVar8 << 1;
    } while ((iVar11 != iVar9) && ((uVar1 != 0 || (param_6 != 0))));
    if (param_7 == 0x2a2a2a2a) {
      FUN_ram_4039c11e(puVar5,(undefined4 *)(iVar7 * uVar8 + (int)param_9),iVar7);
    }
    else {
      uVar10 = 0;
      puVar4 = param_9;
      do {
        uVar3 = FUN_ram_42069786(uVar10 ^ uVar8);
        uVar10 = uVar10 + 1;
        FUN_ram_42069910(puVar5,puVar4,param_4,~uVar3);
        puVar4 = puVar4 + param_4;
      } while (uVar12 != uVar10);
    }
    FUN_ram_42069ef2(param_1,param_1,puVar5,param_4,param_3,param_4,uVar2,puVar6);
    if ((uVar1 == 0) && (param_6 == 0)) break;
    uVar8 = 0;
    iVar9 = 0;
  }
  return;
}

