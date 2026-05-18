
undefined4 FUN_ram_420651ae(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_1 != 0) {
    local_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    iVar1 = FUN_ram_42066a52(*(undefined4 *)(param_1 + 0x68),*(undefined2 *)(param_1 + 0x1a),
                             &local_1c,0xc);
    uVar2 = 0xffffffff;
    if (-1 < iVar1) {
      while (*(int *)(param_1 + 0x70) != 3) {
        FUN_ram_40398498(10);
      }
      if (*(int *)(param_1 + 0x2c) != 0) {
        if (*(code **)(param_1 + 0x30) == (code *)0x0) {
          thunk_FUN_ram_40390634();
        }
        else {
          (**(code **)(param_1 + 0x30))();
        }
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      if (*(int *)(param_1 + 0x34) != 0) {
        if (*(code **)(param_1 + 0x38) == (code *)0x0) {
          thunk_FUN_ram_40390634();
        }
        else {
          (**(code **)(param_1 + 0x38))();
        }
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      FUN_ram_42064c92(param_1);
      FUN_ram_42064d46(8,0,0);
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x102;
}

