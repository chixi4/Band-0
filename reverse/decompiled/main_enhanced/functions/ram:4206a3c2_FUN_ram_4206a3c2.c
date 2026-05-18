
void FUN_ram_4206a3c2(uint *param_1,int param_2,undefined4 param_3,uint param_4,uint *param_5,
                     uint param_6,uint *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  
  iVar1 = param_6 * 4;
  puVar7 = param_7 + param_6;
  puVar8 = puVar7 + param_6;
  puVar10 = puVar8 + param_6;
  puVar12 = puVar10 + param_6;
  if (param_2 == 0) {
    puVar12 = (uint *)0x0;
  }
  uVar11 = param_6;
  if (param_4 < param_6) {
    uVar11 = param_4;
  }
  FUN_ram_4039c11e(param_7,param_3,uVar11 * 4);
  (*(code *)&SUB_ram_40010488)(param_7 + uVar11,0,(param_6 - uVar11) * 4);
  if (param_1 != param_5) {
    FUN_ram_4039c11e(param_1,param_5,iVar1);
  }
  if (param_2 != 0) {
    (*(code *)&SUB_ram_40010488)(param_2,0,iVar1);
    (*(code *)&SUB_ram_40010488)(puVar12,0,iVar1);
    *puVar12 = 1;
  }
  for (uVar13 = 0; uVar13 < (uVar11 + param_6) * 0x20; uVar13 = uVar13 + 1) {
    uVar2 = FUN_ram_42069786(*param_7 & 1);
    uVar3 = FUN_ram_42069786(*param_1 & 1);
    uVar9 = uVar2 & uVar3;
    FUN_ram_42069c86(puVar7,param_1,param_7,param_6);
    FUN_ram_4039c11e(puVar8,puVar7,iVar1);
    FUN_ram_42069910(puVar8,param_7,param_6,uVar9);
    FUN_ram_4039c11e(puVar10,param_7,iVar1);
    FUN_ram_42069910(puVar10,param_1,param_6,~uVar3 & uVar2);
    FUN_ram_42069910(puVar10,puVar7,param_6,uVar9);
    FUN_ram_42069aec(puVar10,param_6,1);
    FUN_ram_4039c11e(param_7,puVar8,iVar1);
    FUN_ram_4039c11e(param_1,puVar10,iVar1);
    uVar4 = FUN_ram_4206989c(param_1,param_7,param_6);
    FUN_ram_4206993e(param_7,param_1,param_6,uVar4);
    if (param_2 != 0) {
      uVar5 = FUN_ram_42069c86(puVar7,param_2,puVar12,param_6);
      FUN_ram_42069c30(puVar7,param_5,param_6,uVar5);
      FUN_ram_4039c11e(puVar8,puVar7,iVar1);
      FUN_ram_42069910(puVar8,puVar12,param_6,uVar9);
      FUN_ram_4039c11e(puVar10,puVar12,iVar1);
      FUN_ram_42069910(puVar10,param_2,param_6,~uVar3 & uVar2);
      FUN_ram_42069910(puVar10,puVar7,param_6,uVar9);
      iVar6 = FUN_ram_42069c30(puVar10,param_5,param_6,*puVar10 & 1);
      FUN_ram_42069aec(puVar10,param_6,1);
      puVar10[param_6 - 1] = puVar10[param_6 - 1] | iVar6 << 0x1f;
      FUN_ram_4039c11e(puVar12,puVar8,iVar1);
      FUN_ram_4039c11e(param_2,puVar10,iVar1);
      FUN_ram_4206993e(puVar12,param_2,param_6,uVar4);
    }
  }
  return;
}

