
int FUN_ram_420669e6(ushort param_1)

{
  int iVar1;
  int iVar2;
  undefined2 local_20;
  ushort uStack_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_42051600(2,2,0x11);
  if (-1 < iVar1) {
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    _local_20 = CONCAT22(param_1 << 8 | param_1 >> 8,0x200);
    FUN_ram_4205be7a("Sleep first when your body is drained.",&uStack_1c);
    iVar2 = FUN_ram_4205109a(iVar1,&local_20,0x10);
    if (-1 < iVar2) {
      return iVar1;
    }
    FUN_ram_420b1020(iVar1);
  }
  return -1;
}

