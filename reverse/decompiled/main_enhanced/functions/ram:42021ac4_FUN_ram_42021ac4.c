
int FUN_ram_42021ac4(int param_1,uint param_2)

{
  int iVar1;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  iVar1 = 0x102;
  if (param_1 != 0) {
    iVar1 = 0x102;
    if ((0xc < param_2) && (iVar1 = thunk_FUN_ram_4204b7ce(&uStack_18), iVar1 == 0)) {
      (*(code *)&SUB_ram_400106ac)
                (param_1,param_2,0x3c0a87f0,uStack_18,uStack_17,uStack_16,uStack_15,uStack_14,
                 uStack_13);
    }
  }
  return iVar1;
}

