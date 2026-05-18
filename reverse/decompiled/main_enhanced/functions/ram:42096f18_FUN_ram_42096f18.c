
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42096f18(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  _DAT_ram_60040054 = _DAT_ram_60040054 & 0xff900000 | 0x40400f;
  _DAT_ram_60040000 = _DAT_ram_60040000 & 0xffff807f | 0xc0;
  iVar2 = param_2 * 8 + param_1;
  uVar1 = (*(uint *)(iVar2 + 0xc) & 3) << 0x17;
  iVar2 = *(int *)(iVar2 + 0x10);
  if (((iVar2 == 0xc) || (iVar2 == 0)) && (*(int *)(param_1 + 4) == 0)) {
    _DAT_ram_60040020 = _DAT_ram_60040020 & 0xe07fffff | uVar1 | (param_2 & 0xf) << 0x19;
    FUN_ram_42096cc0(0,*(undefined4 *)(param_1 + 8));
    return;
  }
  _DAT_ram_60040020 = _DAT_ram_60040020 & 0xfe7fffff | uVar1;
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

