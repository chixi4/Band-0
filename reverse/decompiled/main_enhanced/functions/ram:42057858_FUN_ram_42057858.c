
undefined4 FUN_ram_42057858(int param_1,uint param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int *piVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if (param_1 != 0) {
    piVar3 = *(int **)(param_1 + 0x70);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    if (param_2 != 0) {
      uVar10 = (uint)*(ushort *)(piVar3 + 2);
      if (uVar10 <= param_2) {
        return 0;
      }
      if (param_2 <= *(ushort *)(param_1 + 0x36)) {
        bVar1 = *(byte *)((int)piVar3 + 10);
        iVar11 = (bVar1 & 1) * 4;
        uVar9 = uVar10 - param_2 & 0xffff;
        iVar6 = FUN_ram_42053b52(0x36,iVar11 + uVar9 & 0xffff,0x280);
        if (iVar6 == 0) {
          return 0xffffffff;
        }
        uVar7 = FUN_ram_42053f22(piVar3[1],*(int *)(iVar6 + 4) + iVar11,uVar9,
                                 ((uint)*(ushort *)(piVar3[1] + 8) - (uint)*(ushort *)(piVar3 + 2))
                                 + param_2 & 0xffff);
        if (uVar7 == uVar9) {
          uVar9 = FUN_ram_420523aa(*(undefined2 *)(piVar3[3] + 0xc));
          if ((uVar9 & 8) == 0) {
            uVar9 = uVar9 & 0x3f;
            uVar7 = 0;
          }
          else {
            uVar9 = uVar9 & 0x37;
            uVar7 = 8;
          }
          if ((uVar9 & 1) != 0) {
            uVar9 = uVar9 & 0xfe;
            uVar7 = uVar7 | 1;
          }
          iVar11 = FUN_ram_420523b8(*(undefined4 *)(piVar3[3] + 4));
          piVar8 = (int *)FUN_ram_4205725a(param_1,iVar6,uVar7,param_2 + iVar11,(uint)bVar1);
          if (piVar8 == (int *)0x0) {
            return 0xffffffff;
          }
          sVar4 = FUN_ram_42053d72(piVar3[1]);
          iVar6 = piVar3[1];
          *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) - sVar4;
          FUN_ram_42053cac(iVar6,(uint)*(ushort *)(iVar6 + 8) + (param_2 - uVar10 & 0xffff) & 0xffff
                          );
          *(short *)(piVar3 + 2) = (short)((param_2 - uVar10) * 0x10000 >> 0x10) + (short)piVar3[2];
          uVar2 = *(undefined2 *)(piVar3[3] + 0xc);
          uVar5 = FUN_ram_420523aa(uVar9);
          iVar11 = piVar3[3];
          iVar6 = piVar3[1];
          *(byte *)(iVar11 + 0xc) = (byte)uVar2 | (byte)uVar5;
          *(byte *)(iVar11 + 0xd) = (byte)((ushort)uVar2 >> 8) | (byte)((ushort)uVar5 >> 8);
          sVar4 = FUN_ram_42053d72(iVar6);
          *(short *)(param_1 + 0x6a) = sVar4 + *(short *)(param_1 + 0x6a);
          sVar4 = FUN_ram_42053d72(piVar8[1]);
          iVar6 = *piVar3;
          *(short *)(param_1 + 0x6a) = sVar4 + *(short *)(param_1 + 0x6a);
          *piVar8 = iVar6;
          *piVar3 = (int)piVar8;
          if (*piVar8 != 0) {
            return 0;
          }
          *(undefined2 *)(param_1 + 0x6c) = 0;
          return 0;
        }
        FUN_ram_42053ac4(iVar6);
        return 0xffffffff;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

