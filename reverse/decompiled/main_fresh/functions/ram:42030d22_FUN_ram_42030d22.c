
void FUN_ram_42030d22(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uStack_15;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_4202fef8(4,0x10,&uStack_14);
  if (iVar1 == 0) {
    *param_2 = 6;
  }
  else {
    uVar2 = FUN_ram_4202829c(param_1);
    FUN_ram_4039c11e(iVar1,uVar2,0x10);
    iVar1 = FUN_ram_4202ff46(*(undefined2 *)(param_1 + 10),uStack_14);
    if (iVar1 == 0) {
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        return;
      }
      iVar1 = FUN_ram_420309c2(param_1);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_42030b16(param_1,&uStack_15);
        if (iVar1 != 0) {
          *param_2 = 3;
          *(undefined1 *)(param_2 + 1) = 8;
          *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 2;
          return;
        }
        uVar3 = FUN_ram_42028026(uStack_15);
        if (uVar3 != *(byte *)(param_1 + 0xd)) {
          return;
        }
        if ((*(byte *)(param_1 + 8) & 2) != 0) {
          return;
        }
        *(undefined1 *)(param_2 + 2) = uStack_15;
        FUN_ram_420309f6(param_1,param_2);
        return;
      }
    }
    *param_2 = iVar1;
  }
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 2;
  *(undefined1 *)(param_2 + 1) = 8;
  return;
}

