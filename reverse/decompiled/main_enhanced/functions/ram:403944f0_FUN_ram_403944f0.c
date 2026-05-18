
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_403944f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_a4;
  
  uVar1 = (**(code **)(_DAT_ram_3fcc4c78 + 4))();
  thunk_FUN_ram_40394bd4();
  uVar2 = (**(code **)(_DAT_ram_3fcc4c78 + 0x1c))(param_1);
  uVar3 = (**(code **)(_DAT_ram_3fcc4c78 + 0x24))(param_1);
  uVar2 = (**(code **)(_DAT_ram_3fcc4c78 + 0x28))
                    (param_1,uVar2,uVar3,param_3,extraout_a4,*(code **)(_DAT_ram_3fcc4c78 + 0x28));
  thunk_FUN_ram_40394be4();
  (**(code **)(_DAT_ram_3fcc4c78 + 8))(uVar1);
  return uVar2;
}

