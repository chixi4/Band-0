
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42031fda(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  
  thunk_FUN_ram_4202b7dc();
  iVar2 = FUN_ram_420365de(param_1);
  if (iVar2 == 0) {
    thunk_FUN_ram_4202b7f6();
    return;
  }
  puVar3 = *(undefined2 **)(iVar2 + 0x5c);
  iVar4 = *(int *)(iVar2 + 0x60);
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  thunk_FUN_ram_4202b7f6();
  FUN_ram_4202ca18(param_1);
  if (puVar3 != (undefined2 *)0x0) {
    puVar1 = puVar3;
    for (iVar2 = 0; iVar2 < iVar4; iVar2 = iVar2 + 1) {
      FUN_ram_420319f2(param_1,*puVar1,2,*(undefined1 *)(puVar1 + 1),0);
      puVar1 = puVar1 + 2;
    }
    FUN_ram_403a3284(_DAT_ram_3fcb6bb8 + 0x10,puVar3);
    return;
  }
  return;
}

