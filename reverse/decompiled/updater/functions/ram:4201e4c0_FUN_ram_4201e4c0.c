
int FUN_ram_4201e4c0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_44;
  undefined1 auStack_40 [36];
  
  if (*(int *)(param_1 + 100) == 1) {
    uStack_44 = 0;
    if ((param_3 != 0x41) ||
       (iVar2 = FUN_ram_4201e3c2(param_1,param_2,param_4,param_5,param_6), iVar2 == 0x1102)) {
      iVar1 = FUN_ram_4201defa(param_1,param_2,param_3,param_4,&uStack_44,auStack_40,0xff,0xff,0);
      iVar2 = 0x1102;
      if (iVar1 == 0) {
        iVar2 = FUN_ram_4202022a(uStack_44,param_2,param_3,param_4,param_5,param_6,0xff);
      }
    }
  }
  else {
    iVar2 = 0x1101;
  }
  return iVar2;
}

