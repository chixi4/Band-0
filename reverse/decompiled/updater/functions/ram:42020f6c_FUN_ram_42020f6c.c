
undefined4 FUN_ram_42020f6c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_42059a60(0);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x42020f8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1 + 8))(param_1);
    return uVar2;
  }
  FUN_ram_420597d0(&DAT_ram_3fcb674c,0);
  FUN_ram_4205067e(0x42010e50,param_1,&DAT_ram_3fcb6750);
  thunk_FUN_ram_4205973a(&DAT_ram_3fcb674c);
  return *(undefined4 *)(param_1 + 4);
}

