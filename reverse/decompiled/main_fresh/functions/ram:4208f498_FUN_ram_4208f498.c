
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208f498(void)

{
  uint *puVar1;
  undefined1 uVar2;
  
  if ((*(byte *)((int)_DAT_ram_3fcdfb20 + 0x46) & 1) == 0) {
    FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fe1b0);
    return;
  }
  FUN_ram_4207a038(1,0xc,4,&DAT_ram_3c0fda14,3);
  FUN_ram_4207f554(3);
  puVar1 = _DAT_ram_3fcdfb20;
  if ((*_DAT_ram_3fcdfb20 & 0x1000) == 0) {
    if ((*_DAT_ram_3fcdfb20 & 0x40100) == 0) {
      uVar2 = FUN_ram_420794d8(*(undefined1 *)((int)_DAT_ram_3fcdfb20 + 0x9b));
      *(undefined1 *)((int)puVar1 + 0x45) = uVar2;
    }
    else {
      *(undefined1 *)((int)_DAT_ram_3fcdfb20 + 0x45) = 0;
    }
  }
  FUN_ram_4208ecce();
  FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fdb48,*_DAT_ram_3fcdfb20,(char)_DAT_ram_3fcdfb20[0x11],
                   _DAT_ram_3fcdfb20[0xf],_DAT_ram_3fcdfb20[0x10],
                   *(undefined1 *)((int)_DAT_ram_3fcdfb20 + 0x46),_DAT_ram_6004d000,
                   *(undefined1 *)((int)_DAT_ram_3fcdfb20 + 0x45));
  if ((*_DAT_ram_3fcc4004 & 2) != 0) {
    FUN_ram_4208f1e2(0);
    return;
  }
  FUN_ram_4207a038(1,8,2,&DAT_ram_3c10211c);
  return;
}

