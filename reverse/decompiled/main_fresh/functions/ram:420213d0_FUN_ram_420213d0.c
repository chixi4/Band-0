
int FUN_ram_420213d0(undefined4 param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [8];
  char acStack_28 [12];
  
  FUN_ram_42021394(param_2,auStack_30,acStack_28);
  uStack_38 = 0x21;
  iVar1 = FUN_ram_4204c2ba(param_1,auStack_30,param_3,&uStack_38);
  if (iVar1 == 0) {
    pcVar3 = acStack_28;
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    uStack_38 = 0x21;
    iVar2 = FUN_ram_4204c2ba(param_1,&DAT_ram_3c0c42a0,param_3,&uStack_38);
    if (iVar2 != 0) {
      return iVar1;
    }
    pcVar3 = "ise.";
  }
  uStack_34 = 0x41;
  iVar1 = FUN_ram_4204c2ba(param_1,pcVar3,param_4,&uStack_34);
  if (iVar1 != 0) {
    *param_4 = 0;
  }
  return 0;
}

