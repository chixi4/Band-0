
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42046084(int param_1,uint param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined1 auStack_2c [20];
  int *piVar4;
  
  (*(code *)&SUB_ram_40010488)(&iStack_3c,0,0x1c);
  _DAT_ram_3fcc51a0 = 0;
  _DAT_ram_3fcc51a4 = 0;
  if (param_1 != 0) {
    if (param_2 != 0) {
      iStack_3c = param_1;
      uStack_38 = param_2;
      FUN_ram_4039c11e(auStack_2c,gp + -0x45c,0xc);
      iVar1 = FUN_ram_42045bd8(*(undefined4 *)(gp + -0x45c));
      if (iVar1 != 0) {
        piVar4 = (int *)0x0;
        if (iStack_3c != 0) {
          if (uStack_34 == 0) {
            if ((4 < uStack_38) &&
               (iVar2 = FUN_ram_4039c5aa(iStack_3c,
                                         "Stay polite in social time without overinvesting.",3),
               iVar2 == 0)) {
              uStack_34 = 3;
            }
            piVar4 = &iStack_3c;
          }
          else {
            piVar4 = (int *)0x0;
          }
        }
        uVar3 = FUN_ram_42045b0e(piVar4);
        iVar2 = FUN_ram_42045c6c(iVar1,uVar3);
        if ((iVar2 != 0) &&
           ((param_4 == 0 ||
            ((FUN_ram_42045b0e(&iStack_3c), uStack_34 < uStack_38 &&
             (*(char *)(iStack_3c + uStack_34) == '\0')))))) {
          if (param_3 == (int *)0x0) {
            return iVar1;
          }
          *param_3 = iStack_3c + uStack_34;
          return iVar1;
        }
        FUN_ram_42045c02(iVar1);
      }
    }
    if ((uStack_38 <= uStack_34) && (uStack_34 = 0, uStack_38 != 0)) {
      uStack_34 = uStack_38 - 1;
    }
    _DAT_ram_3fcc51a0 = param_1;
    _DAT_ram_3fcc51a4 = uStack_34;
    if (param_3 != (int *)0x0) {
      *param_3 = param_1 + uStack_34;
    }
  }
  return 0;
}

