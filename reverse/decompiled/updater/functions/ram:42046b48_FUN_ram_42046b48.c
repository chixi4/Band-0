
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42046b48(void)

{
  uint *puVar1;
  undefined1 uVar2;
  
  if ((*(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) & 1) == 0) {
    FUN_ram_42033fd8(1,8,4,0x3c07cd00);
    return;
  }
  FUN_ram_42033fd8(1,0xc,4,0x3c07c564,3);
  FUN_ram_420392fa(3);
  puVar1 = _DAT_ram_3fcdfb20;
  if ((*_DAT_ram_3fcdfb20 & 0x1000) == 0) {
    if ((*_DAT_ram_3fcdfb20 & 0x40100) == 0) {
      uVar2 = FUN_ram_42033ac8(*(undefined1 *)((int)_DAT_ram_3fcdfb20 + 0x9b));
      *(undefined1 *)((int)puVar1 + 0x45) = uVar2;
    }
    else {
      *(undefined1 *)((int)_DAT_ram_3fcdfb20 + 0x45) = 0;
    }
  }
  FUN_ram_4204637e();
  FUN_ram_42033fd8(1,8,4,0x3c07c698,*_DAT_ram_3fcdfb20,(char)_DAT_ram_3fcdfb20[0x11],
                   _DAT_ram_3fcdfb20[0xf],_DAT_ram_3fcdfb20[0x10],
                   *(undefined1 *)((int)_DAT_ram_3fcdfb20 + 0x46),_DAT_ram_6004d000,
                   *(undefined1 *)((int)_DAT_ram_3fcdfb20 + 0x45));
  if ((*_DAT_ram_3fcb4f74 & 2) != 0) {
    FUN_ram_42046892(0);
    return;
  }
  FUN_ram_42033fd8(1,8,2,0x3c07ffe4);
  return;
}

