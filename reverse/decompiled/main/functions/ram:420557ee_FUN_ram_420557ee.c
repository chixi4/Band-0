
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420557ee(int *param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  uVar3 = FUN_ram_420523aa(*(undefined2 *)(param_1[3] + 0xc));
  if ((uVar3 & 1) == 0) {
    do {
      iVar4 = *(int *)(param_2[3] + 4);
      if ((int)((((uint)*(ushort *)(param_1 + 2) + _DAT_ram_3fcc5314) - iVar4) -
               (uint)*(ushort *)(param_2 + 2)) < 0) {
        if ((int)(iVar4 - ((uint)*(ushort *)(param_1 + 2) + _DAT_ram_3fcc5314)) < 0) {
          *(short *)(param_1 + 2) = (short)((uint)((iVar4 - _DAT_ram_3fcc5314) * 0x10000) >> 0x10);
          FUN_ram_42053cac(param_1[1]);
        }
        goto LAB_ram_42055872;
      }
      uVar3 = FUN_ram_420523aa(*(undefined2 *)(param_2[3] + 0xc));
      if ((uVar3 & 1) != 0) {
        uVar1 = *(undefined2 *)(param_1[3] + 0xc);
        uVar2 = FUN_ram_420523aa(1);
        iVar4 = param_1[3];
        *(byte *)(iVar4 + 0xc) = (byte)uVar1 | (byte)uVar2;
        *(byte *)(iVar4 + 0xd) = (byte)((ushort)uVar1 >> 8) | (byte)((ushort)uVar2 >> 8);
      }
      piVar5 = (int *)*param_2;
      FUN_ram_420548a2(param_2);
      param_2 = piVar5;
    } while (piVar5 != (int *)0x0);
  }
  else {
    FUN_ram_420548c6(param_2);
  }
  param_2 = (int *)0x0;
LAB_ram_42055872:
  *param_1 = (int)param_2;
  return;
}

