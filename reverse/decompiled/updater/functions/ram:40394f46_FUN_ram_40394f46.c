
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394f46(void)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_ram_420119c8(0x1a,0x402,0x4038509e,&DAT_ram_3fcb1fc0,0);
  iVar1 = FUN_ram_40393956(0x13);
  if (iVar1 == 0) {
    _DAT_ram_600c0010 = _DAT_ram_600c0010 | 0x20000000;
    _DAT_ram_600c0018 = _DAT_ram_600c0018 & 0xdfffffff;
  }
  FUN_ram_40393978(0x13,iVar1);
  FUN_ram_4039488e(&DAT_ram_3fcb1fc0);
  uStack_18 = 0x403844ea;
  uStack_14 = 0x403844f6;
  FUN_ram_403948a4(&DAT_ram_3fcb1fc0,&uStack_18);
  iVar1 = _DAT_ram_3fcb1fc0;
  *(uint *)(_DAT_ram_3fcb1fc0 + 0x14) = *(uint *)(_DAT_ram_3fcb1fc0 + 0x14) & 0xfff00000;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 1;
  (*(code *)&SUB_ram_400102d8)(&DAT_ram_3fcb1fc0,1,0,0);
  (*(code *)&SUB_ram_400102d0)(&DAT_ram_3fcb1fc0,0,0);
  (*(code *)&SUB_ram_400102d4)(&DAT_ram_3fcb1fc0,0,1);
  FUN_ram_4039490e(&DAT_ram_3fcb1fc0,0,10000);
  (*(code *)&SUB_ram_400102d0)(&DAT_ram_3fcb1fc0,0,1);
  (*(code *)&SUB_ram_400102d8)(&DAT_ram_3fcb1fc0,1,0,1);
  (*(code *)&SUB_ram_400102c0)(&DAT_ram_3fcb1fc0,0);
  (*(code *)&SUB_ram_400102cc)(&DAT_ram_3fcb1fc0,1);
  return;
}

