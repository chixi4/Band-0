
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420242cc(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3fcc518c;
  if (_DAT_ram_3fcc518c != 0) {
    if (_DAT_ram_3fcc518c != param_1) {
      return 0xffffffff;
    }
    *(undefined4 *)(gp + -0x778) = 0xffffffff;
    _DAT_ram_3fcc518c = 0;
    FUN_ram_42032078(0xffffffff);
    thunk_FUN_ram_4203290e();
    FUN_ram_420267aa();
    FUN_ram_42026338();
    thunk_FUN_ram_4203290e();
    FUN_ram_42026d1e();
    thunk_FUN_ram_4203290e();
    FUN_ram_420260f4();
    FUN_ram_420b392e(*(undefined4 *)(iVar1 + 4),0x50633444,7,0,0,0xffffffff);
    FUN_ram_42024216(iVar1);
    thunk_FUN_ram_40390634(iVar1);
  }
  return 0;
}

