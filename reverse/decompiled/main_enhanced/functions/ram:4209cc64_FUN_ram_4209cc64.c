
void FUN_ram_4209cc64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  (**(code **)(param_1 + 0xc))
            (param_2,*(undefined4 *)(param_1 + 0x10),param_3,param_4,*(code **)(param_1 + 0xc));
  FUN_ram_42060ace(param_2,0x80);
  return;
}

