
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4208900e(undefined4 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = _DAT_ram_3fcc4014;
  cVar1 = *(char *)(_DAT_ram_3fcc4014 + 0x12a);
  if ((byte)(*(char *)(param_2 + 3) - 1U) < 0xe) {
    iVar5 = FUN_ram_42079406(cVar1);
    iVar6 = FUN_ram_42079406(*(undefined1 *)(param_2 + 3));
    if (((iVar5 == iVar6) &&
        (FUN_ram_4207a038(1,0x8000,3,&DAT_ram_3c100184,*(undefined1 *)(param_2 + 3),cVar1),
        DAT_ram_3fcc41a7 != '\x01')) && (cVar2 = *(char *)(param_2 + 3), cVar2 != cVar1)) {
      DAT_ram_3fcc41a7 = 1;
      DAT_ram_3fcc41a8 = *(byte *)(param_2 + 4);
      DAT_ram_3fcc41a5 = 0;
      if (((**(char **)(gp + -0xb4) == '\x03') && (DAT_ram_3fcc41a6 != '\0')) &&
         (bVar3 = (*(char **)(gp + -0xb4))[0x50a], DAT_ram_3fcc41a8 < bVar3)) {
        DAT_ram_3fcc41a8 = bVar3;
      }
      DAT_ram_3fcc41a4 = cVar2;
      FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd6e8,cVar2,cVar1,DAT_ram_3fcc41a8 + 1);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc3fec);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc3fec);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(0x3fcc3fec,0x4207529e,0);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))
                (0x3fcc3fec,
                 (DAT_ram_3fcc41a8 + 1) * (uint)*(ushort *)(*(int *)(iVar4 + 0xe4) + 0x28),0);
      return 0;
    }
  }
  else {
    FUN_ram_4207a038(1,0x8000,2,&PTR_FUN_ram_42012e42_ram_3c102024);
  }
  return 0xffffffff;
}

