
int FUN_ram_4206d5e8(int param_1)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x54) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x54))(*(undefined4 *)(param_1 + 0x4c));
    return -(uint)(iVar1 == 2);
  }
  return 0;
}

