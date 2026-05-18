
void FUN_ram_4209bcec(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x204) + -1;
  (**(code **)(param_1 + 0x208))
            (param_2,*(undefined4 *)(param_1 + 0x20c),param_3,param_4,*(code **)(param_1 + 0x208));
  piVar3 = (int *)((*(byte *)(param_2 + 2) & 0x7f) * 4 + param_1);
  puVar1 = (undefined4 *)0x0;
  for (puVar2 = (undefined4 *)*piVar3; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[1]
      ) {
    if (puVar2 == param_2) {
      if (puVar1 == (undefined4 *)0x0) {
        *piVar3 = param_2[1];
      }
      else {
        puVar1[1] = param_2[1];
      }
      break;
    }
    puVar1 = puVar2;
  }
  piVar3 = (undefined4 *)0x0;
  piVar4 = (int *)*(int *)(param_1 + 0x200);
  do {
    if (piVar4 == (int *)0x0) {
LAB_ram_4209bd38:
      FUN_ram_4209bc64();
      return;
    }
    if (piVar4 == param_2) {
      if (piVar3 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x200) = *param_2;
      }
      else {
        *piVar3 = *param_2;
      }
      goto LAB_ram_4209bd38;
    }
    piVar3 = piVar4;
    piVar4 = (int *)*piVar4;
  } while( true );
}

