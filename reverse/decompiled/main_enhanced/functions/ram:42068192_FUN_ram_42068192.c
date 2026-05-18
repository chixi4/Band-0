
undefined4 FUN_ram_42068192(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    FUN_ram_42068078();
  }
  else {
    if (*(ushort *)((int)param_1 + 6) != param_2) {
      FUN_ram_42068078();
      uVar1 = FUN_ram_420680a2(param_1,param_2);
      return uVar1;
    }
    (*(code *)&SUB_ram_40010488)(*param_1,0,(uint)*(ushort *)((int)param_1 + 6) << 2);
    *(undefined2 *)(param_1 + 1) = 1;
  }
  return 0;
}

