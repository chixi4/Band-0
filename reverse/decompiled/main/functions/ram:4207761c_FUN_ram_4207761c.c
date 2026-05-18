
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207761c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3fcc4018;
  iVar2 = FUN_ram_42087770();
  if (iVar2 == 0) {
    FUN_ram_4207a038(1,4,1,&DAT_ram_3c0fe5a8);
    FUN_ram_42075c60(*(undefined4 *)(iVar1 + 0xec),param_1,5);
    return;
  }
  *(undefined1 *)(iVar2 + 0x136) = 1;
  *(undefined4 *)(iVar2 + 0x150) = _DAT_ram_6004d000;
  *(undefined1 *)(iVar2 + 0x2f7) = 0;
  FUN_ram_4039c11e(iVar2 + 4,param_1,6);
  FUN_ram_42079936(iVar2 + 0x108,0);
  iVar1 = iVar2 + 0x13c;
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar1);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar1);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar1,0x420662ac,iVar2);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar1,2000,1);
  *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x20020;
  return;
}

