
uint FUN_ram_4203581e(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined1 *apuStack_58 [2];
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [36];
  
  apuStack_58[1] = auStack_30;
  apuStack_58[0] = auStack_50;
  uVar1 = FUN_ram_420357ac(param_2,apuStack_58[0],apuStack_58[1],param_3);
  FUN_ram_42035778(param_1,param_3 + 0x44,apuStack_58[uVar1 ^ 1],0,
                   (int)((*(ushort *)(param_3 + 2) + 1) * 0x10000) >> 0x10,param_3);
  uVar1 = FUN_ram_4203576a(param_1,param_3);
  return uVar1 ^ 1;
}

