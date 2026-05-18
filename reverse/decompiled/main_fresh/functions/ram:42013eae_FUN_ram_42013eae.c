
int FUN_ram_42013eae(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  puVar1 = (uint *)FUN_ram_42013dfe(param_2);
  if (puVar1 == (uint *)0x0) {
    uVar6 = 2;
  }
  else {
    uVar10 = *puVar1;
    if (((param_3 & 3) == 0) || ((uVar10 & 4) == 0)) {
      uVar11 = puVar1[4];
      iVar2 = FUN_ram_4039c5aa(param_2,puVar1 + 5,uVar11);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf9e(0,0,0,0);
      }
      uVar3 = (*(code *)&SUB_ram_400104a8)(param_2);
      if (uVar11 == uVar3) {
        param_2 = 0x3c0a85ec;
      }
      else {
        param_2 = param_2 + uVar11;
      }
      pcVar7 = *(code **)(puVar1[1] + 0x14);
      if (pcVar7 != (code *)0x0) {
        if ((uVar10 & 2) == 0) {
          iVar2 = (*pcVar7)(param_2,param_3,param_4);
        }
        else {
          iVar2 = (*pcVar7)(puVar1[2],param_2,param_3,param_4);
        }
        if (iVar2 < 0) {
          puVar4 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
          uVar6 = *puVar4;
          goto LAB_ram_42013ee4;
        }
        FUN_ram_403917e0(0x3fcc4f2c);
        iVar5 = gp + -0x5a0;
        iVar9 = 0;
        do {
          if (*(char *)(iVar5 + 1) == -1) {
            pbVar8 = (byte *)(gp + -0x5a0 + iVar9 * 3);
            *pbVar8 = *pbVar8 & 0xfe;
            uVar10 = puVar1[3];
            pbVar8[2] = (byte)iVar2;
            pbVar8[1] = (byte)uVar10;
            FUN_ram_403917f8(0x3fcc4f2c);
            return iVar9;
          }
          iVar9 = iVar9 + 1;
          iVar5 = iVar5 + 3;
        } while (iVar9 != 0x40);
        FUN_ram_403917f8(0x3fcc4f2c);
        pcVar7 = *(code **)(puVar1[1] + 0x18);
        if (pcVar7 != (code *)0x0) {
          if ((*puVar1 & 2) == 0) {
            (*pcVar7)(iVar2);
          }
          else {
            (*pcVar7)(puVar1[2],iVar2);
          }
          uVar6 = 0xc;
          goto LAB_ram_42013ee4;
        }
      }
      uVar6 = 0x58;
    }
    else {
      uVar6 = 0x1e;
    }
  }
LAB_ram_42013ee4:
  *param_1 = uVar6;
  return -1;
}

