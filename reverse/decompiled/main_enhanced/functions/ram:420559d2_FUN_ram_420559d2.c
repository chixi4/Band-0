
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_420559d2(int param_1,int *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  do {
    piVar3 = param_2;
    if (param_2 == (int *)0x0) {
      return (int *)0x0;
    }
    while( true ) {
      iVar2 = _DAT_ram_3fcc5310;
      iVar4 = FUN_ram_420523b8(*(undefined4 *)(piVar3[3] + 4));
      uVar1 = *(ushort *)(piVar3 + 2);
      uVar5 = FUN_ram_420523aa(*(undefined2 *)(piVar3[3] + 0xc));
      if ((int)(((iVar2 - (uint)uVar1) - iVar4) - (uint)((uVar5 & 3) != 0)) < 0) {
        return piVar3;
      }
      param_2 = (int *)*piVar3;
      uVar5 = FUN_ram_42053d72(piVar3[1]);
      if (*(ushort *)(param_1 + 0x6a) < uVar5) goto LAB_ram_42055a60;
      *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) - (short)uVar5;
      _DAT_ram_3fcc530c = (short)piVar3[2] + _DAT_ram_3fcc530c;
      FUN_ram_420548a2(piVar3);
      if (*(short *)(param_1 + 0x6a) == 0) break;
      piVar3 = param_2;
      if (param_2 == (int *)0x0) {
        if (param_3 != 0) {
          return (int *)0x0;
        }
LAB_ram_42055a60:
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
    }
  } while( true );
}

