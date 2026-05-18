
undefined4 FUN_ram_4207ebf2(void)

{
  int iVar1;
  
  iVar1 = *(int *)(gp + -0xb4);
  if (((*(char *)(iVar1 + 1) == '\x01') && (*(char *)(iVar1 + 0x50d) == '\0')) &&
     (*(char *)(iVar1 + 0x475) == '\0')) {
    *(undefined1 *)(iVar1 + 0x475) = 1;
    *(undefined1 *)(iVar1 + 0x50d) = 1;
    *(undefined1 *)(iVar1 + 1) = 0;
  }
  return 0;
}

