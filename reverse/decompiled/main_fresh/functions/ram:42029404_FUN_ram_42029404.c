
void FUN_ram_42029404(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_420305a2();
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 6) = 6;
    *(undefined4 *)(iVar1 + 8) = 0x410006;
    *(undefined4 *)(iVar1 + 0x10) = 0x42018e94;
  }
  return;
}

