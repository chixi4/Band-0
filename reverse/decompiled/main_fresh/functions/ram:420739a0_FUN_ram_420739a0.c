
undefined4 FUN_ram_420739a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_ram_4204b52a();
  FUN_ram_4209730c(1);
  FUN_ram_4204b08a(param_1,param_1 + 0x20,*(undefined2 *)(param_1 + 0x40));
  FUN_ram_4204afcc(2);
  FUN_ram_4204b00e();
  do {
    iVar1 = FUN_ram_4204b028();
  } while (iVar1 == 0);
  uVar2 = FUN_ram_4204b14c();
  FUN_ram_4209730c(0);
  FUN_ram_4204b53a();
  return uVar2;
}

