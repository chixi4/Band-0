
void FUN_ram_42060102(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x7c);
    if (iVar1 != 0) {
      FUN_ram_4205e466(*(undefined4 *)(iVar1 + 100));
      FUN_ram_4206636c(*(undefined4 *)(iVar1 + 0x78),0);
      FUN_ram_4206636c(*(undefined4 *)(iVar1 + 0x7c),0);
      FUN_ram_4206636c(*(undefined4 *)(iVar1 + 0x60),1);
      FUN_ram_4206636c(*(undefined4 *)(iVar1 + 0x5c),1);
      FUN_ram_4206636c(*(undefined4 *)(iVar1 + 0x44),0);
      FUN_ram_4206636c(*(undefined4 *)(iVar1 + 0x48),0);
      FUN_ram_4206636c(*(undefined4 *)(iVar1 + 0x50),0);
      FUN_ram_4205e51c(*(undefined4 *)(iVar1 + 0x58),1);
      FUN_ram_4205e51c(*(undefined4 *)(iVar1 + 0x4c),0);
      FUN_ram_4205e51c(*(undefined4 *)(iVar1 + 0x54),0);
      FUN_ram_4206587c(*(undefined4 *)(iVar1 + 0x80));
      FUN_ram_4206587c(*(undefined4 *)(iVar1 + 0x8c));
      FUN_ram_4206587c(*(undefined4 *)(iVar1 + 0x90));
      thunk_FUN_ram_40390608(*(undefined4 *)(iVar1 + 0x84));
      FUN_ram_42022954(iVar1,0x160);
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    return;
  }
  return;
}

