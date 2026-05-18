
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42055a92(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_ram_420599aa();
  while ((_DAT_ram_3fcb6800 != (int *)0x0 && (-1 < iVar2 - _DAT_ram_3fcb6800[1]))) {
    pcVar1 = (code *)_DAT_ram_3fcb6800[2];
    uVar3 = _DAT_ram_3fcb6800[3];
    _DAT_ram_3fcb67fc = _DAT_ram_3fcb6800[1];
    _DAT_ram_3fcb6800 = (int *)*_DAT_ram_3fcb6800;
    FUN_ram_4205151c(0xb);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar3);
    }
  }
  return;
}

