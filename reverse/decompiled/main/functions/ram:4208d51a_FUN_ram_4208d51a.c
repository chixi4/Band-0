
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208d51a(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3fcdfb20;
  *(int *)(param_1 + 4) = _DAT_ram_3fcdfb20;
  *(undefined1 *)(iVar1 + 0x9b) = 0xff;
  *(undefined4 *)(iVar1 + 0x30) = 0x78;
  *(undefined4 *)(iVar1 + 0x38) = 0x168;
  *(int *)(iVar1 + 0x4c) = gp + 0x1d8;
  *(undefined1 *)(iVar1 + 0x48) = 0xe;
  *(undefined2 *)(iVar1 + 0x118) = 0x1e;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined1 *)(iVar1 + 0x110) = 0;
  *(undefined4 *)(iVar1 + 0x114) = 0;
  FUN_ram_4208d4d2();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(_DAT_ram_3fcdfb20 + 4,0x4207d15e,0);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(_DAT_ram_3fcdfb20 + 0x18,0x4207d154,0);
  iVar1 = _DAT_ram_3fcdfb20;
  *(int *)(param_1 + 0x168) = param_1 + 0x164;
  *(undefined4 *)(param_1 + 0x164) = 0;
  FUN_ram_4207a038(1,9,5,
                   "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..." /* TRUNCATED STRING LITERAL */
                   ,*(undefined1 *)(iVar1 + 0x9b),*(undefined4 *)(iVar1 + 0x34),
                   *(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x38),
                   *(undefined1 *)(iVar1 + 0x48),*(undefined1 *)(iVar1 + 0x110));
  return;
}

