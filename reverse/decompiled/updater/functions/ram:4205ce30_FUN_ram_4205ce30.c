
undefined4 FUN_ram_4205ce30(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)FUN_ram_4205cdfa();
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0x105;
  }
  else {
    iVar4 = puVar2[2];
    puVar1 = (undefined4 *)*param_1;
    if ((undefined4 *)*param_1 == puVar2) {
      *param_1 = iVar4;
      if (iVar4 == 0) {
        param_1[1] = (int)param_1;
      }
    }
    else {
      do {
        puVar5 = puVar1;
        puVar1 = (undefined4 *)puVar5[2];
      } while ((undefined4 *)puVar5[2] != puVar2);
      puVar5[2] = iVar4;
      if (iVar4 == 0) {
        param_1[1] = (int)(puVar5 + 2);
      }
    }
    thunk_FUN_ram_40390608(*puVar2);
    thunk_FUN_ram_40390608(puVar2[1]);
    thunk_FUN_ram_40390608(puVar2);
    uVar3 = 0;
  }
  return uVar3;
}

