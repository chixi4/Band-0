
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203b75a(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (byte *)0x0) {
    if (*param_1 < 0x50) {
      param_1[1] = 0;
      iVar2 = (*(code *)&SUB_ram_40012084)();
      if (iVar2 == 0) {
        param_1[1] = param_1[1] | 1;
      }
      if ((*param_1 != 0x31) || (param_1[8] != 2)) {
        param_1[1] = param_1[1] | 2;
      }
      if ((param_1[1] & 3) == 3) {
        iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x44))();
        *(int *)(param_1 + 0x10) = iVar2;
        if (iVar2 == 0) {
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
          FUN_ram_42033fd8(1,2,2,0x3c07fc5c);
          return 0x101;
        }
      }
      bVar1 = param_1[1];
      if ((bVar1 & 1) == 0) {
        iVar2 = FUN_ram_42039944(param_1);
        if ((bVar1 & 2) == 0) {
          return 0;
        }
      }
      else {
        iVar2 = FUN_ram_4203bf94();
        if (iVar2 == 0) {
          iVar3 = (*(code *)&SUB_ram_40012088)();
          if (((iVar3 != 3) && (*param_1 != 0x26)) && (*param_1 != 0)) {
            FUN_ram_4203bf68();
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
            return 0x3001;
          }
          iVar3 = FUN_ram_4203c1ec();
          if (((iVar3 != 0) && (*param_1 != 2)) && (*param_1 != 0x1a)) {
            FUN_ram_4203bf68();
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
            return 0x3014;
          }
          iVar3 = (*(code *)&SUB_ram_40011c5c)(6,param_1);
          if (iVar3 != 0) {
            FUN_ram_42033fd8(1,2,2,0x3c07fc84,*param_1);
            FUN_ram_4203bf68();
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
            return 0x3012;
          }
          FUN_ram_4203bf68();
          if ((bVar1 & 2) == 0) {
            return 0;
          }
          iVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x3c))
                            (*(undefined4 *)(param_1 + 0x10),0xffffffff);
          if (iVar3 == 1) {
            iVar2 = *(int *)(param_1 + 0xc);
          }
        }
      }
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
      return iVar2;
    }
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
  }
  return 0x102;
}

