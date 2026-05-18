
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4205bb90(int param_1,uint *param_2,uint *param_3,int param_4,uint param_5,uint param_6,
                int param_7,undefined4 param_8,ushort param_9)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint local_34;
  
  uVar10 = (uint)param_9;
  if (*(char *)(param_1 + 0xe) != '\x01') {
LAB_ram_4205bbbc:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if (param_3 == (uint *)0x0) {
    if (0x13 < *(ushort *)(param_1 + 10)) {
      param_3 = &local_34;
      local_34 = *(uint *)(*(int *)(param_1 + 4) + 0x10);
      goto LAB_ram_4205bd7a;
    }
  }
  else {
    if (uVar10 == 0) {
      uVar9 = 0x14;
      iVar5 = 0;
    }
    else {
      if (0x28 < uVar10) {
        return 0xfffffffa;
      }
      uVar3 = uVar10 + 3 & 0xfffc;
      uVar9 = uVar3 + 0x14 & 0xffff;
      iVar5 = FUN_ram_42053a64(param_1,uVar3);
      if (iVar5 != 0) {
        return 0xfffffffe;
      }
      FUN_ram_4039c11e(*(undefined4 *)(param_1 + 4),param_8,uVar10);
      if (uVar10 < uVar3) {
        (*(code *)&SUB_ram_40010488)(*(int *)(param_1 + 4) + uVar10,0,uVar3 - uVar10);
      }
      iVar8 = 0;
      iVar5 = 0;
      do {
        iVar7 = iVar8 * 2;
        iVar8 = iVar8 + 1;
        iVar5 = iVar5 + (uint)*(ushort *)(iVar7 + *(int *)(param_1 + 4));
      } while (iVar8 < (int)(uVar3 >> 1));
    }
    iVar8 = FUN_ram_42053a64(param_1,0x14);
    if (iVar8 == 0) {
      pbVar4 = *(byte **)(param_1 + 4);
      if (*(ushort *)(param_1 + 10) < 0x14) goto LAB_ram_4205bbbc;
      pbVar4[8] = (byte)param_4;
      pbVar4[9] = (byte)param_6;
      uVar10 = *param_3;
      param_6 = param_4 << 8 | param_6;
      pbVar4[0x11] = (byte)(uVar10 >> 8);
      pbVar4[0x13] = (byte)(uVar10 >> 0x18);
      pbVar4[0x10] = (byte)uVar10;
      *pbVar4 = (byte)(uVar9 >> 2) | 0x40;
      uVar9 = (uVar9 >> 2 & 0xff | 0x40) << 8 | param_5;
      pbVar4[1] = (byte)param_5;
      uVar1 = *(undefined2 *)(param_1 + 8);
      pbVar4[0x12] = (byte)(uVar10 >> 0x10);
      iVar8 = FUN_ram_420523aa(uVar1);
      pbVar4[2] = (byte)iVar8;
      sVar2 = _DAT_ram_3fcc5354;
      pbVar4[3] = (byte)((uint)iVar8 >> 8);
      pbVar4[6] = 0;
      pbVar4[7] = 0;
      iVar7 = FUN_ram_420523aa(sVar2);
      pbVar4[5] = (byte)((uint)iVar7 >> 8);
      pbVar4[4] = (byte)iVar7;
      _DAT_ram_3fcc5354 = _DAT_ram_3fcc5354 + 1;
      if (param_2 == (uint *)0x0) {
        uVar3 = 0xd004c008;
      }
      else {
        uVar3 = *param_2;
      }
      pbVar4[0xc] = (byte)uVar3;
      pbVar4[0xd] = (byte)(uVar3 >> 8);
      uVar10 = (uVar3 & 0xffff) +
               iVar7 + ((uVar9 << 8 | (int)uVar9 >> 8) & 0xffff) +
                       ((param_6 << 8 | (int)param_6 >> 8) & 0xffff) +
                       (uVar10 & 0xffff) + (uVar10 >> 0x10) + iVar5 + iVar8 + (uVar3 >> 0x10);
      pbVar4[0xe] = (byte)(uVar3 >> 0x10);
      uVar10 = (uVar10 >> 0x10) + (uVar10 & 0xffff);
      uVar10 = ~((uVar10 >> 0x10) + uVar10);
      pbVar4[10] = (byte)uVar10;
      pbVar4[0xf] = (byte)(uVar3 >> 0x18);
      pbVar4[0xb] = (byte)(uVar10 >> 8);
LAB_ram_4205bd7a:
      if (*param_3 == *(uint *)(param_7 + 4)) {
        uVar6 = FUN_ram_42053364(param_7,param_1);
        return uVar6;
      }
      if ((*(byte *)(param_1 + 0xd) & 4) != 0) {
        FUN_ram_42053364(param_7,param_1);
      }
      if ((*(ushort *)(param_7 + 0x30) != 0) &&
         (*(ushort *)(param_7 + 0x30) < *(ushort *)(param_1 + 8))) {
        uVar6 = FUN_ram_4205c090(param_1,param_7,param_3);
        return uVar6;
      }
      uVar6 = (**(code **)(param_7 + 0x14))(param_7,param_1,param_3);
      return uVar6;
    }
  }
  return 0xfffffffe;
}

