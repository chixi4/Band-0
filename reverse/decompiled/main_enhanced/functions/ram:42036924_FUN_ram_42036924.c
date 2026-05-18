
int FUN_ram_42036924(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 auStack_14 [2];
  
  thunk_FUN_ram_4202b7dc();
  iVar1 = FUN_ram_4203158a(param_1,5,auStack_14,&uStack_18);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4203083c(auStack_14[0],uStack_18,param_2);
  }
  else {
    (*(code *)&SUB_ram_40011a08)(param_2);
  }
  thunk_FUN_ram_4202b7f6();
  return iVar1;
}

