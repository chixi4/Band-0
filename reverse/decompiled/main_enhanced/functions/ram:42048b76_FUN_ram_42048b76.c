
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_42048b76(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_ram_4039c08e(1,0x20);
    uVar2 = 0x101;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = param_1;
      puVar1[1] = param_2;
      uVar2 = FUN_ram_420b4f18(param_1,param_2);
      *param_4 = puVar1;
      puVar1[2] = uVar2;
      puVar1[6] = 0xb33fffff;
      puVar1[3] = param_3;
      puVar1[7] = 0;
      FUN_ram_403917e0(0x3fcc51a8);
      puVar1[4] = _DAT_ram_3fcc51ac;
      _DAT_ram_3fcc51ac = puVar1;
      FUN_ram_403917f8(0x3fcc51a8);
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x102;
}

