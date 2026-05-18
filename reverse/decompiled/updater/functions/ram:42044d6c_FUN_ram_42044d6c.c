
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42044d6c(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3fcdfb20;
  *(int *)(param_1 + 4) = _DAT_ram_3fcdfb20;
  *(undefined1 *)(iVar1 + 0x9b) = 0xff;
  *(undefined4 *)(iVar1 + 0x30) = 0x78;
  *(undefined4 *)(iVar1 + 0x38) = 0x168;
  *(int *)(iVar1 + 0x4c) = gp + 0xa4;
  *(undefined1 *)(iVar1 + 0x48) = 0xe;
  *(undefined2 *)(iVar1 + 0x118) = 0x1e;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined1 *)(iVar1 + 0x110) = 0;
  *(undefined4 *)(iVar1 + 0x114) = 0;
  FUN_ram_42044d24();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(_DAT_ram_3fcdfb20 + 4,0x42034a50,0);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(_DAT_ram_3fcdfb20 + 0x18,0x42034a46,0);
  iVar1 = _DAT_ram_3fcdfb20;
  *(int *)(param_1 + 0x168) = param_1 + 0x164;
  *(undefined4 *)(param_1 + 0x164) = 0;
  FUN_ram_42033fd8(1,9,5,0x3c07f26c,*(undefined1 *)(iVar1 + 0x9b),*(undefined4 *)(iVar1 + 0x34),
                   *(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x38),
                   *(undefined1 *)(iVar1 + 0x48),*(undefined1 *)(iVar1 + 0x110));
  return;
}

