
undefined4 * FUN_ram_4209bf6e(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_ram_4209be7a();
  if (puVar1 == (undefined4 *)0x0) {
    iVar3 = *(int *)(param_1 + 0x58);
    if ((iVar3 < **(int **)(param_1 + 4)) &&
       (puVar1 = (undefined4 *)FUN_ram_4039c08e(1,0x28), puVar1 != (undefined4 *)0x0)) {
      FUN_ram_4039c11e(puVar1 + 2,param_2,6);
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 **)(param_1 + 0x14) = puVar1;
      *puVar1 = uVar2;
      *(int *)(param_1 + 0x58) = iVar3 + 1;
      FUN_ram_4209beb6(param_1,puVar1);
    }
  }
  return puVar1;
}

