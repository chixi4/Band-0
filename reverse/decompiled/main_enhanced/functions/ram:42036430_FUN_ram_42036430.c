
void FUN_ram_42036430(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_1 + 0x38);
    if (*(undefined4 **)(param_1 + 0x38) == param_2) {
      *(undefined4 *)(param_1 + 0x38) = *param_2;
    }
    else {
      do {
        puVar1 = puVar2;
        puVar2 = (undefined4 *)*puVar1;
      } while (puVar2 != param_2);
      *puVar1 = *param_2;
    }
    FUN_ram_420305e2();
    return;
  }
  return;
}

