
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420586c8(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_ram_4205c954();
  while ((_DAT_ram_3fcc5330 != (int *)0x0 && (-1 < iVar2 - _DAT_ram_3fcc5330[1]))) {
    pcVar1 = (code *)_DAT_ram_3fcc5330[2];
    uVar3 = _DAT_ram_3fcc5330[3];
    _DAT_ram_3fcc532c = _DAT_ram_3fcc5330[1];
    _DAT_ram_3fcc5330 = (int *)*_DAT_ram_3fcc5330;
    FUN_ram_420531f8(0xb);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar3);
    }
  }
  return;
}

