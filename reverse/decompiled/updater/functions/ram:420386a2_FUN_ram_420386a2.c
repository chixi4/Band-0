
void FUN_ram_420386a2(void)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  
  uVar1 = FUN_ram_42033988(*(undefined1 *)(*(int *)(gp + -0x2b8) + 0x3f3));
  iVar3 = *(int *)(gp + -0x2b8);
  uVar2 = 1;
  if (*(char *)(iVar3 + 0x3fc) == '\x01') {
    uVar1 = uVar1 & 1;
    uVar2 = 2;
  }
  else {
    if (*(char *)(iVar3 + 0x3fc) != '\x02') goto LAB_ram_420386c8;
    uVar1 = uVar1 & 2;
  }
  if (uVar1 == 0) {
    *(undefined1 *)(iVar3 + 0x3fc) = uVar2;
  }
LAB_ram_420386c8:
  FUN_ram_42038516(0x21,*(undefined1 *)(iVar3 + 0x3fc),DAT_ram_3fcb5145 == '\0');
  return;
}

