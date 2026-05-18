
void FUN_ram_40391046(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  uVar1 = 0;
  do {
    puVar3 = (undefined1 *)(uVar1 + 0x3fcb82a0);
    uVar2 = uVar1 & 0xff;
    uVar1 = uVar1 + 1;
    FUN_ram_40394b64(0x69,0,uVar2,*puVar3);
  } while (uVar1 != 8);
  return;
}

