
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420535ec(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  
  while( true ) {
    iVar2 = _DAT_ram_3fcb67e0;
    if (param_2 == (int *)0x0) {
      return 0;
    }
    iVar4 = FUN_ram_4205074c(*(undefined4 *)(param_2[3] + 4));
    uVar1 = *(ushort *)(param_2 + 2);
    uVar5 = FUN_ram_4205073e(*(undefined2 *)(param_2[3] + 0xc));
    if ((int)(((iVar2 - (uint)uVar1) - iVar4) - (uint)((uVar5 & 3) != 0)) < 0) break;
    iVar2 = *param_2;
    sVar3 = FUN_ram_42051f4e(param_2[1]);
    *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) - sVar3;
    _DAT_ram_3fcb67dc = *(short *)(param_2 + 2) + _DAT_ram_3fcb67dc;
    FUN_ram_42052766(param_2);
    param_2 = (int *)iVar2;
  }
  return (int)param_2;
}

