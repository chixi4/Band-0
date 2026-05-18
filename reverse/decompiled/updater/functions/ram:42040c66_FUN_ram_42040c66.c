
void FUN_ram_42040c66(void)

{
  if (DAT_ram_3fcb51c8 != '\0') {
    *(undefined1 *)(gp + -0x1ce) = 0;
    *(undefined1 *)(gp + -0x1c8) = 0x9d;
    (*(code *)&LAB_ram_40012284)(0xffffff9d);
    return;
  }
  return;
}

