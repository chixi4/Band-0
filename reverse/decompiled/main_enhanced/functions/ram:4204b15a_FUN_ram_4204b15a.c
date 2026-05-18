
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4204b15a(undefined4 param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar1 = _DAT_ram_3fcc5214;
  piVar2 = _DAT_ram_3fcc5214;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      iVar3 = (*(code *)&SUB_ram_400104a8)(param_1);
      puVar4 = (undefined4 *)thunk_FUN_ram_403904a6(iVar3 + 6);
      iVar5 = 0x101;
      if (puVar4 != (undefined4 *)0x0) {
        *(undefined1 *)(puVar4 + 1) = param_2;
        FUN_ram_4039c11e((int)puVar4 + 5,param_1,iVar3 + 1);
        iVar5 = 0;
        *puVar4 = puVar1;
        _DAT_ram_3fcc5214 = puVar4;
      }
      return iVar5 == 0;
    }
    iVar3 = FUN_ram_4039c438((int)piVar2 + 5,param_1);
    if (iVar3 == 0) break;
    piVar2 = (int *)*piVar2;
  }
  *(undefined1 *)(piVar2 + 1) = param_2;
  return true;
}

