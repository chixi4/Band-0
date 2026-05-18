
void FUN_ram_403932c2(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)*param_1;
  if (((uint *)param_1[1] != puVar1 + 8) && ((uint *)param_1[1] != (uint *)puVar1[8])) {
    thunk_FUN_ram_40390634();
  }
  puVar2 = puVar1 + 9;
  if ((*puVar1 & 4) == 0) {
    puVar2 = (uint *)puVar1[9];
  }
  if ((uint *)param_1[2] != puVar2) {
    FUN_ram_4039c11e(puVar2,(uint *)param_1[2],puVar1[5] + 7 >> 3);
    thunk_FUN_ram_40390634(param_1[2]);
    return;
  }
  return;
}

