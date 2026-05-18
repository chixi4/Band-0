
undefined4 FUN_ram_4206893c(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = (uint)*(ushort *)((int)param_2 + 6);
  do {
    if (uVar1 == 0) {
LAB_ram_4206896a:
      uVar2 = FUN_ram_42068310(param_1,0);
      return uVar2;
    }
    if (*(int *)(*param_2 + uVar1 * 4 + -4) != 0) {
      if (param_3 != 0) {
        iVar3 = FUN_ram_420680a2(param_1,uVar1 + 1);
        if ((iVar3 == 0) && (iVar3 = FUN_ram_4206826c(param_1,param_2), iVar3 == 0)) {
          FUN_ram_42069cbe(*param_1,*(undefined2 *)((int)param_1 + 6),*param_2,uVar1,param_3 + -1);
          uVar2 = 0;
        }
        else {
          uVar2 = 0xfffffff0;
        }
        return uVar2;
      }
      goto LAB_ram_4206896a;
    }
    uVar1 = uVar1 - 1;
  } while( true );
}

