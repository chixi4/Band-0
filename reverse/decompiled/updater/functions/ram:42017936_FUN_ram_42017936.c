
void FUN_ram_42017936(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_ram_40396524(1);
  iVar1 = FUN_ram_40396242();
  do {
    iVar2 = FUN_ram_42018452(3);
    if (iVar2 != 0) {
      return;
    }
    FUN_ram_40396524(1);
    iVar2 = FUN_ram_40396242();
  } while ((uint)(iVar2 - iVar1) < 0x7d1);
  uVar3 = FUN_ram_40398d1c();
  FUN_ram_40398c14(1,0x3c07123c,0x3c071244,uVar3,0x3c07123c);
  return;
}

