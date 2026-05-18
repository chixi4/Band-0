
void FUN_ram_42099638(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_ram_42060ace(puVar2,0x30);
    puVar2 = puVar1;
  }
  *param_1 = 0;
  return;
}

