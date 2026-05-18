
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42056088(int param_1,undefined4 *param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return -0x10;
  }
  iVar1 = -0x10;
  if ((param_2 != (undefined4 *)0x0) &&
     ((*(short *)(param_1 + 0x12) != 0 || (iVar1 = FUN_ram_42055d82(param_1,param_1,0), iVar1 == 0))
     )) {
    iVar1 = _DAT_ram_3fcb6804;
    *(undefined4 *)(param_1 + 4) = *param_2;
    *(undefined2 *)(param_1 + 0x14) = param_3;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 4;
    for (iVar2 = iVar1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
      if (iVar2 == param_1) goto LAB_ram_420560ea;
    }
    *(int *)(param_1 + 0xc) = iVar1;
    _DAT_ram_3fcb6804 = param_1;
LAB_ram_420560ea:
    iVar1 = 0;
  }
  return iVar1;
}

