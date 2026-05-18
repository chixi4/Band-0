
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203e36c(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined2 *puVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_ram_42033fd8(1,4,1,0x3c07d89c);
    return;
  }
  (*(code *)&SUB_ram_40010488)(param_1,0,0x3b8);
  *param_1 = param_2;
  (*(code *)&SUB_ram_40010488)((int)param_1 + 0xae,0,0x24);
  puVar2 = (undefined2 *)((int)param_1 + 0xd2);
  do {
    *puVar2 = 0xfff0;
    puVar2 = puVar2 + 1;
  } while ((undefined2 *)((int)param_1 + 0xf6) != puVar2);
  (*(code *)&SUB_ram_40010488)((undefined2 *)((int)param_1 + 0xf6),1,0x12);
  if (_DAT_ram_3fcb4f1c == 0) {
    uVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x144))();
    uVar1 = uVar1 & 0xfff;
    _DAT_ram_3fcb4f1c = uVar1;
  }
  else {
    uVar1 = _DAT_ram_3fcb4f1c + 0x800 & 0xfff;
    _DAT_ram_3fcb4f1c = 0;
  }
  *(ushort *)((int)param_1 + 0xce) = uVar1;
  *(undefined1 *)(param_1 + 0xcf) = *(undefined1 *)(*(int *)(gp + -0x2b8) + 0x448);
  FUN_ram_42033fd8(1,4,5,0x3c07f06c);
  return;
}

