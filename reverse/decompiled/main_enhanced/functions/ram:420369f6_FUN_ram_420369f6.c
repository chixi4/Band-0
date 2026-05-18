
undefined4
FUN_ram_420369f6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 auStack_24 [4];
  
  puVar1 = (undefined1 *)FUN_ram_4203698e(1,param_2,param_5 + 2U & 0xffff,auStack_24);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = (char)param_3;
    puVar1[1] = (char)((uint)param_3 >> 8);
    FUN_ram_4039c11e(puVar1 + 2,param_4,param_5);
    uVar2 = FUN_ram_42036924(param_1,auStack_24[0]);
    return uVar2;
  }
  return 6;
}

