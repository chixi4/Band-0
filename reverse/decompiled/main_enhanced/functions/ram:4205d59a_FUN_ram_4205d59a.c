
void FUN_ram_4205d59a(int param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    FUN_ram_4205c96c();
    iVar4 = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 1;
    *(char *)(param_1 + 0xc) = (char)param_2;
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_ram_4205c996();
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
      (**(code **)(param_1 + 0x30))(param_1,4,0);
    }
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
      (**(code **)(param_1 + 0x30))(param_1,0,0);
    }
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
      (**(code **)(param_1 + 0x30))(param_1,2,0);
    }
    if (param_2 == -0xe) {
      puVar2 = &DAT_ram_3c0f75a3;
    }
    else if (param_2 == -0xd) {
      puVar2 = &DAT_ram_3c0f75a4;
    }
    else if (param_2 == -0xf) {
      puVar2 = &DAT_ram_3c0f75a2;
    }
    else {
      puVar2 = (undefined *)0x0;
      if (param_2 != 0) goto LAB_ram_4205d5a6;
    }
    if ((*(int *)(param_1 + 0x10) != 0) && ((*(byte *)(param_1 + 0x28) & 8) == 0)) {
      FUN_ram_4205c7fc(param_1 + 0x10);
    }
    if ((*(int *)(param_1 + 0x14) != 0) && ((*(byte *)(param_1 + 0x28) & 8) == 0)) {
      FUN_ram_4205c7fc(param_1 + 0x14,puVar2);
    }
    if ((iVar4 == 1) || (iVar4 - 3U < 2)) {
      bVar1 = *(byte *)(param_1 + 0x28);
      *(byte *)(param_1 + 0x28) = bVar1 & 0xfb;
      if ((bVar1 & 4) != 0) {
        return;
      }
      iVar3 = *(int *)(param_1 + 0x2c);
      if (iVar3 != 0) {
        if (iVar4 == 4) {
          param_2 = 0;
        }
        *(char *)(iVar3 + 4) = (char)param_2;
        if ((*(int **)(iVar3 + 0x24) != (int *)0x0) && (**(int **)(iVar3 + 0x24) != 0)) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
          FUN_ram_4205c6fa();
          return;
        }
      }
    }
    else if (*(int *)(param_1 + 0x2c) == 0) {
      return;
    }
  }
LAB_ram_4205d5a6:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

