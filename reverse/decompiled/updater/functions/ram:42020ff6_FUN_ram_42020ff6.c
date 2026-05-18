
void FUN_ram_42020ff6(int param_1)

{
  if ((*(char *)(param_1 + 0x40) == '\0') && (*(int *)(param_1 + 0x10) != 0)) {
    *(undefined1 *)(param_1 + 0x40) = 1;
    FUN_ram_4205598a(120000,&DAT_ram_420110aa,param_1);
    return;
  }
  return;
}

