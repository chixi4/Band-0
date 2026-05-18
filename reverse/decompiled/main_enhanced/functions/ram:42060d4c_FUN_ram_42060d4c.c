
undefined4
FUN_ram_42060d4c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,
                undefined4 param_9,int param_10)

{
  int iVar1;
  uint uVar2;
  byte local_50 [16];
  undefined1 uStack_40;
  undefined1 auStack_3f [13];
  undefined2 uStack_32;
  byte local_30 [20];
  
  if (((param_8 < 0x1f) && (param_4 < 0x11)) && (iVar1 = FUN_ram_4205fd96(), iVar1 != 0)) {
    FUN_ram_42060c80(iVar1,param_4,param_3,param_7,param_8,param_6,local_50);
    FUN_ram_42060b44(iVar1,param_5,param_6,local_50);
    uStack_40 = 1;
    FUN_ram_4039c11e(auStack_3f,param_3,0xd);
    FUN_ram_42060bc6(iVar1,param_5,param_6,param_9,&uStack_40);
    uStack_32 = 0;
    FUN_ram_4205fdee(iVar1,&uStack_40,local_30);
    for (uVar2 = 0; param_4 != uVar2; uVar2 = uVar2 + 1) {
      *(byte *)(param_10 + uVar2) = local_50[uVar2] ^ local_30[uVar2];
    }
    FUN_ram_4205fdf8(iVar1);
    return 0;
  }
  return 0xffffffff;
}

