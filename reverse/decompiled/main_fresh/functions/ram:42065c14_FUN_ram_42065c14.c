
void FUN_ram_42065c14(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_1 != 0) {
    if ((param_2 != (int *)0x0) && (-1 < *param_2)) {
      if (*(char *)(param_1 + 0x3c) != '\0') {
        uStack_18 = 1;
        uStack_14 = *(undefined4 *)(param_1 + 0x40);
        FUN_ram_42051b14(*param_2,0xfff,0x80,&uStack_18);
      }
      if (*(code **)(param_1 + 0x58) == (code *)0x0) {
        FUN_ram_420b1020(*param_2);
      }
      else {
        (**(code **)(param_1 + 0x58))(param_1);
      }
      FUN_ram_42064d46(7,param_2,4);
      FUN_ram_42065b5a(param_2);
      *param_2 = -1;
      iVar1 = *(int *)(param_1 + 0x78) + -1;
      *(int *)(param_1 + 0x78) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x3f8) = 0;
        *(undefined4 *)(param_1 + 0x3fc) = 0;
      }
    }
    return;
  }
  return;
}

