
void FUN_ram_42011ab8(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = 0;
  do {
    uVar2 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,iVar1);
    if ((uVar2 & 1) != 0) {
      FUN_ram_420488ac(iVar1,0);
      FUN_ram_4204891c(iVar1,3);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x15);
  uVar3 = FUN_ram_4204a482(0);
  FUN_ram_4204891c(uVar3,0);
  uVar3 = FUN_ram_4204a482(1);
  FUN_ram_4204891c(uVar3,0);
  uVar3 = FUN_ram_4204a482(2);
  FUN_ram_4204891c(uVar3,0);
  uVar3 = FUN_ram_4204a482(4);
  FUN_ram_4204891c(uVar3,0);
  uVar3 = FUN_ram_4204a482(5);
  FUN_ram_4204891c(uVar3,0);
  return;
}

