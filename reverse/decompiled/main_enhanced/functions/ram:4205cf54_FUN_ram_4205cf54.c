
int FUN_ram_4205cf54(uint *param_1,int param_2,int param_3,byte param_4,uint *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *apuStack_38 [2];
  int iStack_30;
  undefined2 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  uint uStack_20;
  byte bStack_1c;
  undefined4 uStack_18;
  
  if (param_1 == (uint *)0x0) {
    return -0x10;
  }
  if ((*param_1 & 0xf0) == 0x10) {
    if (((param_1[10] & 2) == 0 && (param_4 & 4) == 0) && param_1[8] == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (param_5 == (uint *)0x0) goto LAB_ram_4205cf8c;
    }
    puVar4 = (uint *)(param_2 + 4);
    uVar2 = 0;
    for (iVar3 = 0; iVar3 < param_3; iVar3 = iVar3 + 1) {
      uVar5 = *puVar4;
      puVar4 = puVar4 + 2;
      uVar2 = uVar2 + uVar5;
      if (uVar2 < uVar5) goto LAB_ram_4205cf8c;
    }
    if (uVar2 != 0) {
      if ((int)uVar2 < 0) {
        if (param_5 == (uint *)0x0) goto LAB_ram_4205cf8c;
        uVar2 = 0x7fffffff;
      }
      uStack_2c = (undefined2)param_3;
      uStack_28 = 0;
      uStack_20 = 0;
      uStack_18 = 0;
      apuStack_38[0] = param_1;
      iStack_30 = param_2;
      uStack_24 = uVar2;
      bStack_1c = param_4;
      if (param_1[8] != 0) {
        uStack_18 = FUN_ram_4205c954();
      }
      iVar3 = FUN_ram_4205cd16(0x4204e49e,apuStack_38);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = uStack_20;
      }
      if ((!bVar1) && (uStack_20 != uVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
    }
    iVar3 = 0;
  }
  else {
LAB_ram_4205cf8c:
    iVar3 = -6;
  }
  return iVar3;
}

