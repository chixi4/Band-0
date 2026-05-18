
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4205bb90(int param_1,undefined4 param_2,uint *param_3,int param_4,uint param_5,uint param_6,
                int param_7,undefined4 param_8,ushort param_9)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint *extraout_a2;
  int extraout_a3;
  int iVar9;
  uint uVar10;
  int extraout_a6;
  undefined4 extraout_a7;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint local_34;
  
  uVar13 = CONCAT44(param_2,param_1);
  uVar12 = (uint)param_9;
  if (*(char *)(param_1 + 0xe) == '\x01') goto LAB_ram_4205bbc4;
  do {
    uVar13 = FUN_ram_4039bf1e();
    param_3 = extraout_a2;
    param_4 = extraout_a3;
    param_7 = extraout_a6;
    param_8 = extraout_a7;
LAB_ram_4205bbc4:
    puVar8 = (uint *)((ulonglong)uVar13 >> 0x20);
    iVar5 = (int)uVar13;
    if (param_3 == (uint *)0x0) {
      if (*(ushort *)(iVar5 + 10) < 0x14) {
        return 0xfffffffe;
      }
      param_3 = &local_34;
      local_34 = *(uint *)(*(int *)(iVar5 + 4) + 0x10);
      goto LAB_ram_4205bd7a;
    }
    if (uVar12 == 0) {
      uVar11 = 0x14;
      uVar12 = 0;
    }
    else {
      if (0x28 < uVar12) {
        return 0xfffffffa;
      }
      uVar3 = uVar12 + 3 & 0xfffc;
      uVar11 = uVar3 + 0x14 & 0xffff;
      iVar6 = FUN_ram_42053a64(iVar5,uVar3);
      if (iVar6 != 0) {
        return 0xfffffffe;
      }
      FUN_ram_4039c11e(*(undefined4 *)(iVar5 + 4),param_8,uVar12);
      if (uVar12 < uVar3) {
        (*(code *)&SUB_ram_40010488)(*(int *)(iVar5 + 4) + uVar12,0,uVar3 - uVar12);
      }
      iVar6 = 0;
      uVar12 = 0;
      do {
        iVar9 = iVar6 * 2;
        iVar6 = iVar6 + 1;
        uVar12 = uVar12 + *(ushort *)(iVar9 + *(int *)(iVar5 + 4));
      } while (iVar6 < (int)(uVar3 >> 1));
    }
    iVar6 = FUN_ram_42053a64(iVar5,0x14);
    if (iVar6 != 0) {
      return 0xfffffffe;
    }
    pbVar4 = *(byte **)(iVar5 + 4);
  } while (*(ushort *)(iVar5 + 10) < 0x14);
  pbVar4[8] = (byte)param_4;
  pbVar4[9] = (byte)param_6;
  uVar3 = *param_3;
  param_6 = param_4 << 8 | param_6;
  pbVar4[0x11] = (byte)(uVar3 >> 8);
  pbVar4[0x13] = (byte)(uVar3 >> 0x18);
  pbVar4[0x10] = (byte)uVar3;
  *pbVar4 = (byte)(uVar11 >> 2) | 0x40;
  uVar11 = (uVar11 >> 2 & 0xff | 0x40) << 8 | param_5;
  pbVar4[1] = (byte)param_5;
  uVar1 = *(undefined2 *)(iVar5 + 8);
  pbVar4[0x12] = (byte)(uVar3 >> 0x10);
  iVar6 = FUN_ram_420523aa(uVar1);
  pbVar4[2] = (byte)iVar6;
  sVar2 = _DAT_ram_3fcc5354;
  pbVar4[3] = (byte)((uint)iVar6 >> 8);
  pbVar4[6] = 0;
  pbVar4[7] = 0;
  iVar9 = FUN_ram_420523aa(sVar2);
  pbVar4[5] = (byte)((uint)iVar9 >> 8);
  pbVar4[4] = (byte)iVar9;
  _DAT_ram_3fcc5354 = _DAT_ram_3fcc5354 + 1;
  if (puVar8 == (uint *)0x0) {
    uVar10 = 0xd004c008;
  }
  else {
    uVar10 = *puVar8;
  }
  pbVar4[0xc] = (byte)uVar10;
  pbVar4[0xd] = (byte)(uVar10 >> 8);
  uVar12 = (uVar10 & 0xffff) +
           iVar9 + ((uVar11 << 8 | (int)uVar11 >> 8) & 0xffff) +
                   ((param_6 << 8 | (int)param_6 >> 8) & 0xffff) +
                   (uVar3 & 0xffff) + (uVar3 >> 0x10) + uVar12 + iVar6 + (uVar10 >> 0x10);
  pbVar4[0xe] = (byte)(uVar10 >> 0x10);
  uVar12 = (uVar12 >> 0x10) + (uVar12 & 0xffff);
  uVar12 = ~((uVar12 >> 0x10) + uVar12);
  pbVar4[10] = (byte)uVar12;
  pbVar4[0xf] = (byte)(uVar10 >> 0x18);
  pbVar4[0xb] = (byte)(uVar12 >> 8);
LAB_ram_4205bd7a:
  if (*param_3 == *(uint *)(param_7 + 4)) {
    uVar7 = FUN_ram_42053364(param_7,iVar5);
  }
  else {
    if ((*(byte *)(iVar5 + 0xd) & 4) != 0) {
      FUN_ram_42053364(param_7,iVar5);
    }
    if ((*(ushort *)(param_7 + 0x30) == 0) ||
       (*(ushort *)(iVar5 + 8) <= *(ushort *)(param_7 + 0x30))) {
      uVar7 = (**(code **)(param_7 + 0x14))(param_7,iVar5,param_3);
    }
    else {
      uVar7 = FUN_ram_4205c090(iVar5,param_7,param_3);
    }
  }
  return uVar7;
}

