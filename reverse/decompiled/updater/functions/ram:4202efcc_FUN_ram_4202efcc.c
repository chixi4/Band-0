
int FUN_ram_4202efcc(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                    undefined4 param_6)

{
  int iVar1;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  
  param_5 = param_4 + param_5;
  iStack_38 = param_4;
  FUN_ram_4202476a(auStack_30);
  FUN_ram_4202476a(auStack_28);
  iVar1 = FUN_ram_4202b91a(&iStack_38,param_5,&iStack_34,0x30);
  if (iVar1 == 0) {
    iVar1 = -0x4fe6;
    if (param_5 != iStack_38 + iStack_34) goto LAB_ram_4202f010;
    iVar1 = FUN_ram_4202ba0a(&iStack_38,param_5,auStack_30);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_4202ba0a(&iStack_38,param_5,auStack_28), iVar1 == 0)) {
      iVar1 = FUN_ram_4202ed62(param_1,param_2,param_3,param_1 + 0x68,auStack_30,auStack_28,param_6)
      ;
      if ((iVar1 == 0) && (iStack_38 != param_5)) {
        iVar1 = -0x4c00;
      }
      goto LAB_ram_4202f010;
    }
  }
  iVar1 = iVar1 + -0x4f80;
LAB_ram_4202f010:
  FUN_ram_42024774(auStack_30);
  FUN_ram_42024774(auStack_28);
  return iVar1;
}

