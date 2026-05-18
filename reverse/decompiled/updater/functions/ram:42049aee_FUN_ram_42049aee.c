
/* WARNING: Type propagation algorithm not settling */

int FUN_ram_42049aee(uint param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                    undefined1 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bStack_41;
  int iStack_40;
  int aiStack_3c [2];
  undefined2 uStack_34;
  
  bStack_41 = 2;
  iStack_40 = 0;
  aiStack_3c[0] = 3;
  aiStack_3c[1] = 0;
  uStack_34 = 0;
  uVar1 = 4;
  while ((((iVar2 = FUN_ram_4204d7f4(uVar1), iVar2 == 0 ||
           (FUN_ram_42049a8c(&bStack_41,&iStack_40,aiStack_3c,aiStack_3c + 1,uVar1 & 0xff,param_5,
                             param_6), bStack_41 != param_1)) || (param_2 != iStack_40)) ||
         ((param_3 != aiStack_3c[0] ||
          (iVar3 = FUN_ram_40399d6c(aiStack_3c + 1,param_4,6), iVar3 != 0))))) {
    uVar1 = uVar1 + 1;
    if (uVar1 == 0xc) {
      return 0;
    }
  }
  return iVar2;
}

