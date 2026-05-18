
undefined4
FUN_ram_4209cbac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  char cStack_4d;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  char *pcStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [20];
  
  cStack_4d = '\0';
  iStack_40 = (*(code *)&SUB_ram_400104a8)(param_3);
  pcStack_44 = &cStack_4d;
  iStack_40 = iStack_40 + 1;
  uStack_38 = 1;
  uVar1 = 0;
  uStack_4c = param_3;
  uStack_48 = param_4;
  uStack_3c = param_5;
  do {
    if (param_7 <= uVar1) {
LAB_ram_4209cc58:
      thunk_FUN_ram_4206d7da(auStack_34,0x14);
      return 0;
    }
    if (param_7 - uVar1 < 0x14) {
      iVar2 = FUN_ram_4205fd6a(param_1,param_2,3,&uStack_4c,&iStack_40,auStack_34);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      FUN_ram_4039c11e(param_6 + uVar1,auStack_34,param_7 - uVar1);
      goto LAB_ram_4209cc58;
    }
    iVar2 = FUN_ram_4205fd6a(param_1,param_2,3,&uStack_4c,&iStack_40,param_6 + uVar1);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    uVar1 = uVar1 + 0x14;
    cStack_4d = cStack_4d + '\x01';
  } while( true );
}

