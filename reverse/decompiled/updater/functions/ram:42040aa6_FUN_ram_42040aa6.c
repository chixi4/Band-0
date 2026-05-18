
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42040aa6(undefined4 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = _DAT_ram_3fcb4f84;
  cVar1 = *(char *)(_DAT_ram_3fcb4f84 + 0x12a);
  if ((byte)(*(char *)(param_2 + 3) - 1U) < 0xe) {
    iVar5 = FUN_ram_420339f8(cVar1);
    iVar6 = FUN_ram_420339f8(*(undefined1 *)(param_2 + 3));
    if (((iVar5 == iVar6) &&
        (FUN_ram_42033fd8(1,0x8000,3,0x3c07e654,*(undefined1 *)(param_2 + 3),cVar1),
        DAT_ram_3fcb5117 != '\x01')) && (cVar2 = *(char *)(param_2 + 3), cVar2 != cVar1)) {
      DAT_ram_3fcb5117 = 1;
      DAT_ram_3fcb5118 = *(byte *)(param_2 + 4);
      DAT_ram_3fcb5115 = 0;
      if (((**(char **)(gp + -0x2b8) == '\x03') && (DAT_ram_3fcb5116 != '\0')) &&
         (bVar3 = (*(char **)(gp + -0x2b8))[0x50a], DAT_ram_3fcb5118 < bVar3)) {
        DAT_ram_3fcb5118 = bVar3;
      }
      DAT_ram_3fcb5114 = cVar2;
      FUN_ram_42033fd8(1,4,4,0x3c07c238,cVar2,cVar1,DAT_ram_3fcb5118 + 1);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb4f5c);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb4f5c);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(0x3fcb4f5c,0x4202d698,0);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))
                (0x3fcb4f5c,
                 (DAT_ram_3fcb5118 + 1) * (uint)*(ushort *)(*(int *)(iVar4 + 0xe4) + 0x28),0);
      return 0;
    }
  }
  else {
    FUN_ram_42033fd8(1,0x8000,2,0x3c07fefc);
  }
  return 0xffffffff;
}

