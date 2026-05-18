
undefined4 FUN_ram_42073910(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x40);
  FUN_ram_4204b52a();
  FUN_ram_4209730c(1);
  FUN_ram_4204b032(param_2,param_1,param_1 + 0x20,uVar3);
  FUN_ram_4204afcc((-(uint)(param_4 == 0) & 0xfffffffd) + 3);
  FUN_ram_4204b158(1);
  FUN_ram_4204b00e();
  (*(code *)&SUB_ram_40010488)(param_3,0,0x44);
  *(uint *)(param_3 + 0x40) = uVar3;
  do {
    iVar1 = FUN_ram_4204b028();
  } while (iVar1 == 0);
  uVar2 = FUN_ram_4204b0d2(param_3,param_3 + 0x20,uVar3);
  FUN_ram_4209730c(0);
  FUN_ram_4204b53a();
  return uVar2;
}

