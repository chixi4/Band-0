
undefined4 FUN_ram_4209c174(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4207f0b6(0);
  (*(code *)&SUB_ram_40010488)(param_3,0,0x24);
  uVar2 = 0xffffffff;
  if ((param_2 != 0) && ((iVar1 != 1 || (uVar2 = 0xffffffff, (*(byte *)(param_1 + 2) & 0x20) != 0)))
     ) {
    *(byte *)(param_3 + 0x20) = *(byte *)(param_1 + 2);
    uVar2 = 0;
  }
  return uVar2;
}

