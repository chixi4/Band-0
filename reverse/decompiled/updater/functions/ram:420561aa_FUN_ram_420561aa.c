
void FUN_ram_420561aa(int param_1,uint param_2)

{
  if (*(byte *)(param_1 + 5) != param_2) {
    *(char *)(param_1 + 5) = (char)param_2;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

