
void FUN_ram_42079958(int param_1)

{
  int iVar1;
  
  (*(code *)&SUB_ram_40010488)(param_1,0,0x14);
  iVar1 = FUN_ram_42095ef0();
  if (iVar1 == 0) {
    iVar1 = FUN_ram_42095f08();
  }
  else {
    iVar1 = FUN_ram_42095efc();
  }
  *(int *)(param_1 + 4) = iVar1 >> 1;
  FUN_ram_4207a038(1,0x10,3,&DAT_ram_3c0ff92c);
  return;
}

