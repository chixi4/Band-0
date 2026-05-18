
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42052592(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_ram_42051500(0);
  if (iVar2 != 0) {
    (*(code *)&SUB_ram_40010488)(iVar2,0,0x1c);
    *(undefined1 *)(iVar2 + 0xb) = 0x40;
    *(undefined1 *)(iVar2 + 0x13) = 0x40;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    iVar1 = iVar2;
    *(int *)(iVar2 + 0xc) = _DAT_ram_3fcb67b4;
    _DAT_ram_3fcb67b4 = iVar1;
  }
  return iVar2;
}

