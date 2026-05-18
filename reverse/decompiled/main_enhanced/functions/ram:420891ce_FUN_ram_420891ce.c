
void FUN_ram_420891ce(void)

{
  if (DAT_ram_3fcc4258 != '\0') {
    *(undefined1 *)(gp + 0x3a) = 0;
    *(undefined1 *)(gp + 0x40) = 0x9d;
    (*(code *)&LAB_ram_40012284)(0xffffff9d);
    return;
  }
  return;
}

