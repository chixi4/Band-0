
void FUN_ram_420353fc(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 *local_b8 [2];
  uint local_b0 [16];
  undefined1 local_70 [72];
  
  local_b8[0] = local_70;
  local_b8[1] = (undefined1 *)param_2;
  iVar1 = FUN_ram_420350cc(param_3,param_4);
  iVar1 = (int)((param_4 * 0x40 - iVar1) * 0x10000) >> 0x10;
  uVar8 = iVar1 % 0x20;
  iVar6 = (int)(char)(iVar1 / 0x20);
  FUN_ram_4203507a(local_b0,iVar6);
  if ((int)uVar8 < 1) {
    FUN_ram_4203511c(local_b0 + iVar6,param_3,param_4);
  }
  else {
    puVar4 = local_b0 + iVar6;
    uVar2 = 0;
    for (uVar3 = 0; uVar3 < param_4; uVar3 = uVar3 + 1) {
      uVar5 = *(uint *)(uVar3 * 4 + param_3);
      *puVar4 = uVar5 << (uVar8 & 0x1f) | uVar2;
      uVar2 = uVar5 >> (0x20 - uVar8 & 0x1f);
      puVar4 = puVar4 + 1;
    }
  }
  puVar7 = local_b0 + param_4;
  uVar8 = 1;
  puVar4 = local_b0 + (param_4 - 1);
  for (; -1 < iVar1; iVar1 = (iVar1 + -1) * 0x10000 >> 0x10) {
    uVar2 = 0;
    for (iVar6 = 0; iVar6 < (int)(param_4 << 1); iVar6 = (iVar6 + 1) * 0x1000000 >> 0x18) {
      uVar3 = *(uint *)(local_b8[uVar8] + iVar6 * 4);
      uVar5 = uVar3 - (local_b0[iVar6] + uVar2);
      if (uVar3 != uVar5) {
        uVar2 = (uint)(uVar3 < uVar5);
      }
      *(uint *)(local_b8[uVar8 ^ 1] + iVar6 * 4) = uVar5;
    }
    uVar8 = (uint)(uVar8 == uVar2);
    FUN_ram_42034f30(local_b0,param_4);
    *puVar4 = *puVar7 << 0x1f | *puVar4;
    FUN_ram_42034f30(puVar7,param_4);
  }
  FUN_ram_4203511c(param_1,local_b8[uVar8],param_4);
  return;
}

