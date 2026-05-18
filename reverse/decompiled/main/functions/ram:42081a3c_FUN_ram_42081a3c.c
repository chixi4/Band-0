
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42081a3c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    FUN_ram_4207a038(1,1,2,&DAT_ram_3c101dac);
    iVar1 = 0x102;
  }
  else {
    (*(code *)&SUB_ram_40010488)(&DAT_ram_3fcc4004,0,0x26c);
    DAT_ram_3fcc41aa = 1;
    DAT_ram_3fcc41d4 = 1;
    DAT_ram_3fcc41c2 = 1;
    DAT_ram_3fcc41d5 = *(int *)(iVar2 + 0x60) == 0;
    _DAT_ram_3fcc4230 = 0x400;
    DAT_ram_3fcc4204 = 1;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xdc))(&DAT_ram_3fcc41ce,0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xdc))(&DAT_ram_3fcc41c8,1);
    iVar1 = FUN_ram_4207ef24();
    if ((((iVar1 == 0) && (iVar1 = FUN_ram_4208191a(iVar2), iVar1 == 0)) &&
        (iVar1 = FUN_ram_420818e2(), iVar1 == 0)) && (iVar1 = FUN_ram_420818dc(iVar2), iVar1 == 0))
    {
      DAT_ram_3fcc41a9 = 1;
    }
    else {
      FUN_ram_42081a1c();
    }
  }
  return iVar1;
}

