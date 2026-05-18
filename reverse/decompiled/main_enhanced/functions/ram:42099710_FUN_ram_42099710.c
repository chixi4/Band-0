
int FUN_ram_42099710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_60 [6];
  undefined1 auStack_5a [32];
  undefined1 auStack_3a [8];
  undefined1 auStack_32 [30];
  
  FUN_ram_4039c11e(auStack_60,param_3,6);
  FUN_ram_4039c11e(auStack_5a,param_4,0x20);
  FUN_ram_42060778(auStack_3a);
  iVar1 = FUN_ram_42060348(auStack_32,0x10);
  FUN_ram_4209cba6(param_1,0x20,param_2,auStack_60,0x3e,param_5,param_6);
  return iVar1 >> 0x1f;
}

