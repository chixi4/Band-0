
void FUN_ram_420722c8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_42068310(param_1,1);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_42068310(param_1 + 8,1), iVar1 == 0)) {
    FUN_ram_42068310(param_1 + 0x10,0);
    return;
  }
  return;
}

