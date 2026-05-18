
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_403907c6(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uStack_38;
  uint auStack_34 [4];
  uint auStack_24 [3];
  
  auStack_24[0] = 4;
  uStack_38 = param_3;
  auStack_34[0] = param_2;
  FUN_ram_4039211a(auStack_24,auStack_34,&uStack_38);
  if (param_1 == 0) {
    iVar3 = FUN_ram_40390682(auStack_24[0],auStack_34[0],uStack_38);
  }
  else {
    if (auStack_34[0] == 0) {
      FUN_ram_40390634(param_1);
    }
    else if (auStack_34[0] < 0x44001) {
      puVar2 = _DAT_ram_3fcc4e20;
      if (0x3ffff < param_1 + 0xbfc80000U) {
        for (; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[8]) {
          if (((puVar2[7] != 0) && ((int)puVar2[3] <= param_1)) && (param_1 < (int)puVar2[4])) {
            iVar3 = 0;
            bVar1 = false;
            goto LAB_ram_40390870;
          }
        }
LAB_ram_40390836:
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf9e(0,0,0,0);
      }
      iVar3 = *(int *)(param_1 + -4);
LAB_ram_40390834:
      if (puVar2 != (uint *)0x0) {
        if (((puVar2[7] == 0) || (iVar3 < (int)puVar2[3])) || ((int)puVar2[4] <= iVar3))
        goto LAB_ram_40390852;
        bVar1 = true;
LAB_ram_40390870:
        uVar6 = 0;
        if (puVar2[7] != 0) {
          uVar6 = *puVar2 | puVar2[1] | puVar2[2];
        }
        if (((uStack_38 == (uVar6 & uStack_38)) && (!bVar1)) &&
           ((auStack_24[0] < 5 &&
            (iVar4 = (*(code *)&SUB_ram_40010360)(puVar2[7],param_1,auStack_34[0]), iVar4 != 0)))) {
          return iVar4;
        }
        iVar4 = FUN_ram_40390682(auStack_24[0],auStack_34[0],uStack_38);
        if (iVar4 != 0) {
          if (!bVar1) {
            iVar3 = param_1;
          }
          uVar6 = (*(code *)&SUB_ram_40010334)(puVar2[7],iVar3);
          if (uVar6 != 0) {
            uVar5 = auStack_34[0];
            if (uVar6 < auStack_34[0]) {
              uVar5 = uVar6;
            }
            FUN_ram_4039c11e(iVar4,param_1,uVar5);
            FUN_ram_40390634(param_1);
            return iVar4;
          }
          goto LAB_ram_40390836;
        }
        goto LAB_ram_4039080e;
      }
      goto LAB_ram_40390836;
    }
LAB_ram_4039080e:
    iVar3 = 0;
  }
  return iVar3;
LAB_ram_40390852:
  puVar2 = (uint *)puVar2[8];
  goto LAB_ram_40390834;
}

