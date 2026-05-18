
void FUN_ram_40396626(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)&DAT_ram_3fcc1d70;
  uVar2 = 1;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      uVar3 = (*(code *)*puVar1)();
      uVar2 = uVar2 & uVar3;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 != (undefined4 *)&DAT_ram_3fcc1d90);
  if (uVar2 != 0) {
    FUN_ram_4039627e();
    FUN_ram_403962bc();
    return;
  }
  return;
}

