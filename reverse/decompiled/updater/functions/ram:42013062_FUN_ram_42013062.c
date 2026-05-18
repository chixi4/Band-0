
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42013062(void)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_40393956(0x13);
  if (iVar1 == 0) {
    _DAT_ram_600c0010 = _DAT_ram_600c0010 | 0x20000000;
    _DAT_ram_600c0018 = _DAT_ram_600c0018 & 0xdfffffff;
  }
  FUN_ram_40393978(0x13,iVar1);
  uStack_18 = 0x403844ea;
  uStack_14 = 0x403844f6;
  FUN_ram_4039488e(0x3fcb2074);
  FUN_ram_403948a4(0x3fcb2074,&uStack_18);
  (*(code *)&SUB_ram_400102cc)(0x3fcb2074,0);
  (*(code *)&SUB_ram_400102d0)(0x3fcb2074,2,0);
  (*(code *)&SUB_ram_400102d4)(0x3fcb2074,2,0);
  (*(code *)&SUB_ram_400102d8)(0x3fcb2074,0,0,1);
  return 0;
}

