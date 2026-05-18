
void FUN_ram_4203e47c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_a4;
  code *in_a5;
  
  puVar1 = *(undefined4 **)(in_a4 + 0x1c);
  iVar2 = (*in_a5)();
  if (*(char *)(iVar2 + 99) != '\0') {
    *puVar1 = 0x80208020;
    puVar1[1] = 0x110011;
    return;
  }
  *puVar1 = 0;
  puVar1[1] = 0x80208020;
  return;
}

