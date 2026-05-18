
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40396dcc(void)

{
  int iVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 auStack_14 [3];
  
  uStack_1c = 0;
  uStack_18 = 0;
  FUN_ram_40394f06(&uStack_1c,&uStack_18,auStack_14);
  _DAT_ram_3fcb65c8 =
       FUN_ram_40396d46(0x4038602e,0x3c0705a0,auStack_14[0],0,0,uStack_18,uStack_1c,0);
  if ((_DAT_ram_3fcb65c8 != 0) && (iVar1 = FUN_ram_40396dc8(), iVar1 == 1)) {
    FUN_ram_40394d36();
    _DAT_ram_3fcb65cc = 0xffffffff;
    _DAT_ram_3fcb65e8 = 0;
    _DAT_ram_3fcb65e0 = iVar1;
    FUN_ram_40394e0c();
  }
  return;
}

