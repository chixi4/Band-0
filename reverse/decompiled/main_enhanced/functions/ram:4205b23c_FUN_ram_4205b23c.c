
void FUN_ram_4205b23c(int param_1,uint param_2)

{
  if ((*(char *)(param_1 + 9) == '\x02') ||
     ((*(char *)(param_1 + 9) == '\x01' &&
      ((*(ushort *)(param_1 + 10) == 0 || (param_2 < *(ushort *)(param_1 + 10))))))) {
    FUN_ram_4205b1e4(param_1);
    *(undefined1 *)(param_1 + 9) = 1;
  }
  return;
}

