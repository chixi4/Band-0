
int FUN_ram_4202d6e2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 auStack_14 [2];
  
  thunk_FUN_ram_4202b7dc();
  iVar1 = FUN_ram_4203158a(param_1,4,auStack_14,&uStack_18);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4202d64e(auStack_14[0],uStack_18,param_3);
    thunk_FUN_ram_4202b7f6();
  }
  else {
    thunk_FUN_ram_4202b7f6();
    (*(code *)&SUB_ram_40011a08)(param_3);
  }
  return iVar1;
}

