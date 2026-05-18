
void FUN_ram_420a55ba(int param_1,int param_2)

{
  if (*(char *)(param_2 + 9) != '\n') {
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x10) = 0x420952d2;
  }
  return;
}

