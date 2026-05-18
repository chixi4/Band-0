
void FUN_ram_4207afcc(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)&DAT_ram_3fcb3578;
  uVar2 = 1;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      uVar3 = (*(code *)*puVar1)();
      uVar2 = uVar2 & uVar3;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 != (undefined4 *)&DAT_ram_3fcb3598);
  if (uVar2 != 0) {
    FUN_ram_403937f4();
    return;
  }
  return;
}

