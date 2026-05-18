
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420b3bee(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)((param_1 * 4 + param_2) * 4 + 0x3fcc1e88) == 0) {
    iVar1 = FUN_ram_42096a8c();
    if (iVar1 == 1) {
      uVar2 = FUN_ram_42096ab2(1,param_1,param_2);
    }
    else {
      FUN_ram_420b493c();
      FUN_ram_40396966();
      _DAT_ram_60008108 = _DAT_ram_60008108 & 0xc7ffffff | 0x20000000;
      uVar2 = FUN_ram_42096d2e(param_1,param_2,1);
      FUN_ram_40396994();
      FUN_ram_420b499a();
    }
    *(undefined4 *)((param_1 * 4 + param_2) * 4 + 0x3fcc1e88) = uVar2;
  }
  return;
}

