
void FUN_ram_4205dea0(uint *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined1 uStack_2d;
  undefined *puStack_2c;
  undefined *puStack_28;
  int iStack_24;
  
  if ((param_1[10] & 8) == 0) {
    param_1 = (uint *)FUN_ram_4039bf1e();
  }
  if (param_1[4] != 0) {
    while (iVar2 = FUN_ram_4205c86e(param_1 + 4,&puStack_2c), puVar1 = puStack_2c, iVar2 != -1) {
      if (puStack_2c != &DAT_ram_3c0f75a5) {
        if ((*param_1 & 0xf0) == 0x10) {
          iVar2 = FUN_ram_4205dcee(puStack_2c,&puStack_28);
          if (iVar2 == 0) {
            FUN_ram_42053ac4(puVar1);
          }
        }
        else {
          FUN_ram_4205e6e8(puStack_2c);
        }
      }
    }
    FUN_ram_4205c8ac(param_1 + 4);
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    while (iVar2 = FUN_ram_4205c86e(param_1 + 5,&puStack_2c), puVar1 = puStack_2c, iVar2 != -1) {
      if ((puStack_2c != &DAT_ram_3c0f75a5) &&
         (iVar2 = FUN_ram_4205dcee(puStack_2c,&uStack_2d), iVar2 == 0)) {
        puVar1[0x28] = puVar1[0x28] | 8;
        FUN_ram_4205dea0(puVar1);
        if (*(int *)(puVar1 + 8) != 0) {
          puStack_28 = (undefined *)0x0;
          iStack_24 = *(int *)(puVar1 + 8);
          FUN_ram_42051f3c(0x4204d716,&puStack_28);
          *(undefined4 *)(puVar1 + 8) = 0;
        }
        FUN_ram_4205de78(puVar1);
      }
    }
    FUN_ram_4205c8ac(param_1 + 5);
    param_1[5] = 0;
  }
  return;
}

