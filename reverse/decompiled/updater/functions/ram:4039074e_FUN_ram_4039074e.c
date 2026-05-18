
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4039074e(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_s3;
  uint uStack_38;
  uint auStack_34 [4];
  uint auStack_24 [3];
  
  auStack_24[0] = 4;
  uStack_38 = param_3;
  auStack_34[0] = param_2;
  FUN_ram_403916d2(auStack_24,auStack_34,&uStack_38);
  if (param_1 == 0) {
    iVar3 = FUN_ram_4039064a(auStack_24[0],auStack_34[0],uStack_38);
    return iVar3;
  }
  if (auStack_34[0] == 0) {
    FUN_ram_40390608(param_1);
  }
  else if (auStack_34[0] < 0x44001) {
    puVar2 = _DAT_ram_3fcb6598;
    if (param_1 + 0xbfc80000U < 0x40000) {
      unaff_s3 = *(int *)(param_1 + -4);
      while( true ) {
        if (puVar2 == (uint *)0x0) {
LAB_ram_403907be:
          ebreak();
        }
        uVar4 = puVar2[7];
        if (((uVar4 != 0) && ((int)puVar2[3] <= unaff_s3)) && (unaff_s3 < (int)puVar2[4])) break;
        puVar2 = (uint *)puVar2[8];
      }
      bVar1 = true;
    }
    else {
      while( true ) {
        if (puVar2 == (uint *)0x0) goto LAB_ram_403907be;
        uVar4 = puVar2[7];
        if (((uVar4 != 0) && ((int)puVar2[3] <= param_1)) && (param_1 < (int)puVar2[4])) break;
        puVar2 = (uint *)puVar2[8];
      }
      unaff_s3 = 0;
      bVar1 = false;
    }
    if (((uStack_38 == ((*puVar2 | puVar2[1] | puVar2[2]) & uStack_38)) && (!bVar1)) &&
       ((auStack_24[0] < 5 &&
        (iVar3 = (*(code *)&SUB_ram_40010360)(uVar4,param_1,auStack_34[0]), iVar3 != 0)))) {
      return iVar3;
    }
    iVar3 = FUN_ram_4039064a(auStack_24[0],auStack_34[0],uStack_38);
    if (iVar3 != 0) {
      if (!bVar1) {
        unaff_s3 = param_1;
      }
      uVar5 = (*(code *)&SUB_ram_40010334)(puVar2[7],unaff_s3);
      uVar4 = auStack_34[0];
      if (uVar5 < auStack_34[0]) {
        uVar4 = uVar5;
      }
      FUN_ram_40399daa(iVar3,param_1,uVar4);
      FUN_ram_40390608(param_1);
      return iVar3;
    }
  }
  return 0;
}

