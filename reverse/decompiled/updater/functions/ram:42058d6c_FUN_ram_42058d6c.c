
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_42058d6c(int param_1,uint *param_2,uint *param_3,int param_4,uint param_5,uint param_6,
                int param_7,undefined4 param_8,ushort param_9)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint local_34;
  
  uVar10 = (uint)param_9;
  if (param_3 == (uint *)0x0) {
    if (0x13 < *(ushort *)(param_1 + 10)) {
      param_3 = &local_34;
      local_34 = *(uint *)(*(int *)(param_1 + 4) + 0x10);
      goto LAB_ram_42058f3e;
    }
  }
  else {
    if (uVar10 == 0) {
      uVar5 = 0x14;
      iVar6 = 0;
    }
    else {
      if (0x28 < uVar10) {
        return 0xfffffffa;
      }
      uVar3 = uVar10 + 3 & 0xfffc;
      uVar5 = uVar3 + 0x14 & 0xffff;
      iVar6 = FUN_ram_42051cac(param_1,uVar3);
      if (iVar6 != 0) {
        return 0xfffffffe;
      }
      FUN_ram_40399daa(*(undefined4 *)(param_1 + 4),param_8,uVar10);
      if (uVar10 < uVar3) {
        (*(code *)&SUB_ram_40010488)(*(int *)(param_1 + 4) + uVar10,0,uVar3 - uVar10);
      }
      iVar9 = 0;
      iVar6 = 0;
      do {
        iVar8 = iVar9 * 2;
        iVar9 = iVar9 + 1;
        iVar6 = iVar6 + (uint)*(ushort *)(iVar8 + *(int *)(param_1 + 4));
      } while (iVar9 < (int)(uVar3 >> 1));
    }
    iVar9 = FUN_ram_42051cac(param_1,0x14);
    if (iVar9 == 0) {
      pbVar4 = *(byte **)(param_1 + 4);
      pbVar4[8] = (byte)param_4;
      pbVar4[9] = (byte)param_6;
      uVar3 = *param_3;
      param_6 = param_4 << 8 | param_6;
      pbVar4[0x11] = (byte)(uVar3 >> 8);
      pbVar4[0x13] = (byte)(uVar3 >> 0x18);
      pbVar4[0x10] = (byte)uVar3;
      *pbVar4 = (byte)(uVar5 >> 2) | 0x40;
      uVar5 = (uVar5 >> 2 & 0xff | 0x40) << 8 | param_5;
      pbVar4[1] = (byte)param_5;
      uVar1 = *(undefined2 *)(param_1 + 8);
      pbVar4[0x12] = (byte)(uVar3 >> 0x10);
      iVar9 = FUN_ram_4205073e(uVar1);
      pbVar4[2] = (byte)iVar9;
      sVar2 = _DAT_ram_3fcb6824;
      pbVar4[3] = (byte)((uint)iVar9 >> 8);
      pbVar4[6] = 0;
      pbVar4[7] = 0;
      iVar8 = FUN_ram_4205073e(sVar2);
      pbVar4[5] = (byte)((uint)iVar8 >> 8);
      pbVar4[4] = (byte)iVar8;
      _DAT_ram_3fcb6824 = _DAT_ram_3fcb6824 + 1;
      uVar10 = _DAT_ram_3c0793d4;
      if (param_2 != (uint *)0x0) {
        uVar10 = *param_2;
      }
      pbVar4[0xc] = (byte)uVar10;
      pbVar4[0xd] = (byte)(uVar10 >> 8);
      uVar5 = (uVar10 & 0xffff) +
              iVar8 + ((uVar5 << 8 | (int)uVar5 >> 8) & 0xffff) +
                      ((param_6 << 8 | (int)param_6 >> 8) & 0xffff) +
                      (uVar3 & 0xffff) + (uVar3 >> 0x10) + iVar6 + iVar9 + (uVar10 >> 0x10);
      pbVar4[0xe] = (byte)(uVar10 >> 0x10);
      uVar5 = (uVar5 >> 0x10) + (uVar5 & 0xffff);
      uVar5 = ~((uVar5 >> 0x10) + uVar5);
      pbVar4[10] = (byte)uVar5;
      pbVar4[0xf] = (byte)(uVar10 >> 0x18);
      pbVar4[0xb] = (byte)(uVar5 >> 8);
LAB_ram_42058f3e:
      if (*param_3 == *(uint *)(param_7 + 4)) {
        uVar7 = FUN_ram_42051652(param_7,param_1);
        return uVar7;
      }
      if ((*(byte *)(param_1 + 0xd) & 4) != 0) {
        FUN_ram_42051652(param_7,param_1);
      }
      if ((*(ushort *)(param_7 + 0x30) != 0) &&
         (*(ushort *)(param_7 + 0x30) < *(ushort *)(param_1 + 8))) {
        uVar7 = FUN_ram_420591b2(param_1,param_7,param_3);
        return uVar7;
      }
      uVar7 = (**(code **)(param_7 + 0x14))(param_7,param_1,param_3);
      return uVar7;
    }
  }
  return 0xfffffffe;
}

