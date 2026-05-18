
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_42012fb0(int param_1,uint *param_2,uint *param_3,uint *param_4,undefined4 param_5,
                undefined4 param_6,int *param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iStack_24;
  
  iVar2 = 2;
  if (param_1 < 3) {
    iVar2 = param_1;
  }
  *param_7 = 0;
  for (uVar1 = 0; (int)uVar1 < iVar2; uVar1 = uVar1 + 1) {
    uVar9 = 1 << (uVar1 & 0x1f);
    if (((((*param_2 & uVar9) != 0) || ((*param_3 & uVar9) != 0)) || ((uVar9 & *param_4) != 0)) &&
       (iVar4 = FUN_ram_42013668(uVar1), iVar4 == 0)) {
      return 0x103;
    }
  }
  puVar3 = (undefined4 *)FUN_ram_40390474(0x2c,0x1000);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[3] = param_3;
    puVar3[4] = param_4;
    *puVar3 = param_5;
    puVar3[2] = param_2;
    puVar3[1] = param_6;
    puVar3[5] = *param_2;
    puVar3[6] = param_2[1];
    puVar3[7] = *param_3;
    puVar3[8] = param_3[1];
    puVar3[9] = *param_4;
    puVar3[10] = param_4[1];
    param_2[1] = 0;
    *param_2 = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_4[1] = 0;
    *param_4 = 0;
    FUN_ram_420136a0();
    FUN_ram_40396966();
    piVar8 = (int *)&DAT_ram_3fcc4f00;
    for (uVar1 = 0; (int)uVar1 < iVar2; uVar1 = uVar1 + 1) {
      uVar9 = 1 << (uVar1 & 0x1f);
      if ((((puVar3[5] & uVar9) != 0) || ((puVar3[7] & uVar9) != 0)) || ((uVar9 & puVar3[9]) != 0))
      {
        if (*piVar8 == 0) {
          FUN_ram_42013686(uVar1,0x4200317c);
        }
        *piVar8 = *piVar8 + 1;
      }
      piVar8 = piVar8 + 1;
    }
    for (uVar1 = 0; (int)uVar1 < iVar2; uVar1 = uVar1 + 1) {
      uVar9 = 1 << (uVar1 & 0x1f);
      if ((((uVar9 & puVar3[5]) != 0) && (iVar4 = FUN_ram_42013620(uVar1,&iStack_24), iVar4 == 0))
         && (iStack_24 != 0)) {
        uVar5 = *puVar3;
        uVar6 = puVar3[1];
        *param_2 = *param_2 | uVar9;
        FUN_ram_4201471e(uVar5,uVar6);
      }
    }
    FUN_ram_40396966();
    iVar2 = _DAT_ram_3fcc4f08 + 1;
    iVar4 = FUN_ram_40390506(_DAT_ram_3fcc4f0c,iVar2 * 4,0x1000);
    if (iVar4 != 0) {
      iVar7 = _DAT_ram_3fcc4f08 * 4;
      _DAT_ram_3fcc4f08 = iVar2;
      _DAT_ram_3fcc4f0c = iVar4;
      *(undefined4 **)(iVar4 + iVar7) = puVar3;
      FUN_ram_40396994();
      FUN_ram_420136a0();
      FUN_ram_40396994();
      *param_7 = (int)puVar3;
      return 0;
    }
    FUN_ram_40396994();
    FUN_ram_420136a0();
    FUN_ram_40396994();
    thunk_FUN_ram_40390634(puVar3);
  }
  return 0x101;
}

