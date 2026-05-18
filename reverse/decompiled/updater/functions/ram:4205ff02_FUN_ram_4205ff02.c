
undefined4
FUN_ram_4205ff02(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_458;
  undefined1 *puStack_454;
  undefined4 uStack_450;
  undefined1 *puStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined1 auStack_430 [512];
  undefined1 auStack_230 [520];
  
  iVar1 = FUN_ram_420663cc(param_3,auStack_430,0x200,
                           *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x68));
  if (-1 < iVar1) {
    iVar1 = FUN_ram_420663cc(param_6,auStack_230,0x200,
                             *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x68));
    if (-1 < iVar1) {
      iVar1 = *(int *)(param_1 + 0x7c);
      uStack_444 = 2;
      uStack_440 = *(undefined4 *)(iVar1 + 0x68);
      if (*(int *)(iVar1 + 0x40) == 0x20) {
        uStack_458 = param_2;
        puStack_454 = auStack_430;
        uStack_450 = param_4;
        puStack_44c = auStack_230;
        uStack_448 = param_7;
        uStack_43c = param_5;
        uStack_438 = uStack_440;
        uStack_434 = param_8;
        uVar2 = FUN_ram_42021b5c(iVar1,0x20,5,&uStack_458,&uStack_444,param_9);
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}

