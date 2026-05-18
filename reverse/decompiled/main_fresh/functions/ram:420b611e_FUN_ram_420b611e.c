
void FUN_ram_420b611e(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_ram_4039b010();
    iVar1 = FUN_ram_4039c438(param_1,&DAT_ram_3c0c381c);
    if (iVar1 == 0) {
      FUN_ram_4204b4e0(param_2);
      FUN_ram_4204b22e();
      FUN_ram_4204b45a();
    }
    else {
      iVar1 = FUN_ram_4204b15a(param_1,param_2);
      if (iVar1 != 0) {
        FUN_ram_4204b2f2(param_1,param_2);
      }
    }
    FUN_ram_4039b086();
    return;
  }
  return;
}

