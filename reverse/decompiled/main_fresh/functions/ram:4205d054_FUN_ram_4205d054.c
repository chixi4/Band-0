
int FUN_ram_4205d054(int param_1,int *param_2)

{
  int iVar1;
  char cStack_3d;
  int iStack_3c;
  int aiStack_38 [10];
  
  if ((param_2 == (int *)0x0) || (*param_2 = 0, param_1 == 0)) {
    iVar1 = -0x10;
  }
  else {
    iVar1 = FUN_ram_4205d02a();
    cStack_3d = (char)iVar1;
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 0x14) != 0) && ((*(byte *)(param_1 + 0x28) & 9) == 0)) {
        FUN_ram_4205c96c();
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        FUN_ram_4205c996();
        if ((*(byte *)(param_1 + 0x28) & 2) == 0) {
          iVar1 = FUN_ram_4205c824(param_1 + 0x14,&iStack_3c,*(undefined4 *)(param_1 + 0x24));
          if (iVar1 == -1) {
            FUN_ram_4205c96c();
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
            FUN_ram_4205c996();
            return -3;
          }
        }
        else {
          iVar1 = FUN_ram_4205c86e(param_1 + 0x14,&iStack_3c);
          if (iVar1 == -1) {
            FUN_ram_4205c96c();
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
            FUN_ram_4205c996();
            return -7;
          }
        }
        FUN_ram_4205c96c();
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        FUN_ram_4205c996();
        if (((*(byte *)(param_1 + 0x28) & 8) != 0) &&
           (iVar1 = FUN_ram_4205dcde(iStack_3c), iVar1 != 0)) {
          return -0xb;
        }
        if (*(code **)(param_1 + 0x30) != (code *)0x0) {
          (**(code **)(param_1 + 0x30))(param_1,1,0);
        }
        iVar1 = FUN_ram_4205dcee(iStack_3c,&cStack_3d);
        if (iVar1 != 0) {
          return (int)cStack_3d;
        }
        if (iStack_3c != 0) {
          aiStack_38[0] = iStack_3c;
          FUN_ram_4205cd16(0x4204e470,aiStack_38);
          *param_2 = iStack_3c;
          return 0;
        }
      }
      iVar1 = -0xf;
    }
  }
  return iVar1;
}

