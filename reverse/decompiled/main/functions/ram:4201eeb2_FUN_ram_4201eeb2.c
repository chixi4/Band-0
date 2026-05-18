
void FUN_ram_4201eeb2(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4201ee6a();
  if (iVar1 != 0) {
    (*(code *)&SUB_ram_40010488)(iVar1,-(param_1 == 0),5000);
    return;
  }
  return;
}

