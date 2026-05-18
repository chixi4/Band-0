
undefined1 FUN_ram_4207f3aa(void)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (*(code *)&SUB_ram_40011f9c)();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(iVar2 + 0x134);
  }
  return uVar1;
}

