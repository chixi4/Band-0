
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420adbe0(int param_1)

{
  ushort uVar1;
  code *pcVar2;
  
  if ((_DAT_ram_3fcb7fb0 & 0x400) == 0) {
    (*(code *)&SUB_ram_400124d0)(6);
    _DAT_ram_60044110 = _DAT_ram_60044110 | 0xc000;
    (**(code **)(_DAT_ram_3fcc4c78 + 0x78))();
    (**(code **)(_DAT_ram_3fcc4c78 + 0x88))(0);
    if (param_1 != 0) {
      pcVar2 = *(code **)(_DAT_ram_3fcc4c78 + 0x70);
      uVar1 = (**(code **)(_DAT_ram_3fcc4c78 + 0x74))(1,1);
      (*pcVar2)(1,1,uVar1 | 2);
    }
    (**(code **)(_DAT_ram_3fcc4c78 + 0x184))(0,0x80,&DAT_ram_3fcb7fe0,0);
    _DAT_ram_6004407c = _DAT_ram_6004407c & 0xf7ffffff;
    _DAT_ram_60044110 = _DAT_ram_60044110 & 0xffff7fff;
    (**(code **)(_DAT_ram_3fcc4c78 + 0x88))(0);
    (**(code **)(_DAT_ram_3fcc4c78 + 0x7c))();
    _DAT_ram_3fcb7fb0 = _DAT_ram_3fcb7fb0 | 0x400;
  }
  return;
}

