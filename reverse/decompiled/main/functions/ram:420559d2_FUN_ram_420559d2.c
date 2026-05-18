
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_420559d2(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort extraout_a5;
  ushort uVar4;
  int *piVar5;
  
LAB_ram_420559f6:
  if (param_2 == (int *)0x0) {
LAB_ram_42055a8e:
    piVar5 = (int *)0x0;
  }
  else {
    while( true ) {
      piVar5 = param_2;
      iVar1 = _DAT_ram_3fcc5310;
      iVar2 = FUN_ram_420523b8(*(undefined4 *)(piVar5[3] + 4));
      uVar4 = *(ushort *)(piVar5 + 2);
      uVar3 = FUN_ram_420523aa(*(undefined2 *)(piVar5[3] + 0xc));
      if ((int)(((iVar1 - (uint)uVar4) - iVar2) - (uint)((uVar3 & 3) != 0)) < 0) break;
      param_2 = (int *)*piVar5;
      uVar3 = FUN_ram_42053d72(piVar5[1]);
      uVar4 = *(ushort *)(param_1 + 0x6a);
      if (uVar3 <= uVar4) goto LAB_ram_42055a68;
      while( true ) {
        uVar3 = FUN_ram_4039bf1e();
        uVar4 = extraout_a5;
LAB_ram_42055a68:
        *(ushort *)(param_1 + 0x6a) = uVar4 - (short)uVar3;
        _DAT_ram_3fcc530c = (short)piVar5[2] + _DAT_ram_3fcc530c;
        FUN_ram_420548a2(piVar5);
        if (*(short *)(param_1 + 0x6a) == 0) goto LAB_ram_420559f6;
        if (param_2 != (int *)0x0) break;
        if (param_3 != 0) goto LAB_ram_42055a8e;
      }
    }
  }
  return piVar5;
}

