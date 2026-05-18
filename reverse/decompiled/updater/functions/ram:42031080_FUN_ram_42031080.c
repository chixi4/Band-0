
int FUN_ram_42031080(int param_1,undefined1 param_2,undefined1 *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 auStack_60 [68];
  
  if (0x40 < param_4) {
    uVar1 = FUN_ram_42028dc8(0xb);
    iVar2 = FUN_ram_420290ee(uVar1,param_3,param_4,auStack_60);
    if (iVar2 != 0) goto LAB_ram_42031102;
    param_3 = auStack_60;
    param_4 = 0x40;
  }
  uStack_63 = (undefined1)param_4;
  uStack_64 = param_2;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = FUN_ram_42028dc8(0xb);
    iVar2 = FUN_ram_42028f3c(param_1,uVar1,0);
    if ((iVar2 != 0) || (iVar2 = FUN_ram_42029004(param_1), iVar2 != 0)) goto LAB_ram_42031102;
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  iVar2 = FUN_ram_4202905e(param_1,&uStack_64,2);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_4202905e(param_1,param_3,param_4);
  }
LAB_ram_42031102:
  FUN_ram_420293a6(auStack_60,0x40);
  return iVar2;
}

