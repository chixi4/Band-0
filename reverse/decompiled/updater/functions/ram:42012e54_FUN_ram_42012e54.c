
void FUN_ram_42012e54(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  while (puVar1 = (undefined4 *)*param_2, puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
    *param_2 = puVar1[2];
    iVar3 = FUN_ram_42012e1a(uVar2);
    if ((iVar3 != 0) && (*(code **)(iVar3 + 4) != (code *)0x0)) {
      (**(code **)(iVar3 + 4))(puVar1[1]);
    }
    thunk_FUN_ram_40390608(puVar1);
  }
  thunk_FUN_ram_40390608(param_2);
  return;
}

