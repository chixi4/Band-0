
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42062fd2(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((param_1 == 0) || (param_3 == 0)) || (4 < param_2)) {
    uVar2 = 0x102;
  }
  else {
    iVar3 = FUN_ram_420b3cca(*(undefined4 *)(param_1 + 0x3c));
    if (iVar3 == 0) {
      FUN_ram_40396966();
      iVar3 = FUN_ram_403948d2(*(undefined4 *)(param_1 + 0x34),1);
      if (iVar3 == 0) goto LAB_ram_42063024;
      do {
        FUN_ram_4039bf1e();
LAB_ram_42063024:
        FUN_ram_42096f18(param_1,param_2);
        uVar1 = _DAT_ram_60040020;
        FUN_ram_42096cd6(*(undefined4 *)(param_1 + 0x3c));
        FUN_ram_40392b52(*(undefined4 *)(param_1 + 0x3c),uVar1 >> 0x17 & 3);
        param_3 = FUN_ram_42096fe6(param_1,param_3);
        param_2 = FUN_ram_403948d2(*(undefined4 *)(param_1 + 0x34),0);
      } while (param_2 != 0);
      FUN_ram_40396994();
      FUN_ram_420b3c88(*(undefined4 *)(param_1 + 0x3c));
      if (param_3 != 0) {
        return 0;
      }
    }
    uVar2 = 0x107;
  }
  return uVar2;
}

