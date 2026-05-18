
uint thunk_FUN_ram_420962da(int param_1)

{
  uint *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (uint *)&DAT_ram_60047804;
  }
  else {
    puVar1 = (uint *)&DAT_ram_60047800;
  }
  return *puVar1 >> 0x11 & 1;
}

