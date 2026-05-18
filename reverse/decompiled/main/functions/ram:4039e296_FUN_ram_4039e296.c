
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039e296(int param_1)

{
  if (*(char *)(param_1 + 0x168) != '\0') {
    if ((*(char *)(param_1 + 0x1d4) == '\0') && (*(char *)(param_1 + 0xe) != '\0')) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(param_1 + 0x16c);
      FUN_ram_4039e284(param_1);
      *(undefined2 *)(param_1 + 0x184) = 0;
      *(undefined1 *)(param_1 + 0x181) = 0;
    }
    return;
  }
  return;
}

