
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_40396b2e(void)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_420119cc(0x1a,0x402,0x40386c8c,&DAT_ram_3fcb94c0,0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  iVar1 = FUN_ram_40394a24(0x13);
  if (iVar1 == 0) {
    _DAT_ram_600c0010 = _DAT_ram_600c0010 | 0x20000000;
    _DAT_ram_600c0018 = _DAT_ram_600c0018 & 0xdfffffff;
  }
  FUN_ram_40394a46(0x13,iVar1);
  FUN_ram_403963b6(&DAT_ram_3fcb94c0);
  uStack_18 = 0x40386128;
  uStack_14 = 0x40386134;
  FUN_ram_403963cc(&DAT_ram_3fcb94c0,&uStack_18);
  iVar1 = _DAT_ram_3fcb94c0;
  *(uint *)(_DAT_ram_3fcb94c0 + 0x14) = *(uint *)(_DAT_ram_3fcb94c0 + 0x14) & 0xfff00000;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 1;
  (*(code *)&SUB_ram_400102d8)(&DAT_ram_3fcb94c0,1,0,0);
  (*(code *)&SUB_ram_400102d0)(&DAT_ram_3fcb94c0,0,0);
  (*(code *)&SUB_ram_400102d4)(&DAT_ram_3fcb94c0,0,1);
  FUN_ram_40396436(&DAT_ram_3fcb94c0,0,10000);
  (*(code *)&SUB_ram_400102d0)(&DAT_ram_3fcb94c0,0,1);
  (*(code *)&SUB_ram_400102d8)(&DAT_ram_3fcb94c0,1,0,1);
  (*(code *)&SUB_ram_400102c0)(&DAT_ram_3fcb94c0,0);
  (*(code *)&SUB_ram_400102cc)(&DAT_ram_3fcb94c0,1);
  return;
}

