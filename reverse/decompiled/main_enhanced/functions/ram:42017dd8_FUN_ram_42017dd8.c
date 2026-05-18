
void FUN_ram_42017dd8(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (DAT_ram_3fcc4fd8 == '\0') {
    DAT_ram_3fcc4fd8 = 1;
    puVar1 = (undefined4 *)FUN_ram_40396aa0(8);
    puVar2 = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      FUN_ram_42015f20();
      puVar2 = (undefined4 *)FUN_ram_42010478();
    }
    *puVar2 = 0;
    puVar2[1] = param_1;
    iVar3 = FUN_ram_40398e0e(0x42007cd6,0x3c0a8b38,0x800,puVar2,5,0,0x7fffffff);
    if (iVar3 != 1) {
      thunk_FUN_ram_40390634(puVar1);
      FUN_ram_42015f20(0);
      FUN_ram_42010478();
    }
    return;
  }
  return;
}

