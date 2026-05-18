
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420b556a(void)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_40394a24(0x13);
  if (iVar1 == 0) {
    _DAT_ram_600c0010 = _DAT_ram_600c0010 | 0x20000000;
    _DAT_ram_600c0018 = _DAT_ram_600c0018 & 0xdfffffff;
  }
  FUN_ram_40394a46(0x13,iVar1);
  uStack_18 = 0x40386128;
  uStack_14 = 0x40386134;
  FUN_ram_403963b6(&DAT_ram_3fcb9574);
  FUN_ram_403963cc(&DAT_ram_3fcb9574,&uStack_18);
  (*(code *)&SUB_ram_400102cc)(&DAT_ram_3fcb9574,0);
  (*(code *)&SUB_ram_400102d0)(&DAT_ram_3fcb9574,2,0);
  (*(code *)&SUB_ram_400102d4)(&DAT_ram_3fcb9574,2,0);
  (*(code *)&SUB_ram_400102d8)(&DAT_ram_3fcb9574,0,0,1);
  return 0;
}

