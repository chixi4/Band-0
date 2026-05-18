
undefined4 FUN_ram_4209819e(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (param_1 != (int *)0x0) {
    uVar2 = 0xfffffff0;
    if ((param_2 != 0) && (*param_1 == param_2)) {
      if (param_1[0x12] != 0) {
        FUN_ram_42058d56();
        FUN_ram_42058d78(param_1[0x12]);
        param_1[0x12] = 0;
      }
      puVar1 = (undefined4 *)param_1[8];
      while (puVar1 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)puVar1[1];
        FUN_ram_4209791a(param_1 + 8,puVar1);
        thunk_FUN_ram_40390634(*puVar1);
        thunk_FUN_ram_40390634(puVar1);
        puVar1 = puVar3;
      }
      FUN_ram_42058690(0x42087940,param_1);
      param_1[0x13] = 2;
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xfffffff0;
}

