
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201cc22(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == 1) {
    FUN_ram_4039c11e(&DAT_ram_3fcbb2c4,param_2,0xc);
    *(undefined1 *)(gp + -0x77a) = 1;
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 0) {
        return;
      }
      iVar1 = *param_2;
      _DAT_ram_3fcc50ec = iVar1;
      *(undefined1 *)(gp + -0x77a) = 1;
      *(bool *)(gp + -0x77b) = iVar1 != 4;
      goto LAB_ram_4201cc56;
    }
    FUN_ram_4039c11e(0x3fcbb27c,param_2,0x48);
    DAT_ram_3fcc50ea = 1;
    *(undefined1 *)(gp + -0x77a) = 1;
  }
  *(undefined1 *)(gp + -0x77b) = 0;
LAB_ram_4201cc56:
  FUN_ram_42018dcc();
  return;
}

