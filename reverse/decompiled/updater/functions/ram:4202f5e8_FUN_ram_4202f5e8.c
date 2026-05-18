
void FUN_ram_4202f5e8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_4202f224();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar1 = FUN_ram_4202505a(param_2,param_2,3);
      while (iVar1 == 0) {
        if ((-1 < *(short *)(param_2 + 4)) || (iVar1 = FUN_ram_42024dea(param_2,0), iVar1 == 0))
        goto LAB_ram_4202f642;
        iVar1 = FUN_ram_42025020(param_2,param_2,param_1 + 4);
      }
    }
    else {
      iVar1 = FUN_ram_4202f518(param_1,param_2,param_2,param_1 + 0xc);
      if (iVar1 == 0) {
LAB_ram_4202f642:
        iVar1 = FUN_ram_4202f224(param_1,param_2,param_2,param_3);
        if (iVar1 == 0) {
          FUN_ram_4202f518(param_1,param_2,param_2,param_1 + 0x14);
          return;
        }
      }
    }
  }
  return;
}

