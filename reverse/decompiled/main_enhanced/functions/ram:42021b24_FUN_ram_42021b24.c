
int FUN_ram_42021b24(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_18 [4];
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  iVar1 = 0x102;
  if (param_1 != 0) {
    iVar1 = 0x102;
    if ((param_3 != 0) && (iVar1 = thunk_FUN_ram_4204b7ce(auStack_18), iVar1 == 0)) {
      (*(code *)&SUB_ram_400106ac)(param_1,param_2,&DAT_ram_3c0c1904,param_3,uStack_14,uStack_13);
    }
  }
  return iVar1;
}

