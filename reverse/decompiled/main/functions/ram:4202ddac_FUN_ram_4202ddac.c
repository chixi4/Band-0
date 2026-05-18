
void FUN_ram_4202ddac(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_420305a2();
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 6) = 5;
    *(undefined4 *)(iVar1 + 8) = 0x640005;
    *(undefined4 *)(iVar1 + 0x10) = 0x4201d9ee;
  }
  return;
}

