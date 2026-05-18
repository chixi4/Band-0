
void FUN_ram_42086e00(undefined4 param_1,int param_2)

{
  int iVar1;
  
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fcb18,param_2);
  if ((param_2 == 0) && (iVar1 = FUN_ram_42086aaa(), iVar1 != 1)) {
    return;
  }
  (*(code *)&SUB_ram_40011d48)();
  return;
}

