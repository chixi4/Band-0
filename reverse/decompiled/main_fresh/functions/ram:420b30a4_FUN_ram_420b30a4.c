
void FUN_ram_420b30a4(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)*param_1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)puVar1[1];
    puVar3 = (undefined4 *)*param_1;
    if ((undefined4 *)*param_1 == puVar1) {
      *param_1 = (int)puVar4;
    }
    else {
      do {
        puVar2 = puVar3;
        puVar3 = (undefined4 *)puVar2[1];
      } while (puVar3 != puVar1);
      puVar2[1] = puVar4;
    }
    thunk_FUN_ram_40390634(*puVar1);
    thunk_FUN_ram_40390634(puVar1);
    puVar1 = puVar4;
  }
  return;
}

