
void FUN_ram_420a593e(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    FUN_ram_4206c49a(iVar1 + 0x154);
    FUN_ram_42071898(iVar1 + 0x48);
    FUN_ram_4206d7d4(*(undefined4 *)(iVar1 + 0xf4));
    FUN_ram_420a5254(*(undefined4 *)(iVar1 + 0xfc));
    FUN_ram_420a85ae(iVar1 + 0x108);
    FUN_ram_4206d7da(iVar1,0x1fc);
    return;
  }
  return;
}

